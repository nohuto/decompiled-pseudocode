/*
 * XREFs of ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CD49C
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00C2650 (RIMOnTimerNotification.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C40FC (RIMMarkEndPointerMessageDelivery.c)
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     RIMReassessContactDelivery @ 0x1C00CBEA0 (RIMReassessContactDelivery.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CC210 (RIMValidatePointerDeviceCurrentState.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D02F4 (RIMGetPTPClickButtonState.c)
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 * Callees:
 *     IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0 @ 0x1C0002D50 (IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0.c)
 *     DwmAsyncNotifyDigitizerActiveContactsWrap_0 @ 0x1C0002D58 (DwmAsyncNotifyDigitizerActiveContactsWrap_0.c)
 */

__int64 ApiSetDwmAsyncNotifyDigitizerActiveContacts()
{
  __int64 result; // rax

  result = IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0();
  if ( (int)result >= 0 )
    return DwmAsyncNotifyDigitizerActiveContactsWrap_0();
  return result;
}
