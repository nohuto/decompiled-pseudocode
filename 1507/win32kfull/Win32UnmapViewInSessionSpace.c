/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C01E85C0
 * Callers:
 *     UnmapPrintKView @ 0x1C01265BC (UnmapPrintKView.c)
 *     FreeDesktop @ 0x1C0131160 (FreeDesktop.c)
 *     vUnmapFile @ 0x1C013C61C (vUnmapFile.c)
 *     CreateDesktopHeap @ 0x1C014E600 (CreateDesktopHeap.c)
 *     GreGetUFIPathname @ 0x1C026A83C (GreGetUFIPathname.c)
 *     EngUnmapFile @ 0x1C027EC10 (EngUnmapFile.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C029B7E0 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x1C029BC30 (-vClosePrintKView@@YAXXZ.c)
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02A2AA4 (-Close@PROXYPORT@@QEAAXXZ.c)
 *     NtGdiGetFontFileData @ 0x1C02B4880 (NtGdiGetFontFileData.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32UnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSessionSpace(MappedBase);
}
