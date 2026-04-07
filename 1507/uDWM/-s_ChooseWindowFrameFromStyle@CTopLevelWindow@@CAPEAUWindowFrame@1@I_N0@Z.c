/*
 * XREFs of ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180006620
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001F6C0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020E54 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180020F10 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180021AD0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x180075874 (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180075AC8 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x180048B60 (IsOpenThemeDataPresent.c)
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::s_ChooseWindowFrameFromStyle(
        char a1,
        char a2,
        char a3)
{
  bool v6; // si
  unsigned int v7; // eax

  v6 = (a1 & 2) != 0;
  if ( (!(unsigned __int8)IsOpenThemeDataPresent() || (a1 & 6) == 0) && !a2 )
    return 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    if ( a3 || (a1 & 0x40) != 0 )
      v7 = 2;
    else
      v7 = 3;
  }
  else if ( a3 || (a1 & 0x40) != 0 )
  {
    if ( v6 )
      v7 = 4;
    else
      v7 = 0;
  }
  else if ( v6 )
  {
    v7 = 5;
  }
  else
  {
    v7 = 1;
  }
  return *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * v7);
}
