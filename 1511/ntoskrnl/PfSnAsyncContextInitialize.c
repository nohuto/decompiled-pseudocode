/*
 * XREFs of PfSnAsyncContextInitialize @ 0x1404DFB18
 * Callers:
 *     PfSnPrefetchScenario @ 0x1404DFA78 (PfSnPrefetchScenario.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     PfSnReferenceProcessTrace @ 0x1400FAFB0 (PfSnReferenceProcessTrace.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall PfSnAsyncContextInitialize(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rcx
  __int64 v9; // rdx

  memset(a1, 0, 0xF8uLL);
  a1[26] = a2;
  a1[4] = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[27] = Process;
  ObfReferenceObject(Process);
  a1[28] = PfSnReferenceProcessTrace(a1[27]);
  *(_QWORD *)a1[4] = 0LL;
  *((_DWORD *)a1 + 59) = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
  a1[2] = PfSnAsyncPrefetchWorker;
  a1[3] = a1;
  *a1 = v9;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  a1[5] = v9;
  a1[24] = PfSnPowerBoostWorker;
  a1[25] = a1 + 5;
  a1[22] = v9;
  KeInitializeTimerEx((PKTIMER)(a1 + 6), (TIMER_TYPE)v9);
  KeInitializeDpc((PRKDPC)(a1 + 14), (PKDEFERRED_ROUTINE)PfSnPowerBoostDpc, a1 + 5);
}
