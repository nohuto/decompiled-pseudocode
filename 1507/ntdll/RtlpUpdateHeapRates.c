/*
 * XREFs of RtlpUpdateHeapRates @ 0x18006F630
 * Callers:
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ++*(_DWORD *)(a1 + 588);
    }
    else
    {
      ++*(_DWORD *)(a1 + 584);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 580);
    ++*(_DWORD *)(a1 + 576);
    if ( *(_BYTE *)(a1 + 378) != 2 )
    {
      if ( *(_DWORD *)(a1 + 576) < *(_DWORD *)(a1 + 580) )
      {
        *(_DWORD *)(a1 + 576) = 0;
        *(_DWORD *)(a1 + 580) = 0;
      }
      if ( *(_DWORD *)(a1 + 580) >= *(_DWORD *)(a1 + 576) >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
}
