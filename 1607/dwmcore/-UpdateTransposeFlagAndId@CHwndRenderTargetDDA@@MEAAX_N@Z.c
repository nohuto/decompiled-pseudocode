/*
 * XREFs of ?UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z @ 0x18012DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x1801639F4 (-UpdateDDADisplayId@CDisplay@@QEAAX_N@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::UpdateTransposeFlagAndId(CHwndRenderTargetDDA *this, bool a2)
{
  CDisplay *v2; // rcx

  v2 = (CDisplay *)*((_QWORD *)this + 19);
  if ( v2 )
    CDisplay::UpdateDDADisplayId(v2, a2);
}
