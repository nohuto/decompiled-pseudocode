/*
 * XREFs of PopCsStateChanged @ 0x14066AA48
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066FAA0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F7D8 (PopEnableExecutionRequiredPowerRequests.c)
 *     PopIsUserInitiatedMonitorRequestReason @ 0x14066C2EC (PopIsUserInitiatedMonitorRequestReason.c)
 */

void __fastcall PopCsStateChanged(char a1)
{
  __int64 v2; // rcx
  int v3; // edx
  char v4; // cl

  PopAcquirePowerRequestPushLock(1);
  if ( !a1 )
  {
    PopLastCsEnterTime = 0LL;
    v4 = 1;
    PopExecutionTimeoutProcessed = 0;
    goto LABEL_7;
  }
  if ( (unsigned __int8)PopIsUserInitiatedMonitorRequestReason(v2, 0LL) )
  {
    v4 = 0;
LABEL_7:
    PopEnableExecutionRequiredPowerRequests(v4);
    goto LABEL_8;
  }
  if ( PopExecutionRequiredTimeout != v3 )
  {
    PopLastCsEnterTime = MEMORY[0xFFFFF78000000008];
    KiSetTimerEx(
      (__int64)&PopExecutionRequiredTimer,
      -10000000LL * (unsigned int)PopExecutionRequiredTimeout,
      0,
      0,
      (__int64)&PopExecutionRequiredTimeoutDpc);
  }
LABEL_8:
  PopReleaseRwLock(&PopPowerRequestLock);
}
