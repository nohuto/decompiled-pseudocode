/*
 * XREFs of FsRtlIsMobileOS @ 0x1404EC300
 * Callers:
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 */

bool FsRtlIsMobileOS()
{
  return (unsigned int)TmCurrentTransaction() == -1073741637;
}
