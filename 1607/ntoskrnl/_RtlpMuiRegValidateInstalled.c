/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1405612B0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140560DC8 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1401404F4 (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140140740 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1401407F8 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     NtQueryInstallUILanguage @ 0x1404C1B84 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x14056152C (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140561934 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x140561AC4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x140561AE4 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14057CDFC (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlLCIDToCultureName @ 0x140688FE8 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1406E82A0 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x1406E84D0 (_RtlpMuiRegValidatePartialLanguage.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  __int16 v2; // di
  int v3; // r14d
  unsigned int v4; // r15d
  wchar_t *v5; // r12
  LANGID v6; // si
  bool v7; // r13
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int16 v18; // cx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rsi
  wchar_t *v22; // rax
  __int64 v23; // r8
  bool v24; // sf
  LANGID v25; // ax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int16 v28; // ax
  LANGID LanguageId[4]; // [rsp+28h] [rbp-E0h] BYREF
  wchar_t *v30; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING String; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  LANGID v33; // [rsp+4Ch] [rbp-BCh]
  LANGID v34; // [rsp+4Eh] [rbp-BAh]
  __int16 v35; // [rsp+50h] [rbp-B8h]
  _WORD v36[10]; // [rsp+54h] [rbp-B4h]
  _BYTE v37[176]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = -1;
  LanguageId[0] = 0;
  LanguageId[2] = -1;
  v30 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v37, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted != 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(LanguageId);
    if ( result < 0 )
      return result;
    v6 = LanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0LL, &LanguageId[2]);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LanguageId[0] = -1;
    v22 = (wchar_t *)MuiRegAllocArray(v10, 0x55u);
    v30 = v22;
    v5 = v22;
    if ( !v22 )
      return -1073741801;
    String.Buffer = v22;
    if ( !RtlLCIDToCultureName(v6, &String) )
      goto LABEL_12;
    LOBYTE(v23) = 1;
    v24 = (int)RtlpMuiRegGetOrAddString(a1, String.Buffer, v23, LanguageId) < 0;
    v25 = -1;
    if ( !v24 )
      v25 = LanguageId[0];
    v34 = v25;
    v26 = 0LL;
    v32 = 49;
    v33 = v6;
    v35 = 0;
    do
    {
      v36[v26] = 0;
      v36[v26++ + 4] = 0;
    }
    while ( v26 < 4 );
    RtlpMuiRegAddNeutralLanguage(a1, &v32);
    if ( (int)RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v32, 0LL) < 0 )
      goto LABEL_12;
    v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
    goto LABEL_8;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = (__int16)LanguageId[2];
LABEL_8:
    if ( v3 != -1 )
    {
      String.Buffer = (wchar_t *)v37;
      String.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &String) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, String.Buffer) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
        else
        {
          v4 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( v7 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = 0;
  if ( *(_WORD *)(v11 + 6) )
  {
    v13 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v13 + *(_QWORD *)(v11 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v12);
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v28 = *(_WORD *)(v27 + v13);
        if ( (v28 & 0x1000) == 0 )
          ++v4;
        if ( v7 && v12 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v27 + v13) = v28 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v13) |= 0x8000u;
        }
      }
      v11 = *(_QWORD *)(a1 + 24);
      ++v12;
      v13 += 28LL;
    }
    while ( v12 < *(unsigned __int16 *)(v11 + 6) );
    v5 = v30;
  }
  v14 = *(_QWORD *)(a1 + 24);
  v15 = 0LL;
  if ( *(_WORD *)(v14 + 6) )
  {
    v16 = 0LL;
    do
    {
      v17 = *(_QWORD *)(v14 + 16);
      v18 = *(_WORD *)(v17 + v16);
      if ( (v18 & 0x21) == 0x21 )
      {
        if ( (v18 & 0x1000) == 0 )
          ++v4;
        if ( v7 && (_DWORD)v15 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v17 + v16) = v18 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v16) |= 0x8000u;
        }
      }
      v14 = *(_QWORD *)(a1 + 24);
      v15 = (unsigned int)(v15 + 1);
      v16 += 28LL;
    }
    while ( (int)v15 < *(unsigned __int16 *)(v14 + 6) );
    v5 = v30;
  }
  v19 = *(_QWORD *)(a1 + 24);
  v20 = 0;
  if ( *(_WORD *)(v19 + 6) )
  {
    v21 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v21 + *(_QWORD *)(v19 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v20, v15);
      v19 = *(_QWORD *)(a1 + 24);
      ++v20;
      v21 += 28LL;
    }
    while ( v20 < *(unsigned __int16 *)(v19 + 6) );
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return 0;
}
