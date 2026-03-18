/*
 * XREFs of ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x180074990
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwndRenderTarget::AdvanceFrame(CHwndRenderTarget *this, unsigned __int64 a2, bool a3)
{
  CHwDisplayRenderTarget *v3; // rcx
  void (*v4)(void); // rax

  if ( !*((_BYTE *)this + 637) )
  {
    v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 6);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 192LL);
      if ( (char *)v4 == (char *)CHwDisplayRenderTarget::AdvanceFrame )
        CHwDisplayRenderTarget::AdvanceFrame(v3, a2, a3);
      else
        v4();
    }
  }
}
