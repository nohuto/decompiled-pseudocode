/*
 * XREFs of itrp_RoundOffSP @ 0x1C00B93BC
 * Callers:
 *     InvokeRoundValue @ 0x1C00B5C98 (InvokeRoundValue.c)
 *     itrp_MIRP @ 0x1C00B70D0 (itrp_MIRP.c)
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
