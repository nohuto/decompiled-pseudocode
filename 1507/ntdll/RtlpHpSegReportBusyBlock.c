/*
 * XREFs of RtlpHpSegReportBusyBlock @ 0x1800F144C
 * Callers:
 *     RtlpHpSegReportPageRange @ 0x1800F1554 (RtlpHpSegReportPageRange.c)
 *     RtlpHpSegWalkHeap @ 0x1800F1664 (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlpHpExtrasReportBusyBlock @ 0x1800EA730 (RtlpHpExtrasReportBusyBlock.c)
 */

unsigned __int8 __fastcall RtlpHpSegReportBusyBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int8 result; // al

  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 8) = a3;
  *(_BYTE *)(a2 + 16) = a4;
  *(_QWORD *)(a2 + 36) = a4;
  v7 = (v6 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v5 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  *(_WORD *)(a2 + 18) = 1;
  result = 0;
  *(_BYTE *)(a2 + 17) = (__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5;
  if ( a5 )
    return RtlpHpExtrasReportBusyBlock(a1, a2);
  return result;
}
