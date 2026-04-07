/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800071D8
 * Callers:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x18002548C (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 304) & 8) != 0) != a2 )
  {
    *((_BYTE *)this + 304) ^= (*((_BYTE *)this + 304) ^ (8 * a2)) & 8;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
