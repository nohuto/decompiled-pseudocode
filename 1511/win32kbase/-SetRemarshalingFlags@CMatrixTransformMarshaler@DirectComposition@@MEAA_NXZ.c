/*
 * XREFs of ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DD0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CMatrixTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  return *((float *)this + 14) != 1.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 1.0
      || *((float *)this + 18) != 0.0
      || *((float *)this + 19) != 0.0;
}
