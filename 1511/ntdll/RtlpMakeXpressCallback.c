/*
 * XREFs of RtlpMakeXpressCallback @ 0x1800F3420
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x180065A60 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x180090A10 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18009103C (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1800F2E58 (RtlCompressBufferXpressLzMax.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
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
