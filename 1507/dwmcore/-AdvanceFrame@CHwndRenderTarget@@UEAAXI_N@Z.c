/*
 * XREFs of ?AdvanceFrame@CHwndRenderTarget@@UEAAXI_N@Z @ 0x18004B510
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18004A190 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::AdvanceFrame(CHwndRenderTarget *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  void (__fastcall *v4)(CHwDisplayRenderTarget *, int, char); // rdi

  if ( !*((_BYTE *)this + 523) )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CHwDisplayRenderTarget *, int, char))(*(_QWORD *)v3 + 192LL);
      if ( v4 == CHwDisplayRenderTarget::AdvanceFrame )
        CHwDisplayRenderTarget::AdvanceFrame(*((CHwDisplayRenderTarget **)this + 6), a2, a3);
      else
        v4(*((CHwDisplayRenderTarget **)this + 6), a2, a3);
    }
  }
}
