/*
 * XREFs of ?SetRemarshalingFlags@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E7B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRenderTargetTargetMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x60u;
  if ( *((_DWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x80u;
  return 1;
}
