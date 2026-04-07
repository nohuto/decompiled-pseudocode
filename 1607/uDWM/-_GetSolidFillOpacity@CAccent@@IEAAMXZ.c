/*
 * XREFs of ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003609C
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180035920 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800360D0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CAccent::_GetSolidFillOpacity(CAccent *this)
{
  float result; // xmm0_4

  result = FLOAT_1_0;
  if ( (unsigned int)(*((_DWORD *)this + 66) - 2) <= 1 )
    return (float)*((unsigned __int8 *)this + 331) / 255.0;
  return result;
}
