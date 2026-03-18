/*
 * XREFs of ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x18007CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwndRenderTarget::AdvanceFrame(CHwndRenderTarget *this, unsigned __int64 a2, _BOOL8 a3)
{
  __int64 v3; // rbx
  void (__fastcall *v4)(CHwDisplayRenderTarget *__hidden, unsigned __int64, bool); // rdi

  if ( !*((_BYTE *)this + 516) )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, unsigned __int64, bool))(*(_QWORD *)v3 + 192LL);
      if ( v4 == CHwDisplayRenderTarget::AdvanceFrame )
        CHwDisplayRenderTarget::AdvanceFrame(*((CHwDisplayRenderTarget **)this + 6), a2, a3);
      else
        v4(*((CHwDisplayRenderTarget **)this + 6), a2, a3);
    }
  }
}
