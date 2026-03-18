/*
 * XREFs of ?UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z @ 0x180114900
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x18013A09C (-UpdateDDADisplayId@CDisplay@@QEAAX_N@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::UpdateTransposeFlagAndId(CHwndRenderTargetDDA *this, bool a2)
{
  CDisplay *v2; // rcx

  v2 = (CDisplay *)*((_QWORD *)this + 10);
  if ( v2 )
    CDisplay::UpdateDDADisplayId(v2, a2);
}
