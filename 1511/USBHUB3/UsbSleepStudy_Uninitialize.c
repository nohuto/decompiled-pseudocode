/*
 * XREFs of UsbSleepStudy_Uninitialize @ 0x1C00331B8
 * Callers:
 *     DriverCleanup @ 0x1C0001A30 (DriverCleanup.c)
 *     UsbSleepStudy_Initialize @ 0x1C003307C (UsbSleepStudy_Initialize.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C00011C4 (McGenEventUnregister.c)
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
  gIsWithinLpe = 0;
  return DbgPrint("UsbSleepStudy_Uninitialize: Exit\r\n");
}
