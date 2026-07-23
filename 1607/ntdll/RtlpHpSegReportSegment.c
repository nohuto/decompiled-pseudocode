/*
 * XREFs of RtlpHpSegReportSegment @ 0x180050ED8
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x18003ED24 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

unsigned __int64 __fastcall RtlpHpSegReportSegment(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 result; // rax

  v3 = RtlpHpSegPageRangeCountCommittedPages(a2 + 64, 254);
  *(_WORD *)(a1 + 18) = 2;
  v4 = (v3 + 2) << 12;
  *(_QWORD *)(a1 + 8) = 0x100000LL;
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 28) = 0x100000 - v4;
  *(_BYTE *)(a1 + 17) = 0;
  *(_DWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = (v6 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  result = ((v6 + 8096) & 0xFFFFFFFFFFF00000uLL)
         + ((unsigned int)((__int64)(v6 + 8096 - ((v6 + 8096) & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
