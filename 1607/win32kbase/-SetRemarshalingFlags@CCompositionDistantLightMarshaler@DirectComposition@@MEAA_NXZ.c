/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00ECE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  if ( *((float *)this + 14) != 1.0 || *((float *)this + 15) != 1.0 || *((float *)this + 16) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 || *((float *)this + 22) != -1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  return 1;
}
