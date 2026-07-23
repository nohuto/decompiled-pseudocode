/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x180084820
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpMultiSZCchLength @ 0x18003BD04 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003BDAC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  PVOID v9; // rcx
  PVOID v10; // rdi
  __int64 v11; // rax
  void *v12; // rsi
  __int64 v13; // rdx
  PVOID BaseAddress; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  BaseAddress = 0LL;
  v5 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v5 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v15, (__int64)a2, (__int64)a3);
  v7 = result;
  if ( (int)result < 0 )
    return result;
  if ( !a2 )
    goto LABEL_23;
  if ( (int)RtlpCheckMuiMultiStringSafe(a2, (v5 & 4) != 0 ? 4 : 85) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid multi-string!\n");
  if ( (int)LdrpMultiSZCchLength(a2, v8, &v16) >= 0 )
  {
    if ( v16 < 2 || *a2 || a2[1] )
    {
      v7 = RtlpMuiRegAddMultiSzToLangFallbackList((__int64)g_RegInfo, a2, v16, v5 | 2u, 26, 5u, (__int64 *)&BaseAddress);
      if ( v7 < 0 )
      {
        v9 = BaseAddress;
LABEL_28:
        RtlpMuiRegFreeLanguageList(v9);
        return (unsigned int)v7;
      }
      v10 = BaseAddress;
      if ( !BaseAddress || !*((_WORD *)BaseAddress + 2) )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *((unsigned __int16 *)BaseAddress + 2);
LABEL_24:
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      v11 = v15[0];
      v12 = *(void **)(v15[0] + 72LL);
      *(_QWORD *)(v15[0] + 72LL) = v10;
      ++*(_DWORD *)(v11 + 16);
      v13 = *(_QWORD *)(v11 + 96);
      if ( v13 )
        *(_DWORD *)(v13 + 40) |= 0x80u;
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
      if ( !v12 )
        return (unsigned int)v7;
      v9 = v12;
      goto LABEL_28;
    }
LABEL_23:
    v10 = BaseAddress;
    goto LABEL_24;
  }
  return (unsigned int)-1073741811;
}
