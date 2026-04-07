/*
 * XREFs of ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026F64
 * Callers:
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026E90 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x18002E1F0 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180030820 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow::OnBlurBehindUpdated(CTopLevelWindow *this)
{
  CVisual *v2; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 39);
  if ( v2 )
    CVisual::ClearInstructions(v2);
  CVisual::SetDirtyFlags(this, 0x80000);
}
