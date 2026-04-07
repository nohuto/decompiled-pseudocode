/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180029F78
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002D3AC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A080 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  bool v3; // r14
  bool v4; // bp
  bool v5; // di
  int v6; // ebx

  v3 = (a2 & 9) != 0;
  v4 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v5 = (a2 & 0x40) != 0;
  v6 = (unsigned __int8)IsOpenThemeDataPresent() != 0 ? 0x1000 : 0;
  if ( v4 )
    CVisual::SetDirtyFlags(this, v6 | 0x200000);
  if ( v3 )
    CTopLevelWindow::OnWindowScaleUpdated(this);
  if ( v5 )
    CVisual::SetDirtyFlags(this, v6 | 0x1000000);
}
