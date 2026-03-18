/*
 * XREFs of ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EF840
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EA410 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CRectangleClipMarshaler *this)
{
  *((_DWORD *)this + 4) &= 0xFFFFE0FF;
  DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  return 1;
}
