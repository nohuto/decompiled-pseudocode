/*
 * XREFs of PopCheckExecutionRequiredPowerRequests @ 0x140632414
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14054A65C (PopEnableExecutionRequiredPowerRequests.c)
 */

void PopCheckExecutionRequiredPowerRequests()
{
  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  if ( byte_1402DDF74
    && PopLastCsEnterTime
    && !PopExecutionTimeoutProcessed
    && PopExecutionRequiredTimeout != -1
    && MEMORY[0xFFFFF78000000008] - PopLastCsEnterTime >= 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout )
  {
    PopExecutionTimeoutProcessed = 1;
    PopEnableExecutionRequiredPowerRequests(0);
  }
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
