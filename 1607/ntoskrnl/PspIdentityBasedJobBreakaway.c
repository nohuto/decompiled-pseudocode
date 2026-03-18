/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x14067F17C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404722F8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14000CC98 (RtlQueryPackageIdentity.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v5; // si
  int v6; // eax
  int v7; // ebx
  char v8; // al
  int PackageIdentity; // eax
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[7]; // [rsp+31h] [rbp-CFh] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v14; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-98h] BYREF
  WCHAR v17[72]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v18[72]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR v20[128]; // [rsp+2A0h] [rbp+1A0h] BYREF

  *a3 = 0;
  *(_QWORD *)&DestinationString.Length = 132LL;
  *(_QWORD *)&v14.Length = 256LL;
  *(_QWORD *)&String2.Length = 256LL;
  *(_QWORD *)&String1.Length = 256LL;
  v11 = 0;
  v5 = 0;
  v12[0] = 0;
  v6 = RtlQueryPackageIdentity(a1, (__int64)SourceString, (__int64)&v14, (__int64)v17, (__int64)&String2, &v11);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    v8 = v11;
  }
  if ( v7 >= 0 )
  {
    if ( !v8 )
      *a3 = 1;
    if ( !*a3 )
    {
      PackageIdentity = RtlQueryPackageIdentity(
                          a2,
                          (__int64)v20,
                          (__int64)&String1,
                          (__int64)v18,
                          (__int64)&DestinationString,
                          v12);
      v7 = PackageIdentity;
      if ( PackageIdentity == -1073741275 || PackageIdentity == -2147483643 )
      {
        v5 = 0;
        v7 = 0;
      }
      else
      {
        v5 = v12[0];
      }
    }
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        if ( *(_QWORD *)&v14.Length != *(_QWORD *)&String1.Length
          || *(_QWORD *)&String2.Length != *(_QWORD *)&DestinationString.Length
          || (RtlInitUnicodeString(&DestinationString, SourceString),
              RtlInitUnicodeString(&String1, v17),
              RtlInitUnicodeString(&String2, v20),
              RtlInitUnicodeString(&v14, v18),
              !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
          || !RtlEqualUnicodeString(&String1, &v14, 1u) )
        {
          *a3 = 1;
        }
      }
    }
  }
  return (unsigned int)v7;
}
