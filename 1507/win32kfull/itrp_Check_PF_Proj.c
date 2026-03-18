/*
 * XREFs of itrp_Check_PF_Proj @ 0x1C00E825C
 * Callers:
 *     itrp_SFVTCA_0 @ 0x1C00E8020 (itrp_SFVTCA_0.c)
 *     itrp_SFVTCA_1 @ 0x1C00E8070 (itrp_SFVTCA_1.c)
 *     itrp_SPVTCA_1 @ 0x1C00E80C0 (itrp_SPVTCA_1.c)
 *     itrp_SPVTCA_0 @ 0x1C00E8190 (itrp_SPVTCA_0.c)
 * Callees:
 *     <none>
 */

__int64 itrp_Check_PF_Proj()
{
  __int64 result; // rax

  result = (unsigned int)(unsigned __int16)word_1C0323188 + 1023;
  if ( (unsigned __int16)(word_1C0323188 + 1023) <= 0x7FEu )
  {
    result = 4294950912LL;
    if ( word_1C0323188 >= 0 )
      result = 0x4000LL;
    word_1C0323188 = result;
  }
  return result;
}
