/*
 * XREFs of DpiDoInterfaceDereference @ 0x1C0162E60
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0021A88 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall DpiDoInterfaceDereference(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
