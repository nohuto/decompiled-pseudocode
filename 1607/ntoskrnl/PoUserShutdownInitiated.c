/*
 * XREFs of PoUserShutdownInitiated @ 0x1405341E0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14000D6DC (KeInitializeDpc.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeTimerEx @ 0x1400F0C50 (KeInitializeTimerEx.c)
 *     PpmBeginHighPerfRequest @ 0x140131E88 (PpmBeginHighPerfRequest.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  char v1; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result && *(&PoPdcCallbacks + 1) )
  {
    PopAcquirePolicyLock();
    if ( PopUserShutdownInProgress )
    {
      return PopReleasePolicyLock();
    }
    else
    {
      PopUserShutdownInProgress = 1;
      if ( !byte_1403040E4 )
      {
        PopUserShutdownDelayWorker.Parameter = 0LL;
        PopUserShutdownDelayWorker.List.Flink = 0LL;
        PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
        KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
        KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
        byte_1403040E4 = 1;
      }
      PopBsdShutdownInProgress = 1;
      PopReleasePolicyLock();
      v1 = (*(&PoPdcCallbacks + 1))();
      result = KiSetTimerEx((__int64)&PopUserShutdownDelayTimer, -900000000LL, 0, 0, (__int64)&PopUserShutdownDelayDpc);
      if ( v1 )
        return PpmBeginHighPerfRequest();
    }
  }
  return result;
}
