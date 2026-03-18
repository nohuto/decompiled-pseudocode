/*
 * XREFs of ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00F19A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E6460 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHostVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CHostVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x2000000u;
  return 1;
}
