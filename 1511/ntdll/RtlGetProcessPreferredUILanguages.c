/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800DC6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003DA68 (LdrpConvertLangFallbackListToMultiSz.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 v7; // bl
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( !a1 )
  {
    v7 = 8;
    goto LABEL_8;
  }
  if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
    return 3221225485LL;
LABEL_8:
  result = RtlpCreateProcessRegistryInfo(&v11, (__int64)a2, (__int64)a3);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( *(_QWORD *)(v11 + 72) )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      v10 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v9 + 72), v9, a3, a4, v7, 0, a2);
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
    else
    {
      return (unsigned int)LdrpConvertLangFallbackListToMultiSz(0LL, v11, a3, a4, v7, 0, a2);
    }
    return v10;
  }
  return result;
}
