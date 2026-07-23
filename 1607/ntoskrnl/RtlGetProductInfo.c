/*
 * XREFs of RtlGetProductInfo @ 0x140148640
 * Callers:
 *     ExGetSuiteMask @ 0x140576034 (ExGetSuiteMask.c)
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     CompareVersions @ 0x140148778 (CompareVersions.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14015C9F0 (ZwQueryLicenseValue.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        ULONG OSMajorVersion,
        ULONG OSMinorVersion,
        ULONG SpMajorVersion,
        ULONG SpMinorVersion,
        PULONG ReturnedProductType)
{
  ULONG v5; // esi
  BOOLEAN v6; // bl
  __int128 v7; // xmm6
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // r11
  ULONG ResultDataSize; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Data; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG Type; // [rsp+40h] [rbp-C8h] BYREF
  ULONG Type_8[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v18[52]; // [rsp+68h] [rbp-A0h] BYREF

  v5 = 0;
  Type = 0;
  v6 = 1;
  ResultDataSize = 0;
  Data = 0;
  Type_8[0] = OSMajorVersion;
  Type_8[1] = OSMinorVersion;
  Type_8[2] = SpMajorVersion;
  Type_8[3] = SpMinorVersion;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  v7 = *(_OWORD *)Type_8;
  v17 = xmmword_140279A90;
  if ( (int)CompareVersions(Type_8, &v17) < 0 )
    return 0;
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0
    || Type != 4
    || ResultDataSize != 4 )
  {
    *ReturnedProductType = -1412584499;
    return v6;
  }
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_14025AE80, &Type, v18, 0xC8u, &ResultDataSize) < 0 )
    goto LABEL_7;
  if ( Type != 3 || ResultDataSize < 0x14 || ResultDataSize % 0x14uLL )
    return 0;
  if ( ResultDataSize / 0x14uLL )
  {
    *(_OWORD *)Type_8 = v7;
    v9 = 0LL;
    do
    {
      v17 = *(_OWORD *)&v18[5 * v9];
      if ( (int)CompareVersions(Type_8, &v17) < 0 )
        v5 = v18[v12 + 4];
      v9 = (unsigned int)(v11 + 1);
    }
    while ( v9 < v10 );
    if ( v5 )
    {
      *ReturnedProductType = v5;
      return v6;
    }
  }
LABEL_7:
  *ReturnedProductType = Data;
  return v6;
}
