/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800E58F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B94 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145BC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
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
  result = RtlpCreateProcessRegistryInfo(&v11);
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
