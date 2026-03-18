/*
 * XREFs of PfSnAsyncContextInitialize @ 0x1404F5D18
 * Callers:
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x14001A540 (PfSnReferenceProcessTrace.c)
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     MmGetMinWsPagePriority @ 0x140043E34 (MmGetMinWsPagePriority.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall PfSnAsyncContextInitialize(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rcx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // edx

  memset(a1, 0, 0xF8uLL);
  a1[26] = a2;
  a1[4] = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[27] = Process;
  ObfReferenceObject(Process);
  a1[28] = PfSnReferenceProcessTrace(a1[27]);
  v9 = 0LL;
  *(_QWORD *)a1[4] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v12 = MmGetMinWsPagePriority() + 1;
    if ( v13 < v12 )
      v12 = v13;
    v11 = v12;
  }
  *((_DWORD *)a1 + 59) = v11;
  a1[2] = PfSnAsyncPrefetchWorker;
  a1[3] = a1;
  *a1 = v9;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  a1[5] = v9;
  a1[24] = PfSnPowerBoostWorker;
  a1[25] = a1 + 5;
  a1[22] = v9;
  KeInitializeTimerEx((PKTIMER)(a1 + 6), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a1 + 14), (PKDEFERRED_ROUTINE)PfSnPowerBoostDpc, a1 + 5);
}
