/*
 * XREFs of UsbhRegisterPowerCallback @ 0x1C001F5E8
 * Callers:
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhRegisterPowerCallback(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID *v5; // rbx
  NTSTATUS result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v5 = (PVOID *)FdoExt((__int64)DeviceObject, a2, a3, a4);
  result = PoRegisterPowerSettingCallback(
             DeviceObject,
             &GUID_USB_SETTING_SELECTIVE_SUSPEND,
             (PPOWER_SETTING_CALLBACK)UsbhPowerCallback,
             v5,
             v5 + 656);
  if ( result >= 0 )
    *((_DWORD *)v5 + 1310) = 1;
  return result;
}
