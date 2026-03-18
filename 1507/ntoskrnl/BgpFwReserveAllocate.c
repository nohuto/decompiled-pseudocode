/*
 * XREFs of BgpFwReserveAllocate @ 0x140152800
 * Callers:
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v1, HintIndex);
  v3 = dword_1403539D4;
  if ( ClearBitsAndSet > dword_1403539D4 - 16 )
  {
    HintIndex = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v1, 0);
    v3 = dword_1403539D4;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  HintIndex = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_1403539B8 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
