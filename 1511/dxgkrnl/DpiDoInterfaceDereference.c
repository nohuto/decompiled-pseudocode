/*
 * XREFs of DpiDoInterfaceDereference @ 0x1C0167390
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0021978 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall DpiDoInterfaceDereference(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
