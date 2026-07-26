/*
 * XREFs of NdisImmediateReadSharedMemory @ 0x1C00C7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00C8188 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateReadSharedMemory(int a1, int a2, int a3, int a4)
{
  return ndisImmediateReadWriteSharedMemory(a1, a2, a3, a4, 1);
}
