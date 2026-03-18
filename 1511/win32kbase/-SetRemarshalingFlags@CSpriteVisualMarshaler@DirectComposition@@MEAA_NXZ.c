/*
 * XREFs of ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DBF90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB040 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteVisualMarshaler *this)
{
  char v1; // bl
  char v3; // al

  v1 = 0;
  if ( *((_QWORD *)this + 28) )
    *((_DWORD *)this + 4) |= 0x2000000u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x2000000) != 0 || v3 )
    return 1;
  return v1;
}
