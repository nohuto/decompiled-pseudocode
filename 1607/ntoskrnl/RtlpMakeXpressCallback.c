/*
 * XREFs of RtlpMakeXpressCallback @ 0x140113F10
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x140080D70 (RtlCompressBufferXpressLzStandard.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140113760 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140137D50 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1402172F8 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1402179A4 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140217F70 (RtlDecompressBufferXpressHuffProgress.c)
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
