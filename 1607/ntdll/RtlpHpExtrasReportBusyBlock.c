/*
 * XREFs of RtlpHpExtrasReportBusyBlock @ 0x18004E22C
 * Callers:
 *     RtlpHpSegReportBusyBlock @ 0x18004E1C8 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpLargeAllocReport @ 0x1800FBE44 (RtlpHpLargeAllocReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpExtrasReportBusyBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int16 *v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  v3 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 )
    v3 += 16LL;
  v4 = (unsigned __int16 *)((v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v5 = *((_QWORD *)v4 + 1);
  *(_WORD *)(a2 + 18) |= 0x10u;
  *(_QWORD *)(a2 + 24) = v5;
  *(_WORD *)(a2 + 18) |= *((_BYTE *)v4 + 2) >> 4 << 8;
  result = *v4;
  *(_WORD *)(a2 + 32) = result;
  return result;
}
