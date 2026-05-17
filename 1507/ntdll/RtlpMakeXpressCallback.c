/*
 * XREFs of RtlpMakeXpressCallback @ 0x1800F2F1C
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005B5A0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1800F1C00 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1800F2328 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1800F28F0 (RtlCompressBufferXpressLzStandard.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
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
