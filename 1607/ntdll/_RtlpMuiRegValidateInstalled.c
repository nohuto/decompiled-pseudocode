/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1800F69B8
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x180011610 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x180040CFC (RtlpMuiRegGetOrAddString.c)
 *     _MuiRegAllocArray @ 0x18004485C (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044984 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D70 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180076C5C (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180082910 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtIsUILanguageComitted @ 0x1800A82F0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A8BB0 (NtQueryInstallUILanguage.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800F4DF4 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1800F6D6C (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x1800F6FA8 (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800F70F4 (_RtlpRemovePendingDeleteLanguages.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // r14d
  unsigned int v4; // r15d
  wchar_t *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  LANGID v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  wchar_t *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  __int16 v26; // cx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v31; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t *v33; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING v34; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v35; // [rsp+50h] [rbp-B8h] BYREF
  int v36; // [rsp+60h] [rbp-A8h] BYREF
  LANGID v37; // [rsp+64h] [rbp-A4h]
  __int16 v38; // [rsp+66h] [rbp-A2h]
  __int16 v39; // [rsp+68h] [rbp-A0h]
  _WORD v40[14]; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v41[176]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v31 = -1;
  v33 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v41, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted == 0;
  if ( v7 )
  {
    InstallUILanguageId[0] = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v7 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, &v31);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LOWORD(v32) = -1;
    v12 = (wchar_t *)MuiRegAllocArray(v11, 0x55u);
    v33 = v12;
    v5 = v12;
    if ( !v12 )
      return -1073741801;
    if ( RtlpInitAndCallLcidToCultureName(&v35, v12, InstallUILanguageId[0]) )
    {
      LOBYTE(v13) = 1;
      v14 = RtlpMuiRegGetOrAddString(a1, v35.Buffer, v13, (__int16 *)&v32);
      v15 = -1;
      if ( v14 >= 0 )
        v15 = v32;
      v37 = InstallUILanguageId[0];
      v16 = 0LL;
      v36 = 49;
      v38 = v15;
      v39 = 0;
      do
      {
        v40[v16] = 0;
        v40[v16++ + 4] = 0;
      }
      while ( v16 < 4 );
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)&v36, v35.Buffer);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v36, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_18;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v31;
LABEL_18:
    if ( v3 != -1 )
    {
      v34.Buffer = (wchar_t *)v41;
      v34.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &v34) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, v34.Buffer) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  if ( v8 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v19 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v19 + *(_QWORD *)(v17 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v18);
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v21 = *(_WORD *)(v20 + v19);
        if ( (v21 & 0x1000) == 0 )
          ++v4;
        if ( v8 && v18 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      ++v18;
      v19 += 28LL;
    }
    while ( v18 < *(unsigned __int16 *)(v17 + 6) );
    v5 = v33;
  }
  v22 = *(_QWORD *)(a1 + 24);
  v23 = 0LL;
  if ( *(_WORD *)(v22 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)(v22 + 16);
      v26 = *(_WORD *)(v25 + v24);
      if ( (v26 & 0x21) == 0x21 )
      {
        if ( (v26 & 0x1000) == 0 )
          ++v4;
        if ( v8 && (_DWORD)v23 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v25 + v24) = v26 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v24) |= 0x8000u;
        }
      }
      v22 = *(_QWORD *)(a1 + 24);
      v23 = (unsigned int)(v23 + 1);
      v24 += 28LL;
    }
    while ( (int)v23 < *(unsigned __int16 *)(v22 + 6) );
    v5 = v33;
  }
  v27 = *(_QWORD *)(a1 + 24);
  v28 = 0;
  if ( *(_WORD *)(v27 + 6) )
  {
    v29 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v29 + *(_QWORD *)(v27 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v28, v23);
      v27 = *(_QWORD *)(a1 + 24);
      ++v28;
      v29 += 28LL;
    }
    while ( v28 < *(unsigned __int16 *)(v27 + 6) );
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
