/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C0208058
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  _OWORD v0[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v0, 0, sizeof(v0));
  while ( (unsigned int)xxxInternalGetMessage(v0, 0LL, 0x200u, 0x200u, 3u, 0) )
    ;
}
