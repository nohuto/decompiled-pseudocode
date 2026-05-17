/*
 * XREFs of RtlpHpSegAllocSizeInternal @ 0x180036F30
 * Callers:
 *     RtlpHpSegAllocSize @ 0x180036EDC (RtlpHpSegAllocSize.c)
 *     RtlpHpSegReportPageRange @ 0x1800F1554 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800377BC (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlpHpVsChunkSize @ 0x180065AD4 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegAllocSizeInternal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  unsigned __int64 result; // rax

  if ( a3 <= (a2 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
  {
    result = (*(unsigned __int8 *)(a2 + 27) << 12) - (unsigned __int64)*(unsigned __int16 *)(a2 + 6);
    if ( a5 )
      *a5 = *(_BYTE *)(a2 + 4) & 1;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
      LODWORD(result) = RtlpHpLfhSubsegmentSizeBlock(
                          a1 + 288,
                          (a2 & 0xFFFFFFFFFFF00000uLL)
                        + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                          a3,
                          a5);
    else
      LODWORD(result) = RtlpHpVsChunkSize(a3, a2, a5);
    return (unsigned int)result;
  }
  return result;
}
