/*
 * XREFs of UsbhUxdShutdown @ 0x1C0057954
 * Callers:
 *     UsbhDeviceShutdown @ 0x1C004B480 (UsbhDeviceShutdown.c)
 * Callees:
 *     UsbhGetGlobalUxdSettings @ 0x1C000B2AC (UsbhGetGlobalUxdSettings.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0057000 (UsbhDeleteUxdSubKeys.c)
 *     UsbhOpenUxdPortHandle @ 0x1C00575A0 (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhUxdShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v5 = FdoExt(a1, a2, a3, a4);
  v6 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_5b132266348c32d7b0c29b24875d7db7_Traceguids);
  UsbhGetGlobalUxdSettings((__int64)v6, (_QWORD *)v5 + 647);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle, v7, v8);
    ZwClose(KeyHandle);
  }
  KeyHandle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &KeyHandle, v7, v8) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle, v9, v10);
    ZwClose(KeyHandle);
  }
  return 0LL;
}
