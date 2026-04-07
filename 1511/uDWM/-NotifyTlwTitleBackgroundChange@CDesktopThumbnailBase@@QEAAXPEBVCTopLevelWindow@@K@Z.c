/*
 * XREFs of ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x18009A63C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180024120 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x18009B214 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow *a2)
{
  int Index; // eax
  __int64 v3; // rcx
  int v4; // r11d

  Index = CDesktopThumbnailBase::_GetIndex(this, a2);
  if ( Index >= 0 )
    CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
      *(CTopLevelWindow **)(*(_QWORD *)(v3 + 264) + 16LL * (unsigned int)Index + 8),
      v4);
}
