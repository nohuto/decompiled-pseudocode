/*
 * XREFs of UsbSleepStudy_Uninitialize @ 0x1C0036214
 * Callers:
 *     DriverCleanup @ 0x1C0001AA0 (DriverCleanup.c)
 *     UsbSleepStudy_Initialize @ 0x1C00360D0 (UsbSleepStudy_Initialize.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C00011E4 (McGenEventUnregister.c)
 */

ULONG UsbSleepStudy_Uninitialize()
{
  DbgPrint("UsbSleepStudy_Uninitialize: Enter\r\n");
  if ( gPowerSettingCallbackHandle )
  {
    DbgPrint("UsbSleepStudy_Uninitialize: Calling PoUnregisterPowerSettingCallback\r\n");
    PoUnregisterPowerSettingCallback(gPowerSettingCallbackHandle);
  }
  if ( gWnfSubscriptionHandle )
  {
    DbgPrint("UsbSleepStudy_Uninitialize: Calling UsbSleepStudy_UnsubscribeCsChange\r\n");
    ExUnsubscribeWnfStateChange(gWnfSubscriptionHandle);
  }
  McGenEventUnregister(&Microsoft_Windows_SleepStudyHandle);
  gWnfSubscriptionHandle = 0LL;
  gPowerSettingCallbackHandle = 0LL;
  gIsInConnectedStandby = 0;
  gIsIdleResiliencyEngaged = 0;
  return DbgPrint("UsbSleepStudy_Uninitialize: Exit\r\n");
}
