/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C00AB098
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32UnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSessionSpace(MappedBase);
}
