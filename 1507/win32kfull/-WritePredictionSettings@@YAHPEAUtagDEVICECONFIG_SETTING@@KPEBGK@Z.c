/*
 * XREFs of ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C022593C
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C0225B3C (WritePointerDeviceSettings.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D2A8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C02258E8 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

__int64 __fastcall WritePredictionSettings(struct tagDEVICECONFIG_SETTING *a1, __int64 a2, const unsigned __int16 *a3)
{
  unsigned int v3; // edi
  const unsigned __int16 **v4; // rsi
  unsigned int v5; // ebx
  NTSTATUS v6; // r14d
  struct _UNICODE_STRING v8; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  char v11; // [rsp+88h] [rbp-80h] BYREF

  *(_DWORD *)&v8.Length = 45875200;
  v8.Buffer = (PWSTR)&v11;
  v3 = 0;
  if ( (int)RtlUnicodeStringCopyString(&v8, (char *)L"\\Registry\\Machine") < 0 )
    return 0;
  if ( (int)RtlUnicodeStringCatString(&v8, L"\\Software\\Microsoft\\TouchPrediction") < 0 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v8;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0;
  v4 = (const unsigned __int16 **)&gaPredictionSettings;
  v5 = 1;
  do
  {
    v6 = WritePointerDeviceCfgSetting(KeyHandle, *v4, 4u, (unsigned __int8 *)&dword_1C031EF4C[4 * v3], 4u);
    if ( v6 < 0 )
      break;
    ++v3;
    v4 += 2;
  }
  while ( v3 < 3 );
  ZwClose(KeyHandle);
  if ( v6 < 0 )
    return 0;
  return v5;
}
