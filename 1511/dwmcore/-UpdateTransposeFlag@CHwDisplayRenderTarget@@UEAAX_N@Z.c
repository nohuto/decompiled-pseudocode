/*
 * XREFs of ?UpdateTransposeFlag@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x18001DC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::UpdateTransposeFlag(CHwDisplayRenderTarget *this, char a2)
{
  if ( a2 )
    *((_DWORD *)this + 34) |= 0x10000000u;
  else
    *((_DWORD *)this + 34) &= ~0x10000000u;
}
