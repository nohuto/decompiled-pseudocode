/*
 * XREFs of CmpGetSecurityDescriptorForKcbStackEx @ 0x1401B5000
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 CmpGetSecurityDescriptorForKcbStackEx()
{
  return CmpGetSecurityCacheEntryForKcbStack() + 32;
}
