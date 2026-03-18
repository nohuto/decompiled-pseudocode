/*
 * XREFs of PoUserShutdownInitiated @ 0x140569744
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     PpmBeginHighPerfRequest @ 0x14015A718 (PpmBeginHighPerfRequest.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

void PoUserShutdownInitiated()
{
  char v0; // bl

  if ( *(&PoPdcCallbacks + 1) )
  {
    PopAcquirePolicyLock();
    if ( PopUserShutdownInProgress )
    {
      PopReleasePolicyLock();
    }
    else
    {
      PopUserShutdownInProgress = 1;
      if ( !byte_14032EE24 )
      {
        PopUserShutdownDelayWorker.Parameter = 0LL;
        PopUserShutdownDelayWorker.List.Flink = 0LL;
        PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
        KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
        KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
        byte_14032EE24 = 1;
      }
      PopReleasePolicyLock();
      v0 = (*(&PoPdcCallbacks + 1))();
      KiSetTimerEx((__int64)&PopUserShutdownDelayTimer, -900000000LL, 0, 0, (__int64)&PopUserShutdownDelayDpc);
      if ( v0 )
        PpmBeginHighPerfRequest();
    }
  }
}
