/*
 * XREFs of RIMAllocKernelMem @ 0x1C00C2DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RIMAllocKernelMem()
{
  return Win32AllocPool();
}
