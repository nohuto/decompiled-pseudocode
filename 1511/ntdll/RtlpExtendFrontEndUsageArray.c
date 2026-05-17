/*
 * XREFs of RtlpExtendFrontEndUsageArray @ 0x180052F38
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180053028 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpExtendFrontEndUsageArray(__int64 a1, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  const void *v6; // rdx

  if ( a2 <= *(_WORD *)(a1 + 392) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(a1, 0x80000Au, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = *(const void **)(a1 + 384);
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *(unsigned __int16 *)(a1 + 392));
      RtlFreeHeap(a1, 2u, *(_QWORD *)(a1 + 384));
    }
    *(_QWORD *)(a1 + 384) = v5;
    *(_WORD *)(a1 + 392) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
