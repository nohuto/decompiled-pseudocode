/*
 * XREFs of ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B210
 * Callers:
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x18002C334 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E0B0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800304F8 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180030820 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowData::OnColorizationUpdated(CWindowData *this)
{
  CVisual *v2; // rcx
  CWindowIconic *v3; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 48);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x100000u);
  v3 = (CWindowIconic *)*((_QWORD *)this + 52);
  if ( v3 )
    CWindowIconic::OnColorizationUpdated(v3, 1);
}
