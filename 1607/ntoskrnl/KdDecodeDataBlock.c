/*
 * XREFs of KdDecodeDataBlock @ 0x1401D1184
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403DB8B8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1401D108C (KdCopyDataBlock.c)
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
