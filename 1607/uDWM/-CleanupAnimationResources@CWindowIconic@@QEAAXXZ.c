/*
 * XREFs of ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800384C4
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800385A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x180038E00 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800190F0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180021F54 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::CleanupAnimationResources(CTopLevelWindow **this)
{
  CTopLevelWindow *v2; // rax
  bool v3; // zf
  char v4; // al

  CTopLevelWindow::StopIconicAnimation(this[11]);
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 4), 1);
  v2 = this[8];
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    this[8] = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
}
