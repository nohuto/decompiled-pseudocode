/*
 * XREFs of RtlpHpSegReportPageRange @ 0x1800FA0D4
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlpHpSegAllocSizeInternal @ 0x1800445FC (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpSegReportBusyBlock @ 0x18004E1C8 (RtlpHpSegReportBusyBlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegReportPageRange(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2 & 0xFFFFFFFFFFF00000uLL;
  v5 = v2 + 32LL * (unsigned int)((*a2 - v2) >> 12);
  v6 = RtlpHpSegAllocSizeInternal(a1, v5, *a2, v2, &v8);
  return RtlpHpSegReportBusyBlock(a1, (__int64 *)a2, v6, *(unsigned __int16 *)(v5 + 6), v8);
}
