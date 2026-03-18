/*
 * XREFs of ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0154030
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D2A8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C003D594 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall CreatePredictionSettings(struct tagDEVICECONFIG_SETTING *a1, __int64 a2, unsigned __int16 *a3)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // r14
  void *KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Disposition; // [rsp+60h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  char v12; // [rsp+98h] [rbp-70h] BYREF

  *(_DWORD *)&v9.Length = 45875200;
  KeyHandle = 0LL;
  v9.Buffer = (PWSTR)&v12;
  v4 = RtlUnicodeStringCopyString(&v9, (char *)L"\\Registry\\Machine");
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(&v9, L"\\Software\\Microsoft\\TouchPrediction");
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( v4 >= 0 )
      {
        v4 = 0;
        v5 = (_DWORD *)((char *)a1 + 12);
        v6 = 3LL;
        do
        {
          if ( (int)ReadPointerDeviceCfgDWORDSetting(KeyHandle, (PCWSTR *)a1) < 0 )
            *v5 = -1;
          a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
          v5 += 4;
          --v6;
        }
        while ( v6 );
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)v4;
}
