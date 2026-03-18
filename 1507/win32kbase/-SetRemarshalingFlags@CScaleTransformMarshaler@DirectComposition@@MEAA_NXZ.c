/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CScaleTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransformMarshaler *this)
{
  return *((float *)this + 10) != 1.0
      || *((float *)this + 11) != 1.0
      || *((float *)this + 12) != 0.0
      || *((float *)this + 13) != 0.0;
}
