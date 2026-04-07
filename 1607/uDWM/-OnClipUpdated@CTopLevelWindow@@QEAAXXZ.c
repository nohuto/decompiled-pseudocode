/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026E90
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026F64 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnClipUpdated(CAccent **this)
{
  CAccent *v2; // rcx
  CAccent *v3; // rdx

  if ( (*((_BYTE *)this[93] + 577) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[36];
  if ( v2 )
  {
    v3 = this[93];
    if ( (*((_BYTE *)v3 + 156) & 0x10) != 0 && (unsigned int)(*((_DWORD *)v3 + 38) - 2) <= 1 )
      CAccent::SetClipRegion(v2, *((struct CResource **)v3 + 44));
  }
}
