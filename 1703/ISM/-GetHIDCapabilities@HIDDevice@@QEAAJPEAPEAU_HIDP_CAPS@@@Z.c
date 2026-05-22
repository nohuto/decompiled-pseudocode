/*
 * XREFs of ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007E2EC
 * Callers:
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074EE0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180077BA4 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007C300 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x18007C714 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007D050 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall HIDDevice::GetHIDCapabilities(HIDDevice *this, struct _HIDP_CAPS **a2)
{
  unsigned int v2; // ebx
  NTSTATUS Caps; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( *((_WORD *)this + 31)
    || (Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 6), (PHIDP_CAPS)((char *)this + 60)), Caps >= 0) )
  {
    *a2 = (struct _HIDP_CAPS *)((char *)this + 60);
  }
  else
  {
    v2 = Caps | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 85, Caps);
  }
  return v2;
}
