/*
 * XREFs of WriteTiltCalibrationData @ 0x1C01C2DC8
 * Callers:
 *     _SetCalibrationData @ 0x1C01D4244 (_SetCalibrationData.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C003D0A4 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01C16E0 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 */

__int64 __fastcall WriteTiltCalibrationData(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        ULONG a4,
        PVOID Data)
{
  unsigned int v5; // ebx
  __int64 v7; // rsi
  int v8; // edi
  struct _UNICODE_STRING v10; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Disposition; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  char v16; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0;
  v10 = *a2;
  SourceString = 0LL;
  v7 = a3;
  if ( (int)GetTiltKeyName(&v10, (unsigned __int16 **)&SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_DWORD *)&v10.Length = 91750400;
    v10.Buffer = (PWSTR)&v16;
    v8 = RtlUnicodeStringCopy(&v10, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL));
    if ( v8 >= 0 )
    {
      v8 = RtlUnicodeStringCatString(&v10, off_1C02EB970[v7]);
      if ( v8 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v10;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v8 >= 0 )
        {
          v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, a4);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool(SourceString);
    if ( v8 >= 0 )
      return 1;
  }
  return v5;
}
