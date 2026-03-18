/*
 * XREFs of ?UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z @ 0x1800EABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x180007954 (-UpdateDisplayId@CDisplay@@QEAAX_N@Z.c)
 */

void __fastcall CHwndRenderTarget::UpdateTransposeFlagAndId(CHwndRenderTarget *this, char a2)
{
  CDisplay *v2; // rcx

  v2 = (CDisplay *)*((_QWORD *)this + 10);
  if ( v2 )
    CDisplay::UpdateDisplayId(v2, a2);
}
