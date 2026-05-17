/*
 * XREFs of RtlpFlushHeap @ 0x18004E5D8
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18004E5C0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180028BF4 (RtlpCollectFreeBlocks.c)
 *     RtlTryEnterCriticalSection @ 0x18004E820 (RtlTryEnterCriticalSection.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v2 = *(_QWORD *)(a1 + 376);
    else
      v2 = 0LL;
    if ( v2 )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return 0LL;
}
