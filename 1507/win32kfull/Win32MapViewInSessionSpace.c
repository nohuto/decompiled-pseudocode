/*
 * XREFs of Win32MapViewInSessionSpace @ 0x1C01E85B8
 * Callers:
 *     bMapFile @ 0x1C013CA40 (bMapFile.c)
 *     CreateDesktopHeap @ 0x1C014E600 (CreateDesktopHeap.c)
 *     GreGetUFIPathname @ 0x1C026A83C (GreGetUFIPathname.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027DEF4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C029B1A8 (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C02A2C08 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32MapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  return MmMapViewInSessionSpace(Section, MappedBase, ViewSize);
}
