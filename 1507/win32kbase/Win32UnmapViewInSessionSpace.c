/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C00A6A78
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32UnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSessionSpace(MappedBase);
}
