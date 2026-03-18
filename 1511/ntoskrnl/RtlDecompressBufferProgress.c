/*
 * XREFs of RtlDecompressBufferProgress @ 0x14011906C
 * Callers:
 *     PopDecompressHiberBlocks @ 0x1403A2574 (PopDecompressHiberBlocks.c)
 * Callees:
 *     RtlDecompressBufferXpressLzProgress @ 0x1401190D0 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1401FE4E8 (RtlDecompressBufferXpressHuffProgress.c)
 */

__int64 __fastcall RtlDecompressBufferProgress(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a1 == 3 )
    return RtlDecompressBufferXpressLzProgress(a2, a3, a4, a5, a6, a8, a9);
  if ( a1 == 4 )
    return RtlDecompressBufferXpressHuffProgress(a2, a3, a4, a5, a6, a7, a8, a9);
  return 3221226079LL;
}
