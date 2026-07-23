/*
 * XREFs of PopDiagNextCsSleepStudySession @ 0x1406708E8
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceSleepStudyStart @ 0x140671C44 (PopDiagTraceSleepStudyStart.c)
 */

void __fastcall PopDiagNextCsSleepStudySession(GUID *a1, __int64 a2)
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
          *((_OWORD *)&PopWdiScenarioStopEventData + 8) = *(_OWORD *)(a2 + 128);
          *((_QWORD *)&PopWdiScenarioStopEventData + 18) = *(_QWORD *)(a2 + 144);
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
