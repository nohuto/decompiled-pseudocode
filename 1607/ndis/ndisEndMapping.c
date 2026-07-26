/*
 * XREFs of ndisEndMapping @ 0x1C00CD8EC
 * Callers:
 *     ndisImmediateReadWritePort @ 0x1C00CD904 (ndisImmediateReadWritePort.c)
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00CDA58 (ndisImmediateReadWriteSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEndMapping(void *a1, unsigned int a2, char a3)
{
  if ( a3 )
    MmUnmapIoSpace(a1, a2);
  return 0LL;
}
