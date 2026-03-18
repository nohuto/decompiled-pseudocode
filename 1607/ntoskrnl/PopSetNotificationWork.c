/*
 * XREFs of PopSetNotificationWork @ 0x140008A40
 * Callers:
 *     PopUserPresentSet @ 0x1400B4DC8 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x140139B7C (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F2E38 (PoRegisterPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     PopUserPresentSetWorker @ 0x1404F0484 (PopUserPresentSetWorker.c)
 *     PopGetSettingNotificationName @ 0x14051FCC4 (PopGetSettingNotificationName.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopApplyPolicy @ 0x14056DFD8 (PopApplyPolicy.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140008B0C (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x140009C44 (PopCheckForWork.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
