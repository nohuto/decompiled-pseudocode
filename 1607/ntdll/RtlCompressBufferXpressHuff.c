/*
 * XREFs of RtlCompressBufferXpressHuff @ 0x1800605B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferXpressHuffStandard @ 0x180060610 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180094374 (RtlCompressBufferXpressHuffMax.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuff(
        __int16 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  if ( !a1 )
    return RtlCompressBufferXpressHuffStandard(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 == 256 )
    return RtlCompressBufferXpressHuffMax(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), v9, v10, a3);
  return 3221225659LL;
}
