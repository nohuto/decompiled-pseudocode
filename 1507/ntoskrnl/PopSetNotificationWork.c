/*
 * XREFs of PopSetNotificationWork @ 0x1400D0780
 * Callers:
 *     PopUserPresentSet @ 0x14012DEE4 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x14015F24C (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E4240 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404E98A4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopUserPresentSetWorker @ 0x14055BF78 (PopUserPresentSetWorker.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x1400D01A4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 */

struct _KTHREAD *__fastcall PopSetNotificationWork(unsigned int a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)(a1 & PopNotifyEvents);
  if ( (_DWORD)result != a1 )
  {
    if ( (PoDebug & 0x10) != 0 )
      DbgPrint("PopSetNotificationWork: Queue notification of event: %x\n", a1);
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4);
    return PopCheckForWork();
  }
  return result;
}
