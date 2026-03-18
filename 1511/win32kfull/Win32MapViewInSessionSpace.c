/*
 * XREFs of Win32MapViewInSessionSpace @ 0x1C01E8BE8
 * Callers:
 *     CreateDesktopHeap @ 0x1C00D0C64 (CreateDesktopHeap.c)
 *     bMapFile @ 0x1C00D48C4 (bMapFile.c)
 *     GreGetUFIPathname @ 0x1C02693CC (GreGetUFIPathname.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027D8E4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C029ABF0 (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32MapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  return MmMapViewInSessionSpace(Section, MappedBase, ViewSize);
}
