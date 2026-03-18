/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x140639C18
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x1401F114C (PopWdiTimerWorkerThread.c)
 *     PopDiagNextSleepStudySession @ 0x14063861C (PopDiagNextSleepStudySession.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStart()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  char *v2; // [rsp+40h] [rbp-38h]
  int v3; // [rsp+48h] [rbp-30h]
  int v4; // [rsp+4Ch] [rbp-2Ch]
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_START) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      v7 = 0;
      UserData.Ptr = PopWdiCurrentScenario;
      v2 = &PopWdiCurrentScenarioInstanceId;
      v5 = &PopPdcLastCsEnterReason;
      UserData.Size = 16;
      v3 = 1;
      v6 = 4;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_START, &PopDiagActivityId, 3u, &UserData);
    }
  }
}
