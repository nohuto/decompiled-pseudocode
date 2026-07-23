/*
 * XREFs of PoUserShutdownInitiated @ 0x140534720
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     PpmBeginHighPerfRequest @ 0x1401323F8 (PpmBeginHighPerfRequest.c)
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
      if ( !byte_140304104 )
      {
        PopUserShutdownDelayWorker.Parameter = 0LL;
        PopUserShutdownDelayWorker.List.Flink = 0LL;
        PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
        KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
        KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
        byte_140304104 = 1;
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
