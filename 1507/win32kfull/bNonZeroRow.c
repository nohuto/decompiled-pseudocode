/*
 * XREFs of bNonZeroRow @ 0x1C00A92C4
 * Callers:
 *     vFindTAndB @ 0x1C00A9218 (vFindTAndB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bNonZeroRow(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( !a3 )
    return 0LL;
  while ( !*a1 )
  {
    ++v3;
    a1 += a2;
    if ( v3 >= a3 )
      return 0LL;
  }
  return 1LL;
}
