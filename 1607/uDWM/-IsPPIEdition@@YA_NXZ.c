/*
 * XREFs of ?IsPPIEdition@@YA_NXZ @ 0x180039420
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800259A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180027C90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x180039264 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007D594 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

bool IsPPIEdition(void)
{
  DWORD v0; // eax

  v0 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v0 = `IsPPIEdition'::`2'::s_dwProductType;
  }
  return v0 == 119;
}
