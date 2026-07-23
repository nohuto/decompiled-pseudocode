/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x1800EC3E4
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpUpdateHeapWatermarks(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  char v6; // cl

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    ++*(_DWORD *)(a1 + 608);
    v2 = *(_DWORD *)(a1 + 616);
    if ( *(_DWORD *)(a1 + 608) > v2 )
    {
      v3 = *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 608) = 0;
      v4 = *(_QWORD *)(a1 + 544) - 16 * v3;
      if ( v4 > *(_QWORD *)(a1 + 640) )
        *(_QWORD *)(a1 + 640) = v4;
      *(_QWORD *)(a1 + 648) = v4;
    }
    ++*(_DWORD *)(a1 + 620);
    result = 4096LL;
    if ( *(_DWORD *)(a1 + 620) >= 0x1000u )
    {
      if ( *(_BYTE *)(a1 + 386) != 2 || (v6 = 4, *(_DWORD *)(a1 + 624) <= 0x10u) )
        v6 = 8;
      result = 4096 >> v6;
      if ( *(_DWORD *)(a1 + 612) > (unsigned int)result && v2 < 0x10000 )
      {
        result = 2 * v2;
        *(_DWORD *)(a1 + 616) = result;
      }
      *(_DWORD *)(a1 + 612) = 0;
      *(_DWORD *)(a1 + 620) = 0;
    }
  }
  return result;
}
