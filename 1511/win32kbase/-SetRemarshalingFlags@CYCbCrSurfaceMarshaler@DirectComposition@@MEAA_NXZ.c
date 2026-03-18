/*
 * XREFs of ?SetRemarshalingFlags@CYCbCrSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DF840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CYCbCrSurfaceMarshaler *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 5) )
    return *((_QWORD *)this + 6) != 0LL;
  return result;
}
