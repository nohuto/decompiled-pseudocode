/*
 * XREFs of PopCsStateChanged @ 0x14066A964
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066F9BC (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F32C (PopEnableExecutionRequiredPowerRequests.c)
 *     PopIsUserInitiatedMonitorRequestReason @ 0x14066C208 (PopIsUserInitiatedMonitorRequestReason.c)
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
