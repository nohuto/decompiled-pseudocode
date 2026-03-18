/*
 * XREFs of ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DAB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CMatrixTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  return *((float *)this + 10) != 1.0
      || *((float *)this + 11) != 0.0
      || *((float *)this + 12) != 0.0
      || *((float *)this + 13) != 1.0
      || *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0;
}
