/*
 * XREFs of ?SetRemarshalingFlags@CRotateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DD3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CRotateTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransformMarshaler *this)
{
  float v1; // xmm0_4
  float v2; // xmm2_4
  _BOOL8 result; // rax

  result = 1;
  if ( *((float *)this + 14) == 0.0 )
  {
    v1 = *((float *)this + 15);
    if ( v1 == 0.0 )
    {
      v2 = *((float *)this + 16);
      if ( v2 == 0.0 && v1 == 0.0 && v2 == 0.0 )
        return 0;
    }
  }
  return result;
}
