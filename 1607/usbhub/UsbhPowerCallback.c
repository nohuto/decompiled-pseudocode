/*
 * XREFs of UsbhPowerCallback @ 0x1C001F520
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshEnableDisable @ 0x1C001E600 (UsbhSshEnableDisable.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhPowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, _QWORD *Context)
{
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx

  v8 = -1073741811;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v9 = Context[150];
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 && ValueLength == 4 && Value )
  {
    if ( *Value )
      *((_DWORD *)Context + 1309) = 1;
    else
      *((_DWORD *)Context + 1309) = 2;
    v8 = 0;
    v12 = 3;
    if ( *((_DWORD *)Context + 1309) == 1 )
      v12 = 2;
    UsbhSshEnableDisable(v9, v12, v10, v11);
  }
  return v8;
}
