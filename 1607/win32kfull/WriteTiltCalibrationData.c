/*
 * XREFs of WriteTiltCalibrationData @ 0x1C01C3BF4
 * Callers:
 *     _SetCalibrationData @ 0x1C01CCCF0 (_SetCalibrationData.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C006AAE8 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C006ABA4 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01C2AC8 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
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
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  char v18; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0;
  v13 = *a2;
  SourceString = 0LL;
  v7 = a3;
  if ( (int)GetTiltKeyName(&v13, (unsigned __int16 **)&SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_DWORD *)&v13.Length = 91750400;
    v13.Buffer = (PWSTR)&v18;
    v9 = RtlUnicodeStringCopy(&v13, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL));
    if ( v9 >= 0 )
    {
      v9 = RtlUnicodeStringCatString(&v13, off_1C02E5C88[v7]);
      if ( v9 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v13;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v9 >= 0 )
        {
          v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, a4);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool(SourceString, v8, v10);
    if ( v9 >= 0 )
      return 1;
  }
  return v5;
}
