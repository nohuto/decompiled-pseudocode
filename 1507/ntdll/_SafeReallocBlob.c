/*
 * XREFs of _SafeReallocBlob @ 0x1800EA260
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1800E834C (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguageList @ 0x1800E83B4 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegResizeLanguages @ 0x1800E8424 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SafeReallocBlob(
        PVOID BaseAddress,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax

  if ( !BaseAddress )
    return 0LL;
  v9 = a4 * (unsigned __int64)a3;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = v9 + a2;
  if ( (unsigned int)v9 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v10;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress, v10);
}
