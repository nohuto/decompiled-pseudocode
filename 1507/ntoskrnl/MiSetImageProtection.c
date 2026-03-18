/*
 * XREFs of MiSetImageProtection @ 0x140023100
 * Callers:
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MiCompactServiceTable @ 0x140571924 (MiCompactServiceTable.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
