/*
 * XREFs of ReadTiltCalibrationData @ 0x1C01C3C84
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0098070 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0125CD8 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0125D94 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01C32A0 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01C3374 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 */

__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  struct _UNICODE_STRING v3; // xmm6
  int v4; // r12d
  int TiltKeyName; // edi
  int v7; // ecx
  __int64 i; // rax
  _DWORD *v9; // r14
  __int64 j; // rsi
  unsigned __int8 **v11; // r15
  unsigned int *v12; // r8
  struct _UNICODE_STRING v13; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v15; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v16; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 **v19[4]; // [rsp+88h] [rbp-80h]
  unsigned int *v20[4]; // [rsp+A8h] [rbp-60h]
  _DWORD v21[4]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v22[704]; // [rsp+D8h] [rbp-30h] BYREF
  char v23; // [rsp+658h] [rbp+550h] BYREF

  v2 = *(_QWORD *)(a1 + 320);
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 764);
  SourceString = 0LL;
  if ( !v2 )
    return 3221225628LL;
  *(_DWORD *)&v15.Length = 45875200;
  v15.Buffer = (PWSTR)&v23;
  TiltKeyName = RtlUnicodeStringCopy(&v15, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL));
  if ( TiltKeyName >= 0 )
  {
    v7 = 1;
    v20[0] = (unsigned int *)(v2 + 24);
    v20[1] = (unsigned int *)(v2 + 40);
    v20[2] = (unsigned int *)(v2 + 56);
    v20[3] = (unsigned int *)(v2 + 72);
    v19[0] = (unsigned __int8 **)(v2 + 16);
    v19[1] = (unsigned __int8 **)(v2 + 32);
    v19[2] = (unsigned __int8 **)(v2 + 48);
    v19[3] = (unsigned __int8 **)(v2 + 64);
    for ( i = 0LL; i < 4; ++i )
      v21[i] = v7++;
    v13 = v3;
    TiltKeyName = GetTiltKeyName(&v13, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      v9 = v21;
      for ( j = 0LL; j < 4; ++j )
      {
        memset(v22, 0, 1400);
        *(_DWORD *)&v13.Length = 91750400;
        v13.Buffer = v22;
        RtlCopyUnicodeString(&v13, &v15);
        TiltKeyName = RtlUnicodeStringCatString(&v13, off_1C02EA930[j]);
        if ( TiltKeyName >= 0 )
        {
          v11 = v19[j];
          v12 = v20[j];
          v16 = v13;
          v18 = DestinationString_8;
          TiltKeyName = ReadCalibrationDataImp(&v18, &v16, v12, v11);
          if ( TiltKeyName >= 0 && v4 == *v9 )
            *(_QWORD *)(v2 + 80) = *v11;
        }
        ++v9;
      }
      Win32FreePool(SourceString);
    }
  }
  return (unsigned int)TiltKeyName;
}
