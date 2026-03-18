/*
 * XREFs of itrp_RoundOffSP @ 0x1C011D92C
 * Callers:
 *     itrp_MIRP @ 0x1C00CC800 (itrp_MIRP.c)
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundOffSP(int a1, int a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    result = (unsigned int)(a1 - a2 / 2);
  else
    result = (unsigned int)(a1 + a2 / 2);
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( a1 )
      return 0LL;
  }
  return result;
}
