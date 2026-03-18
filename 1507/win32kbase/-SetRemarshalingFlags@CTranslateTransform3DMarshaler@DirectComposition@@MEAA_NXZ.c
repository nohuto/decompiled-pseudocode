/*
 * XREFs of ?SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DAE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CTranslateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CTranslateTransform3DMarshaler *this)
{
  return *((float *)this + 10) != 0.0 || *((float *)this + 11) != 0.0 || *((float *)this + 12) != 0.0;
}
