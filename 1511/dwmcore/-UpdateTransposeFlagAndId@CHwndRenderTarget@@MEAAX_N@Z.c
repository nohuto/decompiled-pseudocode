/*
 * XREFs of ?UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z @ 0x1801065C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x18001DBF0 (-UpdateDisplayId@CDisplay@@QEAAX_N@Z.c)
 */

void __fastcall CHwndRenderTarget::UpdateTransposeFlagAndId(CHwndRenderTarget *this, char a2)
{
  CDisplay *v2; // rcx

  v2 = (CDisplay *)*((_QWORD *)this + 10);
  if ( v2 )
    CDisplay::UpdateDisplayId(v2, a2);
}
