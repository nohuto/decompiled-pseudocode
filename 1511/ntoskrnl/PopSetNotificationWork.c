/*
 * XREFs of PopSetNotificationWork @ 0x140097574
 * Callers:
 *     PopUserPresentSet @ 0x1400F1E14 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x140136C9C (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14045429C (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 *     PopUserPresentSetWorker @ 0x1404C552C (PopUserPresentSetWorker.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopApplyPolicy @ 0x14053E204 (PopApplyPolicy.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1400FF0E8 (PopCheckForWork.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL, a2);
    return PopCheckForWork();
  }
  return result;
}
