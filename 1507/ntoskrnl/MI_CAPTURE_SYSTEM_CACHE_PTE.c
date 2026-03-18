/*
 * XREFs of MI_CAPTURE_SYSTEM_CACHE_PTE @ 0x1402176D0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_CAPTURE_SYSTEM_CACHE_PTE(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    return MiReadPteShadow(a1, *a1);
  return result;
}
