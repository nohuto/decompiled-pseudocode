/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DD720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CScaleTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransform3DMarshaler *this)
{
  return *((float *)this + 14) != 1.0
      || *((float *)this + 15) != 1.0
      || *((float *)this + 16) != 1.0
      || *((float *)this + 17) != 0.0
      || *((float *)this + 18) != 0.0
      || *((float *)this + 19) != 0.0;
}
