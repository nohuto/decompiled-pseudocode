/*
 * XREFs of _SafeAllocBlob @ 0x18001DB04
 * Callers:
 *     RtlpMuiRegCreateLanguageList @ 0x18001DA70 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180049E84 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguages @ 0x1800E6ED0 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800E6F68 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

PVOID __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v7; // rcx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v7 = a3 * (unsigned __int64)a2;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = a1 + v7;
  if ( v8 < a1 )
    return 0LL;
  v9 = a5 * (unsigned __int64)a4;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = v9 + v8;
  if ( (unsigned int)v9 + v8 < v8 )
    return 0LL;
  v11 = 0LL;
  if ( a6 )
    *a6 = v10;
  if ( v10 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  return (PVOID)v11;
}
