/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C01DF47C
 * Callers:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02A3280 (-Close@PROXYPORT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32UnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSessionSpace(MappedBase);
}
