/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x180088A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCheckMuiMultiStringSafe @ 0x180010638 (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x1800106B0 (LdrpMultiSZCchLength.c)
 *     RtlpInitMuiCriticalSection @ 0x180013B84 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  PVOID v9; // rdi
  __int64 v10; // rax
  void *v11; // rsi
  __int64 v12; // rdx
  PVOID v13; // rcx
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
  result = RtlpCreateProcessRegistryInfo(v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      goto LABEL_28;
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (v5 & 4) != 0 ? 4 : 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v8, &v16) < 0 )
      return (unsigned int)-1073741811;
    if ( v16 < 2 || *a2 || a2[1] )
    {
      v7 = RtlpMuiRegAddMultiSzToLangFallbackList((__int64)g_RegInfo, a2, v16, v5 | 2u, 26, 5u, (__int64 *)&BaseAddress);
      if ( v7 < 0 )
      {
        v13 = BaseAddress;
LABEL_23:
        RtlpMuiRegFreeLanguageList(v13);
        return (unsigned int)v7;
      }
      v9 = BaseAddress;
      if ( !BaseAddress || !*((_WORD *)BaseAddress + 2) )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *((unsigned __int16 *)BaseAddress + 2);
    }
    else
    {
LABEL_28:
      v9 = BaseAddress;
    }
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v10 = v15[0];
    v11 = *(void **)(v15[0] + 72LL);
    *(_QWORD *)(v15[0] + 72LL) = v9;
    ++*(_DWORD *)(v10 + 16);
    v12 = *(_QWORD *)(v10 + 96);
    if ( v12 )
      *(_DWORD *)(v12 + 40) |= 0x80u;
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    if ( !v11 )
      return (unsigned int)v7;
    v13 = v11;
    goto LABEL_23;
  }
  return result;
}
