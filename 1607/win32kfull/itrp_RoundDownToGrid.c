/*
 * XREFs of itrp_RoundDownToGrid @ 0x1C0113338
 * Callers:
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 *     itrp_RoundDownToGridSP @ 0x1C01132E8 (itrp_RoundDownToGridSP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundDownToGrid(int a1, int a2)
{
  unsigned int v2; // edx

  if ( a1 < 0 )
    v2 = -((a2 - a1) & 0xFFFFFFC0);
  else
    v2 = (a1 + a2) & 0xFFFFFFC0;
  if ( ((a1 ^ v2) & 0x80000000) != 0 && a1 )
    return 0;
  return v2;
}
