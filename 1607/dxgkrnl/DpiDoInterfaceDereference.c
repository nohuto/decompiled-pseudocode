/*
 * XREFs of DpiDoInterfaceDereference @ 0x1C01998D0
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0028498 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall DpiDoInterfaceDereference(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
