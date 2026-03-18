/*
 * XREFs of ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00E9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E670C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::SetRemarshalingFlags(
        DirectComposition::CDropShadowMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x180u;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 || *((float *)this + 23) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  *((_DWORD *)this + 4) |= 0x800u;
  return 1;
}
