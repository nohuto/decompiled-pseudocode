/*
 * XREFs of KdDecodeDataBlock @ 0x1401D1358
 * Callers:
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403DB8B8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1401D1260 (KdCopyDataBlock.c)
 */

char *KdDecodeDataBlock()
{
  char *result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
