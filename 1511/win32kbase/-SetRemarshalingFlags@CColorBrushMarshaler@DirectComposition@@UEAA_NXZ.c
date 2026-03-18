/*
 * XREFs of ?SetRemarshalingFlags@CColorBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C008D4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorBrushMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
