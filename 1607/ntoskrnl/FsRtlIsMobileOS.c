/*
 * XREFs of FsRtlIsMobileOS @ 0x14052E5B0
 * Callers:
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 */

bool FsRtlIsMobileOS()
{
  return (unsigned int)TmCurrentTransaction() == -1073741637;
}
