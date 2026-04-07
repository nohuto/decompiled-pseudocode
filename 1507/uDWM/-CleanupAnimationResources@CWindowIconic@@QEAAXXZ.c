/*
 * XREFs of ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003A128
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A204 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003AA88 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180015AB8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001FC78 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::CleanupAnimationResources(CTopLevelWindow **this)
{
  CTopLevelWindow *v2; // rcx
  char v3; // al

  CTopLevelWindow::StopIconicAnimation(this[11]);
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 4), 1);
  v2 = this[8];
  if ( v2 )
  {
    --*((_DWORD *)v2 + 2);
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( !*((_DWORD *)v2 + 2) )
      v3 = 1;
    this[8] = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
}
