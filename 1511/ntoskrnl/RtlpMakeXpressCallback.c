/*
 * XREFs of RtlpMakeXpressCallback @ 0x140119880
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x1400C2250 (RtlCompressBufferXpressLzStandard.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1401190D0 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1401FD124 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1401FD7C4 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1401FDF1C (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1401FE4E8 (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
