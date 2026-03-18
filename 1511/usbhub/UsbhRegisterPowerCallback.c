/*
 * XREFs of UsbhRegisterPowerCallback @ 0x1C0009E20
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhRegisterPowerCallback(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  v2 = FdoExt(DeviceObject);
  result = PoRegisterPowerSettingCallback(
             DeviceObject,
             &GUID_USB_SETTING_SELECTIVE_SUSPEND,
             UsbhPowerCallback,
             (PVOID)v2,
             (PVOID *)(v2 + 5248));
  if ( result >= 0 )
    *(_DWORD *)(v2 + 5240) = 1;
  return result;
}
