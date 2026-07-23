/*
 * XREFs of RtlpHpSegReportBusyBlock @ 0x18004E1C8
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 *     RtlpHpSegReportPageRange @ 0x1800FA0D4 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpExtrasReportBusyBlock @ 0x18004E22C (RtlpHpExtrasReportBusyBlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegReportBusyBlock(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 result; // rax

  v5 = *a2;
  v6 = *a2;
  a2[1] = a3;
  *((_BYTE *)a2 + 16) = a4;
  *(__int64 *)((char *)a2 + 36) = a4;
  v7 = (v6 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v5 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  *((_WORD *)a2 + 9) = 1;
  result = v7 & 0xFFFFFFFFFFF00000uLL;
  *((_BYTE *)a2 + 17) = (__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5;
  if ( a5 )
    return RtlpHpExtrasReportBusyBlock();
  return result;
}
