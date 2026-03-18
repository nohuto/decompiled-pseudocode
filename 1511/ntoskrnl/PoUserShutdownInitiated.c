/*
 * XREFs of PoUserShutdownInitiated @ 0x1404F5250
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  char v1; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result && *((_QWORD *)&PoPdcCallbacks + 1) )
  {
    PopAcquirePolicyLock();
    if ( PopUserShutdownInProgress )
    {
      return PopReleasePolicyLock();
    }
    else
    {
      PopUserShutdownInProgress = 1;
      if ( !byte_1402DEB64 )
      {
        PopUserShutdownDelayWorker.Parameter = 0LL;
        PopUserShutdownDelayWorker.List.Flink = 0LL;
        PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
        KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
        KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
        byte_1402DEB64 = 1;
      }
      PopReleasePolicyLock();
      v1 = (*((__int64 (**)(void))&PoPdcCallbacks + 1))();
      result = KeSetTimer(&PopUserShutdownDelayTimer, (LARGE_INTEGER)-900000000LL, &PopUserShutdownDelayDpc);
      if ( v1 )
        return PpmBeginHighPerfRequest();
    }
  }
  return result;
}
