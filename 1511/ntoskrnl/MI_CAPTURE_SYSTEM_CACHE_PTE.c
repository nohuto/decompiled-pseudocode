/*
 * XREFs of MI_CAPTURE_SYSTEM_CACHE_PTE @ 0x1401D5744
 * Callers:
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MI_CAPTURE_SYSTEM_CACHE_PTE(__int64 *a1)
{
  return MI_READ_PTE_LOCK_FREE(a1);
}
