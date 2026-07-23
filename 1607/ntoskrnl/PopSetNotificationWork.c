/*
 * XREFs of PopSetNotificationWork @ 0x1400085B4
 * Callers:
 *     PopUserPresentSet @ 0x1400B2C00 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x14013A0EC (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     PopUserPresentSetWorker @ 0x1404D2578 (PopUserPresentSetWorker.c)
 *     PopGetSettingNotificationName @ 0x140502D2C (PopGetSettingNotificationName.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1400097C4 (PopCheckForWork.c)
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
