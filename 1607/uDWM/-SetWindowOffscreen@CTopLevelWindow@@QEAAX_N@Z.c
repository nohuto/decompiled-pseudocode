/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180025D08
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18007D294 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     Template_p @ 0x18007EFA8 (Template_p.c)
 */

void __fastcall CTopLevelWindow::SetWindowOffscreen(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow *v2; // rbx
  __int64 v3; // r8
  char v4; // al
  CProjectionBorderVisual *v5; // rcx
  void *v6; // rdx

  v2 = this;
  LOBYTE(this) = *((_BYTE *)this + 265);
  if ( ((unsigned __int8)this & 1) == a2 )
    return;
  v3 = *((_QWORD *)v2 + 93);
  v4 = (unsigned __int8)this ^ (a2 ^ (unsigned __int8)this) & 1;
  *((_BYTE *)v2 + 265) = v4;
  if ( v3 )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v6 = &UdwmSystemAnimation_MoveOffscreen_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v6 = &UdwmSystemAnimation_MoveOffscreen_Stop;
    }
    Template_p(this, v6, *(_QWORD *)(v3 + 40));
  }
LABEL_5:
  v5 = *(CProjectionBorderVisual **)(*((_QWORD *)v2 + 93) + 400LL);
  if ( v5 )
    CProjectionBorderVisual::Show(v5, ~*((_BYTE *)v2 + 265) & (*(_BYTE *)(*((_QWORD *)v2 + 35) + 84LL) >> 2) & 1);
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
    *((struct CWindowData **)v2 + 93),
    0);
}
