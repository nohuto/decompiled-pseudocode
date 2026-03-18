/*
 * XREFs of ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMReassessContactDelivery @ 0x1C00CCFC4 (RIMReassessContactDelivery.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CD3D0 (RIMValidatePointerDeviceCurrentState.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D1D6C (RIMGetPTPClickButtonState.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 * Callees:
 *     IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0 @ 0x1C0002D80 (IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0.c)
 *     DwmAsyncNotifyDigitizerActiveContactsWrap_0 @ 0x1C0002D88 (DwmAsyncNotifyDigitizerActiveContactsWrap_0.c)
 */

__int64 ApiSetDwmAsyncNotifyDigitizerActiveContacts()
{
  __int64 result; // rax

  result = IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0();
  if ( (int)result >= 0 )
    return DwmAsyncNotifyDigitizerActiveContactsWrap_0();
  return result;
}
