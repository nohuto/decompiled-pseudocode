/*
 * XREFs of ndisEndMapping @ 0x1C00C801C
 * Callers:
 *     ndisImmediateReadWritePort @ 0x1C00C8034 (ndisImmediateReadWritePort.c)
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00C8188 (ndisImmediateReadWriteSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEndMapping(void *a1, unsigned int a2, char a3)
{
  if ( a3 )
    MmUnmapIoSpace(a1, a2);
  return 0LL;
}
