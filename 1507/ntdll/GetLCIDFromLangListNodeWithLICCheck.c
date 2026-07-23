/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x180066760 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x1800D48A0 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x18001CF98 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18006DDE4 (RtlpIsALicensedLIPLanguage.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
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
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  unsigned __int16 v15; // ax
  int InstalledLanguageIndexByName; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
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
    v11 = *(_QWORD *)(a2 + 24);
    switch ( *(_WORD *)(v11 + 6LL * a3) )
    {
      case 1:
        v15 = *(_WORD *)(v11 + 6LL * a3 + 4);
LABEL_14:
        *a4 = v15;
        goto LABEL_11;
      case 2:
        v12 = *(_WORD *)(28LL * *(__int16 *)(v11 + 6LL * a3 + 4) + *(_QWORD *)(v9[3] + 16LL) + 4);
        *a4 = v12;
        if ( v12 )
        {
LABEL_11:
          v13 = *(_QWORD *)(a2 + 32);
          *a5 = !_bittest64(&v13, v6);
          return v5;
        }
        v18 = 28LL * *(__int16 *)(v11 + 6LL * a3 + 4);
        v19 = *(_QWORD *)(v9[3] + 16LL);
        if ( *(__int16 *)(v18 + v19 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v17 = *(__int16 *)(v18 + v19 + 6);
        break;
      case 3:
        v17 = *(__int16 *)(v11 + 6LL * a3 + 4);
        break;
      default:
        return (unsigned int)-1073741595;
    }
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_QWORD *)(v9[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v9[4] + 16LL) + 2 * v17)));
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v15 = Lcid;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
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
