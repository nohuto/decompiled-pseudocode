/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18001C2B0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpMuiRegDupLanguageList @ 0x18001CDB8 (RtlpMuiRegDupLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpCreateLangFallbackList @ 0x18001DA28 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpInitializeUserList @ 0x180048720 (RtlpInitializeUserList.c)
 *     RtlpUpdateTEBLanguage @ 0x180048904 (RtlpUpdateTEBLanguage.c)
 *     LdrpMultiSZCchLength @ 0x18006B168 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18006B210 (RtlpCheckMuiMultiStringSafe.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, _WORD *a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  int updated; // ebx
  __int64 v9; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v21 = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v20 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x300) == 0x300 || (v5 & 1) != 0 && (v5 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v20);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v20);
      goto LABEL_20;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (v5 & 4) != 0 ? 4 : 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v9, &v21) < 0 )
      return (unsigned int)-1073741811;
    if ( v21 < 2 || *a2 || a2[1] )
    {
      if ( (int)LdrpCreateLangFallbackList(&BaseAddress, v20, 5LL, 0LL) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v21, v5 | 2u, 26, 5, &BaseAddress);
      if ( updated < 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        goto LABEL_23;
      }
      v14 = *((_WORD *)BaseAddress + 2);
      if ( !v14 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v14;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_20:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    if ( (MergedPrefLanguages[10] & 0x40) == 0 )
    {
LABEL_22:
      MergedPrefLanguages[10] |= 0x80u;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_23;
    }
    v15 = ((__int64 (*)(void))RtlpMuiRegDupLanguageList)();
    MergedPrefLanguages = (_DWORD *)v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 40) &= ~0x40u;
      goto LABEL_22;
    }
    return (unsigned int)-1073741823;
  }
LABEL_23:
  if ( updated || !v6 )
    return (unsigned int)updated;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v11 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v11 = 0LL;
  if ( !v11 )
    goto LABEL_36;
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( (*(_BYTE *)(v11 + 40) & 0x40) == 0 )
      {
LABEL_31:
        v12 = *(_DWORD *)(v11 + 40) & 0xFFFFFFF9 | 2;
LABEL_32:
        *(_DWORD *)(v11 + 40) = v12;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v13 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v11 + 42) = 0;
            *(_DWORD *)(v11 + 40) |= v13 << 16;
          }
        }
        goto LABEL_36;
      }
      v16 = RtlpMuiRegDupLanguageList(v11);
      v11 = v16;
      if ( v16 )
      {
        updated = RtlpUpdateTEBLanguage(v16, 0LL, 4LL);
        if ( !updated )
        {
          *(_DWORD *)(v11 + 40) &= ~0x40u;
          goto LABEL_31;
        }
      }
      return 3221225473LL;
    }
    if ( (*(_BYTE *)(v11 + 40) & 0x40) != 0 )
    {
      v17 = RtlpMuiRegDupLanguageList(v11);
      v11 = v17;
      if ( !v17 )
        return 3221225473LL;
      updated = RtlpUpdateTEBLanguage(v17, 0LL, 4LL);
      if ( updated )
        return 3221225473LL;
      *(_DWORD *)(v11 + 40) &= ~0x40u;
    }
    v12 = *(_DWORD *)(v11 + 40) & 0xFFFFFFF9 | 4;
    goto LABEL_32;
  }
  *(_DWORD *)(v11 + 40) &= 0xFFFFFFF9;
LABEL_36:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return (unsigned int)updated;
}
