/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x18003BB00
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18003A1E8 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180082AD0 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x1800DC7C0 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlpIsALicensedLIPLanguage @ 0x180068D84 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180068F28 (RtlpIsALicensedRegularLanguage.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall GetLCIDFromLangListNodeWithLICCheck(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r12
  _QWORD *v9; // rdi
  unsigned __int16 v10; // ax
  int InstalledLanguageIndexByName; // eax
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  DWORD Lcid; // [rsp+20h] [rbp-C1h] BYREF
  __int16 v21; // [rsp+24h] [rbp-BDh] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-B9h] BYREF
  _WORD v23[88]; // [rsp+40h] [rbp-A1h] BYREF

  v5 = 0;
  v6 = a3;
  Lcid = 0;
  v21 = 0;
  memset(v23, 0, 170);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)a3 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = g_RegInfo;
  if ( *(_QWORD *)(a2 + 16) )
    v9 = *(_QWORD **)(a2 + 16);
  *a5 = 0;
  v10 = *a4;
  if ( !*a4 )
  {
    *a4 = 0;
    v12 = *(_QWORD *)(a2 + 24);
    if ( *(_WORD *)(v12 + 6LL * a3) == 1 )
    {
      v14 = *(_WORD *)(v12 + 6LL * a3 + 4);
    }
    else
    {
      if ( *(_WORD *)(v12 + 6LL * a3) == 2 )
      {
        v15 = *(_WORD *)(28LL * *(__int16 *)(v12 + 6LL * a3 + 4) + *(_QWORD *)(v9[3] + 16LL) + 4);
        *a4 = v15;
        if ( v15 )
        {
LABEL_28:
          v18 = *(_QWORD *)(a2 + 32);
          *a5 = !_bittest64(&v18, v6);
          return v5;
        }
        v16 = 28LL * *(__int16 *)(v12 + 6LL * a3 + 4);
        v17 = *(_QWORD *)(v9[3] + 16LL);
        if ( *(__int16 *)(v16 + v17 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v13 = *(__int16 *)(v16 + v17 + 6);
      }
      else
      {
        if ( *(_WORD *)(v12 + 6LL * a3) != 3 )
          return (unsigned int)-1073741595;
        v13 = *(__int16 *)(v12 + 6LL * a3 + 4);
      }
      RtlInitUnicodeString(
        &String,
        (PCWSTR)(*(_QWORD *)(v9[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v9[4] + 16LL) + 2 * v13)));
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
        return (unsigned int)-1073741595;
      v14 = Lcid;
    }
    *a4 = v14;
    goto LABEL_28;
  }
  String.Buffer = v23;
  String.MaximumLength = 170;
  if ( !RtlLCIDToCultureName(v10, &String) )
    return (unsigned int)-1073741823;
  if ( *((_DWORD *)v9 + 30) < 0x3E8u )
  {
    InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v9, String.Buffer, 1, &v21);
  }
  else
  {
    if ( (int)RtlpIsALicensedRegularLanguage(v9, String.Buffer) >= 0 )
      return v5;
    InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage(v9, String.Buffer);
  }
  if ( InstalledLanguageIndexByName < 0 )
    *a5 = 1;
  return v5;
}
