/*
 * XREFs of UsbhRegisterPowerCallback @ 0x1C001D818
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
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
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
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
