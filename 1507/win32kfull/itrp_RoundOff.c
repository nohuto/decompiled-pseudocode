/*
 * XREFs of itrp_RoundOff @ 0x1C00BFB5C
 * Callers:
 *     InvokeRoundValue @ 0x1C00BD5B4 (InvokeRoundValue.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C00BE9A0 (itrp_MIRP.c)
 *     itrp_NROUND @ 0x1C02DD220 (itrp_NROUND.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundOff(int a1, int a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    result = (unsigned int)(a1 - a2);
  else
    result = (unsigned int)(a1 + a2);
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( a1 )
      return 0LL;
  }
  return result;
}
