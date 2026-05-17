/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x1800DDAD4
 * Callers:
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
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
    ++*(_DWORD *)(a1 + 600);
    v2 = *(_DWORD *)(a1 + 608);
    if ( *(_DWORD *)(a1 + 600) > v2 )
    {
      v3 = *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 600) = 0;
      v4 = *(_QWORD *)(a1 + 536) - 16 * v3;
      if ( v4 > *(_QWORD *)(a1 + 632) )
        *(_QWORD *)(a1 + 632) = v4;
      *(_QWORD *)(a1 + 640) = v4;
    }
    ++*(_DWORD *)(a1 + 612);
    result = 4096LL;
    if ( *(_DWORD *)(a1 + 612) >= 0x1000u )
    {
      if ( *(_BYTE *)(a1 + 378) != 2 || (v6 = 4, *(_DWORD *)(a1 + 616) <= 0x10u) )
        v6 = 8;
      result = 4096 >> v6;
      if ( *(_DWORD *)(a1 + 604) > (unsigned int)result && v2 < 0x10000 )
      {
        result = 2 * v2;
        *(_DWORD *)(a1 + 608) = result;
      }
      *(_DWORD *)(a1 + 604) = 0;
      *(_DWORD *)(a1 + 612) = 0;
    }
  }
  return result;
}
