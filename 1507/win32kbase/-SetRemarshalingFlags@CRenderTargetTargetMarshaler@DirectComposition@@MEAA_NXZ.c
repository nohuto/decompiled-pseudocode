/*
 * XREFs of ?SetRemarshalingFlags@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C008A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRenderTargetTargetMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
