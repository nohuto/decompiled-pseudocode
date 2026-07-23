/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x1800104C8
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857A0 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x1800E5AB0 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlpIsALicensedLIPLanguage @ 0x18001146C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180011610 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall GetLCIDFromLangListNodeWithLICCheck(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        bool *a5)
{
  unsigned __int64 v5; // r12
  unsigned int v7; // ebx
  _QWORD *v9; // rdi
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  int InstalledLanguageIndexByName; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DWORD Lcid; // [rsp+20h] [rbp-C1h] BYREF
  __int16 v22; // [rsp+24h] [rbp-BDh] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-B9h] BYREF
  _BYTE v24[176]; // [rsp+40h] [rbp-A1h] BYREF

  v5 = a3;
  v7 = 0;
  Lcid = 0;
  v22 = 0;
  memset(v24, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v5 >= *(_WORD *)(a2 + 4) )
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
    switch ( *(_WORD *)(v11 + 6 * v5) )
    {
      case 1:
        v15 = *(_WORD *)(v11 + 6 * v5 + 4);
LABEL_14:
        *a4 = v15;
        goto LABEL_11;
      case 2:
        v12 = *(_WORD *)(28LL * *(__int16 *)(v11 + 6 * v5 + 4) + *(_QWORD *)(v9[3] + 16LL) + 4);
        *a4 = v12;
        if ( v12 )
        {
LABEL_11:
          v13 = *(_QWORD *)(a2 + 32);
          *a5 = !_bittest64(&v13, v5);
          return v7;
        }
        v19 = 28LL * *(__int16 *)(v11 + 6 * v5 + 4);
        v20 = *(_QWORD *)(v9[3] + 16LL);
        if ( *(__int16 *)(v19 + v20 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v18 = *(__int16 *)(v19 + v20 + 6);
        break;
      case 3:
        v18 = *(__int16 *)(v11 + 6 * v5 + 4);
        break;
      default:
        return (unsigned int)-1073741595;
    }
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_QWORD *)(v9[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v9[4] + 16LL) + 2 * v18)));
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v15 = Lcid;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  String.MaximumLength = 170;
  String.Buffer = (wchar_t *)v24;
  if ( !RtlLCIDToCultureName(v10, &String) )
    return (unsigned int)-1073741823;
  if ( *((_DWORD *)v9 + 30) < 0x3E8u )
  {
    LOBYTE(v16) = 1;
    InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(v9, String.Buffer, v16, &v22);
  }
  else
  {
    if ( (int)RtlpIsALicensedRegularLanguage(v9, String.Buffer) >= 0 )
      return v7;
    InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage(v9, String.Buffer);
  }
  if ( InstalledLanguageIndexByName < 0 )
    *a5 = 1;
  return v7;
}
