/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18003B530
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegDupLanguageList @ 0x1800046DC (RtlpMuiRegDupLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpCreateLangFallbackList @ 0x18001A418 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitializeUserList @ 0x18003B91C (RtlpInitializeUserList.c)
 *     LdrpMultiSZCchLength @ 0x18003BD04 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003BDAC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpUpdateTEBLanguage @ 0x18003EEF0 (RtlpUpdateTEBLanguage.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int64 a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  __int64 v8; // rdx
  int updated; // ebx
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  _BYTE *MergedPrefLanguages; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v22 = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v21 = 0LL;
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
  result = RtlpCreateProcessRegistryInfo(&v21);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v21);
      goto LABEL_34;
    }
    return 3221225485LL;
  }
  if ( !a2 )
  {
LABEL_28:
    if ( NtCurrentTeb()->PreferredLanguages )
    {
      RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
      NtCurrentTeb()->PreferredLanguages = 0LL;
    }
    NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_34:
    if ( !NtCurrentTeb()->MergedPrefLanguages )
      goto LABEL_39;
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    if ( (MergedPrefLanguages[40] & 0x40) != 0 )
    {
      v13 = RtlpMuiRegDupLanguageList((__int64)MergedPrefLanguages, v8);
      MergedPrefLanguages = (_BYTE *)v13;
      if ( !v13 )
        return (unsigned int)-1073741823;
      *(_DWORD *)(v13 + 40) &= ~0x40u;
    }
    *((_DWORD *)MergedPrefLanguages + 10) |= 0x80u;
    NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
    goto LABEL_39;
  }
  if ( (int)RtlpCheckMuiMultiStringSafe(a2, (v5 & 4) != 0 ? 4 : 85) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
  if ( (int)LdrpMultiSZCchLength(a2, v10, &v22) >= 0 )
  {
    if ( v22 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      if ( (int)LdrpCreateLangFallbackList((__int64 *)&BaseAddress, v21, 5, 0) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(
                  (__int64)g_RegInfo,
                  (const WCHAR *)a2,
                  v22,
                  v5 | 2u,
                  26,
                  5u,
                  (__int64 *)&BaseAddress);
      if ( updated < 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
LABEL_39:
        if ( updated || !v6 )
          return (unsigned int)updated;
        if ( NtCurrentTeb()->UserPrefLanguages )
          v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        else
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_63;
        if ( (v5 & 1) != 0 )
        {
          *(_DWORD *)(v14 + 40) &= 0xFFFFFFF9;
LABEL_63:
          RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
          return (unsigned int)updated;
        }
        if ( (v5 & 0x100) != 0 )
        {
          if ( (*(_BYTE *)(v14 + 40) & 0x40) == 0 )
          {
LABEL_53:
            v16 = *(_DWORD *)(v14 + 40) & 0xFFFFFFF9 | 2;
LABEL_59:
            *(_DWORD *)(v14 + 40) = v16;
            if ( (v5 & 0x8000) != 0 && a3 )
            {
              v18 = *a3;
              if ( *a3 )
              {
                *(_WORD *)(v14 + 42) = 0;
                *(_DWORD *)(v14 + 40) |= v18 << 16;
              }
            }
            goto LABEL_63;
          }
          v15 = RtlpMuiRegDupLanguageList(v14, v8);
          v14 = v15;
          if ( v15 )
          {
            updated = RtlpUpdateTEBLanguage(v15, 0LL, 4LL);
            if ( !updated )
            {
              *(_DWORD *)(v14 + 40) &= ~0x40u;
              goto LABEL_53;
            }
          }
          return 3221225473LL;
        }
        if ( (*(_BYTE *)(v14 + 40) & 0x40) != 0 )
        {
          v17 = RtlpMuiRegDupLanguageList(v14, v8);
          v14 = v17;
          if ( !v17 )
            return 3221225473LL;
          updated = RtlpUpdateTEBLanguage(v17, 0LL, 4LL);
          if ( updated )
            return 3221225473LL;
          *(_DWORD *)(v14 + 40) &= ~0x40u;
        }
        v16 = *(_DWORD *)(v14 + 40) & 0xFFFFFFF9 | 4;
        goto LABEL_59;
      }
      v11 = *((_WORD *)BaseAddress + 2);
      if ( !v11 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v11;
    }
    goto LABEL_28;
  }
  return (unsigned int)-1073741811;
}
