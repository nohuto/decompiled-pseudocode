/*
 * XREFs of BgpFwReserveAllocate @ 0x14011E580
 * Callers:
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v1, HintIndex);
  v3 = dword_140305C54;
  if ( ClearBitsAndSet > dword_140305C54 - 16 )
  {
    HintIndex = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v1, 0);
    v3 = dword_140305C54;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  HintIndex = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140305C38 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
