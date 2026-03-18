/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020839C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  _OWORD v0[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v0, 0, sizeof(v0));
  while ( (unsigned int)xxxInternalGetMessage(v0, 0LL, 0x200u, 0x200u, 3u, 0) )
    ;
}
