/*
 * XREFs of MiCaptureSystemCachePte @ 0x1401E6BA0
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiCaptureSystemCachePte(__int64 a1)
{
  return MI_READ_PTE_LOCK_FREE(a1);
}
