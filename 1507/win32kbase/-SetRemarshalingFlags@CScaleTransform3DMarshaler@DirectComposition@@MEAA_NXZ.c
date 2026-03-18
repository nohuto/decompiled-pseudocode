/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CScaleTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransform3DMarshaler *this)
{
  return *((float *)this + 10) != 1.0
      || *((float *)this + 11) != 1.0
      || *((float *)this + 12) != 1.0
      || *((float *)this + 13) != 0.0
      || *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0;
}
