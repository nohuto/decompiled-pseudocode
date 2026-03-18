/*
 * XREFs of ?SetRemarshalingFlags@CAnalogCompositorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EFA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnalogCompositorMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnalogCompositorMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 11) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  return (*((_BYTE *)this + 16) & 0xC0) != 0;
}
