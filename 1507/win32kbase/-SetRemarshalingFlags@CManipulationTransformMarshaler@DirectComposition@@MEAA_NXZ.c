/*
 * XREFs of ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DAD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 4) &= 0xFFFFFF3F;
  if ( *((float *)this + 10) != 0.0 )
    return 1LL;
  if ( *((float *)this + 11) != 0.0 )
    return 1LL;
  if ( *((float *)this + 12) != 0.0 )
    return 1LL;
  if ( *((float *)this + 13) != 0.0 )
    return 1LL;
  if ( *((float *)this + 14) != 0.0 )
    return 1LL;
  if ( *((float *)this + 15) != 0.0 )
    return 1LL;
  if ( *((float *)this + 16) != 1.0 )
    return 1LL;
  if ( *((float *)this + 17) != 1.0 )
    return 1LL;
  if ( *((float *)this + 18) != 1.0 )
    return 1LL;
  if ( *((float *)this + 19) != 0.0 )
    return 1LL;
  if ( *((float *)this + 20) != 0.0 )
    return 1LL;
  if ( *((float *)this + 21) != 0.0 )
    return 1LL;
  result = 0LL;
  if ( *((_DWORD *)this + 22) )
    return 1LL;
  return result;
}
