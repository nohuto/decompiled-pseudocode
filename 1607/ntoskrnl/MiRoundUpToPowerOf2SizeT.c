/*
 * XREFs of MiRoundUpToPowerOf2SizeT @ 0x1401F779C
 * Callers:
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRoundUpToPowerOf2SizeT(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1;
  result = a1;
  if ( _BitScanReverse64(&a1, a1) )
    result = 1LL << a1;
  if ( result != v1 )
    result *= 2LL;
  return result;
}
