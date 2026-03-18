/*
 * XREFs of GetLocalMachineRegistryDWORDValues @ 0x1C003CE30
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C003CD04 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     InitializeTouchPadSysParams @ 0x1C0150DA0 (InitializeTouchPadSysParams.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D2A8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C003D594 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall GetLocalMachineRegistryDWORDValues(__int64 a1, const unsigned __int16 *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  NTSTATUS PointerDeviceCfgDWORDSetting; // ebx
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v12; // [rsp+80h] [rbp-80h] BYREF

  v3 = *a3;
  *(_DWORD *)&v9.Length = 45875200;
  KeyHandle = 0LL;
  v9.Buffer = (PWSTR)&v12;
  v10 = v3;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringCopyString(&v9, L"\\Registry\\Machine");
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    PointerDeviceCfgDWORDSetting = RtlUnicodeStringCatString(&v9, a2);
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(
                                         KeyHandle,
                                         (struct tagDEVICECONFIG_SETTING *)&v10);
        if ( PointerDeviceCfgDWORDSetting >= 0 && HIDWORD(v10) != DWORD2(v10) )
        {
          *((_DWORD *)a3 + 3) = HIDWORD(v10);
          PointerDeviceCfgDWORDSetting = 0;
        }
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)PointerDeviceCfgDWORDSetting;
}
