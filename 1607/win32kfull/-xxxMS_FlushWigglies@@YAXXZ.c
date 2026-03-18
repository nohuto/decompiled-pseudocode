/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FF6E4
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  _BYTE v0[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v0, 0, 0x30uLL);
  while ( (unsigned int)xxxInternalGetMessage((__int64)v0, 0LL, 0x200u, 0x200u, 3u, 0) )
    ;
}
