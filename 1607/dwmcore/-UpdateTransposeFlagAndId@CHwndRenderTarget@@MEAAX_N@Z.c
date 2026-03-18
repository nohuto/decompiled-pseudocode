/*
 * XREFs of ?UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z @ 0x18011CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x18003479C (-UpdateDisplayId@CDisplay@@QEAAX_N@Z.c)
 */

void __fastcall CHwndRenderTarget::UpdateTransposeFlagAndId(CHwndRenderTarget *this, char a2)
{
  CDisplay *v2; // rcx

  v2 = (CDisplay *)*((_QWORD *)this + 19);
  if ( v2 )
    CDisplay::UpdateDisplayId(v2, a2);
}
