/*
 * XREFs of PopCheckExecutionRequiredPowerRequests @ 0x14066A868
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F32C (PopEnableExecutionRequiredPowerRequests.c)
 */

void PopCheckExecutionRequiredPowerRequests()
{
  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  if ( byte_140303F74
    && PopLastCsEnterTime
    && !PopExecutionTimeoutProcessed
    && PopExecutionRequiredTimeout != -1
    && MEMORY[0xFFFFF78000000008] - PopLastCsEnterTime >= 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout )
  {
    PopExecutionTimeoutProcessed = 1;
    PopEnableExecutionRequiredPowerRequests(0);
  }
  PopReleaseRwLock(&PopPowerRequestLock);
}
