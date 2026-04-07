/*
 * XREFs of IsOpenThemeDataPresent @ 0x18004F7C0
 * Callers:
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x1800217A4 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x1800218D0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180023210 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180023840 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180026F98 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180027B88 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180039084 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003DBC0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800411FC (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180046080 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180046314 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800503C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B7CA8 == 1 )
    return 1;
  if ( dword_1800B7CA8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800B7CA8 = 2 - (v1 != 0);
  return result;
}
