/*
 * XREFs of ndisEndMapping @ 0x1C00CEC0C
 * Callers:
 *     ndisImmediateReadWritePort @ 0x1C00CEC24 (ndisImmediateReadWritePort.c)
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00CED78 (ndisImmediateReadWriteSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEndMapping(void *a1, unsigned int a2, char a3)
{
  if ( a3 )
    MmUnmapIoSpace(a1, a2);
  return 0LL;
}
