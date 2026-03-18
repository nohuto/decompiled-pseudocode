/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x1404D888C
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x1400AAA7C (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKcbStackAccess @ 0x1401B4D80 (CmpCheckKcbStackAccess.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
