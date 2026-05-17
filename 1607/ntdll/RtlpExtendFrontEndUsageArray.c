/*
 * XREFs of RtlpExtendFrontEndUsageArray @ 0x18002995C
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpExtendFrontEndUsageArray(__int64 a1, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  const void *v6; // rdx

  if ( a2 <= *(_WORD *)(a1 + 400) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(a1, 0x80000Au, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = *(const void **)(a1 + 392);
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *(unsigned __int16 *)(a1 + 400));
      RtlFreeHeap(a1, 2LL, *(_QWORD *)(a1 + 392));
    }
    *(_QWORD *)(a1 + 392) = v5;
    *(_WORD *)(a1 + 400) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
