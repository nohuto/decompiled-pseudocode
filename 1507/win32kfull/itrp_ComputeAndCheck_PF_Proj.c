/*
 * XREFs of itrp_ComputeAndCheck_PF_Proj @ 0x1C00BA808
 * Callers:
 *     itrp_SDPVTL @ 0x1C00BB0A0 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C00BFBB0 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C00C0660 (itrp_SPVTL.c)
 *     itrp_WPV @ 0x1C0116E60 (itrp_WPV.c)
 *     itrp_WFV @ 0x1C02DDD00 (itrp_WFV.c)
 * Callees:
 *     <none>
 */

__int64 itrp_ComputeAndCheck_PF_Proj()
{
  int v0; // edx
  __int64 result; // rax
  bool v2; // sf

  v0 = (SHIWORD(dword_1C032313C) * SHIWORD(dword_1C0323138) + 0x2000) >> 14;
  LOWORD(v0) = (((__int16)dword_1C032313C * (__int16)dword_1C0323138 + 0x2000) >> 14) + v0;
  result = (unsigned int)(v0 + 1023);
  if ( (unsigned __int16)(v0 + 1023) <= 0x7FEu )
  {
    v2 = (v0 & 0x8000u) != 0;
    LOWORD(v0) = -16384;
    if ( !v2 )
      LOWORD(v0) = 0x4000;
  }
  word_1C0323188 = v0;
  dword_1C03231A8 = 0;
  return result;
}
