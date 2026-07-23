/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x1404BBE90
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x1400A8FFC (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKcbStackAccess @ 0x1401B4C64 (CmpCheckKcbStackAccess.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
