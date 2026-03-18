/*
 * XREFs of itrp_ComputeAndCheck_PF_Proj @ 0x1C00D1B24
 * Callers:
 *     itrp_SDPVTL @ 0x1C00D0FE0 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C00D1BC0 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C00D2250 (itrp_SPVTL.c)
 *     itrp_WPV @ 0x1C00D2B80 (itrp_WPV.c)
 *     itrp_WFV @ 0x1C02E1AA0 (itrp_WFV.c)
 * Callees:
 *     <none>
 */

__int64 itrp_ComputeAndCheck_PF_Proj()
{
  int v0; // edx
  __int64 result; // rax
  bool v2; // sf

  v0 = (SHIWORD(dword_1C03294BC) * SHIWORD(dword_1C03294B8) + 0x2000) >> 14;
  LOWORD(v0) = (((__int16)dword_1C03294BC * (__int16)dword_1C03294B8 + 0x2000) >> 14) + v0;
  result = (unsigned int)(v0 + 1023);
  if ( (unsigned __int16)(v0 + 1023) <= 0x7FEu )
  {
    v2 = (v0 & 0x8000u) != 0;
    LOWORD(v0) = -16384;
    if ( !v2 )
      LOWORD(v0) = 0x4000;
  }
  word_1C0329508 = v0;
  dword_1C0329528 = 0;
  return result;
}
