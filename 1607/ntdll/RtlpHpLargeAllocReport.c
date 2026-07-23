/*
 * XREFs of RtlpHpLargeAllocReport @ 0x1800FBE44
 * Callers:
 *     RtlpWalkHeapInternal @ 0x18004D354 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpExtrasReportBusyBlock @ 0x18004E22C (RtlpHpExtrasReportBusyBlock.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18004F5F8 (RtlpHpLargeAllocSizeInternal.c)
 */

__int64 __fastcall RtlpHpLargeAllocReport(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 result; // rax

  *a3 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v3 = RtlpHpLargeAllocSizeInternal(a1, a2, 0LL);
  *(_QWORD *)(v4 + 8) = v3;
  *(_WORD *)(v4 + 18) = 16385;
  *(_BYTE *)(v4 + 17) = 64;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v6 + 24);
  result = *(unsigned __int16 *)(v6 + 24);
  *(_QWORD *)(v4 + 36) = result;
  if ( (*(_BYTE *)(v6 + 32) & 1) != 0 )
    return RtlpHpExtrasReportBusyBlock(v5, v4);
  return result;
}
