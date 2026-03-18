/*
 * XREFs of PsTerminateServerSilo @ 0x1402443F4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspShutdownServerSilos @ 0x1406C292C (PspShutdownServerSilos.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 */

__int64 __fastcall PsTerminateServerSilo(__int64 a1)
{
  __int64 v3; // rdi

  if ( !a1 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 256);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 112), 2, 1) == 1 )
  {
    PsTerminateAllProcessesInSilo(a1);
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)(v3 + 96) = PspTerminateServerSiloDeferred;
    *(_QWORD *)(v3 + 104) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 80), DelayedWorkQueue);
  }
  return 0LL;
}
