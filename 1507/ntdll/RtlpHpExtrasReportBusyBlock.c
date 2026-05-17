/*
 * XREFs of RtlpHpExtrasReportBusyBlock @ 0x1800EA730
 * Callers:
 *     RtlpHpLargeAllocReport @ 0x1800F03D0 (RtlpHpLargeAllocReport.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800F144C (RtlpHpSegReportBusyBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlpHpExtrasReportBusyBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  v2 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 )
    v2 += 16LL;
  v3 = (v2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *(_QWORD *)(v3 + 8);
  *(_WORD *)(a2 + 18) |= 0x10u;
  *(_QWORD *)(a2 + 24) = v4;
  result = *(_BYTE *)(v3 + 2) >> 4;
  *(_WORD *)(a2 + 18) |= result << 8;
  return result;
}
