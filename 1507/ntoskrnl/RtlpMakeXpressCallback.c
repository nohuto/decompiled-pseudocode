/*
 * XREFs of RtlpMakeXpressCallback @ 0x14014E56C
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x1400F79B0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x14014DDB0 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlCompressBufferXpressHuffMax @ 0x14024BFB4 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x14024C654 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x14024CDAC (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x14024D378 (RtlDecompressBufferXpressHuffProgress.c)
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
