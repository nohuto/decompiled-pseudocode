/*
 * XREFs of RtlCompressBufferXpressLz @ 0x180002EF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferXpressLzStandard @ 0x180077BD4 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1800FC530 (RtlCompressBufferXpressLzMax.c)
 */

__int64 __fastcall RtlCompressBufferXpressLz(
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
    return RtlCompressBufferXpressLzStandard(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 == 256 )
    return RtlCompressBufferXpressLzMax(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), v9, v10, a3);
  return 3221225659LL;
}
