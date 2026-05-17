/*
 * XREFs of RtlCompressBufferXpressLz @ 0x1800F2DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferXpressLzStandard @ 0x180090A10 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1800F2E58 (RtlCompressBufferXpressLzMax.c)
 */

__int64 __fastcall RtlCompressBufferXpressLz(
        __int16 a1,
        _BYTE *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int *a7,
        __int64 a8)
{
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  if ( !a1 )
    return RtlCompressBufferXpressLzStandard(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 == 256 )
    return RtlCompressBufferXpressLzMax(
             (int)a2,
             a3,
             a4,
             a5,
             (__int64)a7,
             (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
             v9,
             v10,
             a3);
  return 3221225659LL;
}
