/*
 * XREFs of UsbhPowerCallback @ 0x1C0009EA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshEnableDisable @ 0x1C0009F68 (UsbhSshEnableDisable.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhPowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, _QWORD *Context)
{
  unsigned int v8; // ebx
  __int64 v9; // rsi

  v8 = -1073741811;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  v9 = Context[150];
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 && ValueLength == 4 && Value )
  {
    if ( *Value )
      *((_DWORD *)Context + 1309) = 1;
    else
      *((_DWORD *)Context + 1309) = 2;
    v8 = 0;
    UsbhSshEnableDisable(v9);
  }
  return v8;
}
