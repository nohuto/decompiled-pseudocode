/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EDD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  if ( *((float *)this + 14) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 15) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 23) != 0.0 || *((float *)this + 24) != 0.0 || *((float *)this + 25) != -1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 || *((float *)this + 22) != 100.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 26) != 0.52359879 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((float *)this + 27) != 1.5707964 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 28) != 1.0 || *((float *)this + 29) != 1.0 || *((float *)this + 30) != 1.0 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 32) != 1.0 || *((float *)this + 33) != 1.0 || *((float *)this + 34) != 1.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return 1;
}
