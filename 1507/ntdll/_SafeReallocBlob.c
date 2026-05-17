/*
 * XREFs of _SafeReallocBlob @ 0x1800EA260
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1800E834C (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguageList @ 0x1800E83B4 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegResizeLanguages @ 0x1800E8424 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeReallocBlob(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // rcx

  if ( !a1 )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF || (unsigned int)v7 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v7 + a2;
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap);
}
