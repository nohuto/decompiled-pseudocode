/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1800E999C
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800E9138 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x18001CF98 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x18001E2C8 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001ED84 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _MuiRegAllocArray @ 0x18001EECC (_MuiRegAllocArray.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180049FE8 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180067018 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800731F0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtIsUILanguageComitted @ 0x180094830 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180094C70 (NtQueryInstallUILanguage.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800E79B4 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1800E9D48 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x1800E9F84 (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800EA0D0 (_RtlpRemovePendingDeleteLanguages.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // esi
  unsigned int v4; // r15d
  unsigned __int16 *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  LANGID v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r9
  __int16 v25; // cx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v30; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v31; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v32; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING v33; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v34; // [rsp+50h] [rbp-B8h] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  LANGID v36; // [rsp+64h] [rbp-A4h]
  int v37; // [rsp+66h] [rbp-A2h]
  __int64 v38; // [rsp+6Ch] [rbp-9Ch]
  __int64 v39; // [rsp+74h] [rbp-94h]
  _WORD v40[88]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v30 = -1;
  v32 = 0LL;
  memset(v40, 0, 170);
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
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
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, &v30);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LOWORD(v31) = -1;
    v12 = (unsigned __int16 *)MuiRegAllocArray(v11, 0x55u);
    v32 = v12;
    v5 = v12;
    if ( !v12 )
      return -1073741801;
    if ( RtlpInitAndCallLcidToCultureName(&v34, v12, InstallUILanguageId[0]) )
    {
      LOBYTE(v13) = 1;
      v14 = RtlpMuiRegGetOrAddString(a1, v34.Buffer, v13, (__int16 *)&v31);
      v15 = -1;
      if ( v14 >= 0 )
        v15 = v31;
      v37 = v15;
      v36 = InstallUILanguageId[0];
      v35 = 49;
      v38 = 0LL;
      v39 = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)&v35, v34.Buffer);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v35, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v30;
LABEL_16:
    if ( v3 != -1 )
    {
      v33.Buffer = v40;
      v33.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &v33) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, v33.Buffer) >= 0 )
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
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 0;
  if ( *(_WORD *)(v16 + 6) )
  {
    v18 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v18 + *(_QWORD *)(v16 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v17);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v20 = *(_WORD *)(v19 + v18);
        if ( (v20 & 0x1000) == 0 )
          ++v4;
        if ( v8 && v17 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v19 + v18) = v20 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v18) |= 0x8000u;
        }
      }
      v16 = *(_QWORD *)(a1 + 24);
      ++v17;
      v18 += 28LL;
    }
    while ( v17 < *(unsigned __int16 *)(v16 + 6) );
    v5 = v32;
  }
  v21 = *(_QWORD *)(a1 + 24);
  v22 = 0LL;
  if ( *(_WORD *)(v21 + 6) )
  {
    v23 = 0LL;
    do
    {
      v24 = *(_QWORD *)(v21 + 16);
      v25 = *(_WORD *)(v24 + v23);
      if ( (v25 & 0x21) == 0x21 )
      {
        if ( (v25 & 0x1000) == 0 )
          ++v4;
        if ( v8 && (_DWORD)v22 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v24 + v23) = v25 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v23) |= 0x8000u;
        }
      }
      v21 = *(_QWORD *)(a1 + 24);
      v22 = (unsigned int)(v22 + 1);
      v23 += 28LL;
    }
    while ( (int)v22 < *(unsigned __int16 *)(v21 + 6) );
    v5 = v32;
  }
  v26 = *(_QWORD *)(a1 + 24);
  v27 = 0;
  if ( *(_WORD *)(v26 + 6) )
  {
    v28 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v28 + *(_QWORD *)(v26 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v27, v22);
      v26 = *(_QWORD *)(a1 + 24);
      ++v27;
      v28 += 28LL;
    }
    while ( v27 < *(unsigned __int16 *)(v26 + 6) );
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
