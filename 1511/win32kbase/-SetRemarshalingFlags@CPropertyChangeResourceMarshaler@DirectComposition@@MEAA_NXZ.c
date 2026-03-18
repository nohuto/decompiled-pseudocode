/*
 * XREFs of ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DAEEC
 * Callers:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB040 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D86E4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyChangeResourceMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_DWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( (unsigned __int8)DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    return 1;
  }
  return v1;
}
