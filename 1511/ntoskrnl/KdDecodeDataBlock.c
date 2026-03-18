/*
 * XREFs of KdDecodeDataBlock @ 0x1401C1D40
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1403AEB54 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1401C1C50 (KdCopyDataBlock.c)
 */

__int64 KdDecodeDataBlock()
{
  __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
