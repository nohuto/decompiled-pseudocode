/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x18015D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800834C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty(this);
  if ( *((_QWORD *)this + 59) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 62) + 48LL))((char *)this + 496);
}
