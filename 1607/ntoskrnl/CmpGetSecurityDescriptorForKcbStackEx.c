/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x1401B511C
 * Callers:
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 CmpGetSecurityDescriptorForKcbStackEx()
{
  return CmpGetSecurityCacheEntryForKcbStack() + 32;
}
