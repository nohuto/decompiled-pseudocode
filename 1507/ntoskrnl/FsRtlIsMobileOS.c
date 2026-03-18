/*
 * XREFs of FsRtlIsMobileOS @ 0x1405C2720
 * Callers:
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 */

bool FsRtlIsMobileOS()
{
  return (unsigned int)TmCurrentTransaction() == -1073741637;
}
