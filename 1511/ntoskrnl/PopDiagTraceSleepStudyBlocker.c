/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x1401F0680
 * Callers:
 *     PpmIdleStopCsVetoAccounting @ 0x1401E7F40 (PpmIdleStopCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1406344F0 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWrite(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 6u, a2);
  }
}
