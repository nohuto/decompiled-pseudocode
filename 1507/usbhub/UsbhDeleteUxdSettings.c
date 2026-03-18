/*
 * XREFs of UsbhDeleteUxdSettings @ 0x1C005675C
 * Callers:
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044FC4 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C00508D0 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhGetGlobalUxdSettings @ 0x1C000639C (UsbhGetGlobalUxdSettings.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0056604 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C00566A8 (UsbhDeleteUxdPortSettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C0056DF8 (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhDeleteUxdSettings(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rdi
  PDEVICE_OBJECT v12; // rcx
  int v13; // ebx
  bool v14; // zf
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = PdoExt(a2, a2, a3, a4);
  v11 = FdoExt(a1, v8, v9, v10);
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Fu,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
  UsbhGetGlobalUxdSettings((__int64)v12, (_QWORD *)v11 + 647);
  v13 = v5 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return 0LL;
    if ( !v7[653] )
    {
      v14 = v11[1296] == 0;
      goto LABEL_9;
    }
  }
  else if ( !v7[652] )
  {
    v14 = v11[1295] == 0;
LABEL_9:
    if ( v14 )
      return 0LL;
  }
  v15 = *((unsigned __int16 *)v7 + 710);
  Handle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &Handle) >= 0 )
  {
    UsbhDeleteUxdPortSettings(v16, (const WCHAR *)Handle, v15);
    ZwClose(Handle);
  }
  UsbhDeleteUxdDeviceKey(v16, a2, v17, v18);
  return 0LL;
}
