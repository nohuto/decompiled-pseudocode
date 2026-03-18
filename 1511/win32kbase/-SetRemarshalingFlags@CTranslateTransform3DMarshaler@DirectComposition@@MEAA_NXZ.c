/*
 * XREFs of ?SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DD940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CTranslateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CTranslateTransform3DMarshaler *this)
{
  return *((float *)this + 14) != 0.0 || *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0;
}
