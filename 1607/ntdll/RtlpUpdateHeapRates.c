/*
 * XREFs of RtlpUpdateHeapRates @ 0x180028FC0
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
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
        ++*(_DWORD *)(a1 + 596);
    }
    else
    {
      ++*(_DWORD *)(a1 + 592);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 588);
    ++*(_DWORD *)(a1 + 584);
    if ( *(_BYTE *)(a1 + 386) != 2 )
    {
      if ( *(_DWORD *)(a1 + 584) < *(_DWORD *)(a1 + 588) )
      {
        *(_DWORD *)(a1 + 584) = 0;
        *(_DWORD *)(a1 + 588) = 0;
      }
      if ( *(_DWORD *)(a1 + 588) >= *(_DWORD *)(a1 + 584) >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
}
