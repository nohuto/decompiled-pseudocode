/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C01E8BF0
 * Callers:
 *     CreateDesktopHeap @ 0x1C00D0C64 (CreateDesktopHeap.c)
 *     FreeDesktop @ 0x1C00D3310 (FreeDesktop.c)
 *     vUnmapFile @ 0x1C00D8F10 (vUnmapFile.c)
 *     UnmapPrintKView @ 0x1C01023DC (UnmapPrintKView.c)
 *     GreGetUFIPathname @ 0x1C02693CC (GreGetUFIPathname.c)
 *     EngUnmapFile @ 0x1C027E600 (EngUnmapFile.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C029B150 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x1C029B5A0 (-vClosePrintKView@@YAXXZ.c)
 *     NtGdiGetFontFileData @ 0x1C02B3850 (NtGdiGetFontFileData.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32UnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSessionSpace(MappedBase);
}
