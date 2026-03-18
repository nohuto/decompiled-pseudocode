/*
 * XREFs of ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00ECAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  if ( *((float *)this + 14) != 1.0 || *((float *)this + 15) != 1.0 || *((float *)this + 16) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
