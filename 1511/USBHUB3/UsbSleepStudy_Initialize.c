/*
 * XREFs of UsbSleepStudy_Initialize @ 0x1C003307C
 * Callers:
 *     DriverEntry @ 0x1C0073000 (DriverEntry.c)
 * Callees:
 *     McGenEventRegister @ 0x1C00011AC (McGenEventRegister.c)
 *     UsbSleepStudy_Uninitialize @ 0x1C00331B8 (UsbSleepStudy_Uninitialize.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 */

__int64 UsbSleepStudy_Initialize()
{
  PETWENABLECALLBACK v0; // rdx
  int v1; // eax
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  DbgPrint("UsbSleepStudy_Initialize: Enter\r\n");
  McGenEventRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v0,
    &SLEEPSTUDY_ETW_PROVIDER_Context,
    &Microsoft_Windows_SleepStudyHandle);
  qword_1C005A978 = (__int64)&gDevicesListHead;
  gDevicesListHead = (__int64)&gDevicesListHead;
  KeInitializeSpinLock(&gDevicesListSpinLock);
  gWnfSubscriptionHandle = 0LL;
  gPowerSettingCallbackHandle = 0LL;
  v5 = WNF_PO_SCENARIO_CHANGE;
  gIsInConnectedStandby = 0;
  gIsWithinLpe = 0;
  v1 = ExSubscribeWnfStateChange(&gWnfSubscriptionHandle, &v5, 1LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    DbgPrint("UsbSleepStudy_Initialize: UsbSleepStudy_SubscribeCsChange failed with %#010x\r\n", v1);
    gWnfSubscriptionHandle = 0LL;
LABEL_5:
    UsbSleepStudy_Uninitialize();
    goto LABEL_6;
  }
  v3 = PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         UsbSleepStudy_LpePowerSettingCallback,
         0LL,
         &gPowerSettingCallbackHandle);
  v2 = v3;
  if ( v3 < 0 )
  {
    DbgPrint("UsbSleepStudy_Initialize: PoRegisterPowerSettingCallback failed with %#010x\r\n", v3);
    gPowerSettingCallbackHandle = 0LL;
    goto LABEL_5;
  }
LABEL_6:
  DbgPrint("UsbSleepStudy_Initialize: Exit\r\n");
  return v2;
}
