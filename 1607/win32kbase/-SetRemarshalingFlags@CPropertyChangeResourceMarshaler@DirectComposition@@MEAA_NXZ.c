/*
 * XREFs of ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E670C
 * Callers:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E6460 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00E9DE0 (-SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E66C4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyChangeResourceMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_DWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( (unsigned __int8)DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    return 1;
  }
  return v1;
}
