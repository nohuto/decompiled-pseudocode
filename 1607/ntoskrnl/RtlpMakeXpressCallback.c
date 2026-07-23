/*
 * XREFs of RtlpMakeXpressCallback @ 0x140114480
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x140080DF0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140113CD0 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1401382C0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140217124 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1402177D0 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140217D9C (RtlDecompressBufferXpressHuffProgress.c)
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
