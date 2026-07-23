/*
 * XREFs of RtlpWalkLowFragHeapSegment @ 0x180001070
 * Callers:
 *     RtlpWalkHeap @ 0x18004D474 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x1800010E0 (RtlpSetHeapWalkEntryOverheadBytes.c)
 */

__int64 __fastcall RtlpWalkLowFragHeapSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // edx
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // eax
  _DWORD *v7; // r8
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 386) == 2 )
    v2 = *(_QWORD *)(a1 + 376);
  else
    v2 = 0LL;
  *(_QWORD *)a2 = v2;
  *(_WORD *)(a2 + 18) = -32766;
  *(_QWORD *)(a2 + 8) = 3264LL;
  RtlpSetHeapWalkEntryOverheadBytes(a2, 0LL);
  *(_BYTE *)(v4 + 17) = v3;
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(v5 + 40) - v5;
  v6 = *(_DWORD *)(v5 + 48) - *(_DWORD *)(v5 + 40);
  *v7 &= v3;
  *(_DWORD *)(v4 + 28) = v6;
  *(_QWORD *)(v4 + 32) = v5;
  result = *(_QWORD *)(v5 + 48);
  *(_QWORD *)(v4 + 40) = result;
  return result;
}
