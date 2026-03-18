/*
 * XREFs of ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00DE840
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00CFE90 (RIMOnTimerNotification.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0 @ 0x1C0002D60 (IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0.c)
 *     DwmAsyncNotifyDigitizerActiveContactsWrap_0 @ 0x1C0002D68 (DwmAsyncNotifyDigitizerActiveContactsWrap_0.c)
 */

__int64 ApiSetDwmAsyncNotifyDigitizerActiveContacts()
{
  __int64 result; // rax

  result = IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported_0();
  if ( (int)result >= 0 )
    return DwmAsyncNotifyDigitizerActiveContactsWrap_0();
  return result;
}
