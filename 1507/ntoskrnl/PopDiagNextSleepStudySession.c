/*
 * XREFs of PopDiagNextSleepStudySession @ 0x1406B8720
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x1401481F8 (PopForceCompleteSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceSleepStudyStart @ 0x1406B9D0C (PopDiagTraceSleepStudyStart.c)
 */

void __fastcall PopDiagNextSleepStudySession(GUID *a1, __int64 a2)
{
  GUID *v4; // rax
  __int128 v5; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF
  char v7; // [rsp+50h] [rbp-18h]

  if ( !PopSleepStudyDisabled )
  {
    KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
    v4 = (GUID *)PopWdiCurrentScenario;
    if ( (GUID *)PopWdiCurrentScenario == &NullGuid && a1 == &NullGuid )
    {
      KeReleaseMutex(&PopWdiTimerMutex, 0);
    }
    else
    {
      ++PopWdiCurrentScenarioInstanceId;
      PopWdiCurrentScenario = (__int64)a1;
      if ( v4 == &NullGuid )
      {
        if ( PopWdiTimerQueued )
          PopWdiNewScenarioWaiting = 1;
        else
          PopDiagTraceSleepStudyStart();
      }
      else if ( PopWdiTimerQueued )
      {
        PopWdiNewScenarioWaiting = 0;
      }
      else
      {
        if ( a2 )
        {
          PopWdiScenarioStopEventData = *(_OWORD *)a2;
          *((_OWORD *)&PopWdiScenarioStopEventData + 1) = *(_OWORD *)(a2 + 16);
          *((_OWORD *)&PopWdiScenarioStopEventData + 2) = *(_OWORD *)(a2 + 32);
          *((_OWORD *)&PopWdiScenarioStopEventData + 3) = *(_OWORD *)(a2 + 48);
          *((_OWORD *)&PopWdiScenarioStopEventData + 4) = *(_OWORD *)(a2 + 64);
          *((_OWORD *)&PopWdiScenarioStopEventData + 5) = *(_OWORD *)(a2 + 80);
          *((_OWORD *)&PopWdiScenarioStopEventData + 6) = *(_OWORD *)(a2 + 96);
          *((_OWORD *)&PopWdiScenarioStopEventData + 7) = *(_OWORD *)(a2 + 112);
          *((_QWORD *)&PopWdiScenarioStopEventData + 16) = *(_QWORD *)(a2 + 128);
        }
        KiSetTimerEx((__int64)&PopWdiTimer, PopWdiTimerTimeoutValue, 0, 0, (__int64)&PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      KeReleaseMutex(&PopWdiTimerMutex, 0);
      v5 = *(_OWORD *)PopWdiCurrentScenario;
      v7 = PopWdiCurrentScenarioInstanceId;
      Buffer = v5;
      ZwUpdateWnfStateData(&WNF_PO_SCENARIO_CHANGE, &Buffer, 0x14u, 0LL, 0LL, 0, 0);
    }
  }
}
