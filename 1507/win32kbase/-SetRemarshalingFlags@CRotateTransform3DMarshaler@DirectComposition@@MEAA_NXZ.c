/*
 * XREFs of ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CRotateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransform3DMarshaler *this)
{
  return *((float *)this + 10) != 0.0
      || *((float *)this + 11) != 0.0
      || *((float *)this + 12) != 0.0
      || *((float *)this + 13) != 1.0
      || *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0;
}
