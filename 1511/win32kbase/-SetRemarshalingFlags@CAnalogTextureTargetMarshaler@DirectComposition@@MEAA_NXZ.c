/*
 * XREFs of ?SetRemarshalingFlags@CAnalogTextureTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DABE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogTextureTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnalogTextureTargetMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x80u;
  return *((unsigned __int8 *)this + 16) >> 7;
}
