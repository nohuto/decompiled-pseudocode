/*
 * XREFs of PopCsStateChanged @ 0x140632510
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406376E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14054A65C (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopCsStateChanged(char a1)
{
  PopAcquirePowerRequestPushLock(1);
  if ( a1 )
  {
    if ( PopExecutionRequiredTimeout )
    {
      PopLastCsEnterTime = MEMORY[0xFFFFF78000000008];
      KeSetTimer(
        &PopExecutionRequiredTimer,
        (LARGE_INTEGER)(-10000000LL * (unsigned int)PopExecutionRequiredTimeout),
        &PopExecutionRequiredTimeoutDpc);
    }
  }
  else
  {
    PopLastCsEnterTime = 0LL;
    PopExecutionTimeoutProcessed = 0;
    PopEnableExecutionRequiredPowerRequests(1);
  }
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
