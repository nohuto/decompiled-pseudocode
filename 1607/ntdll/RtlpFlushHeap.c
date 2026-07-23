/*
 * XREFs of RtlpFlushHeap @ 0x18004E5C8
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18004E5B0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180028BE4 (RtlpCollectFreeBlocks.c)
 *     RtlTryEnterCriticalSection @ 0x18004E810 (RtlTryEnterCriticalSection.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v2 = *(_QWORD *)(a1 + 376);
    else
      v2 = 0LL;
    if ( v2 )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
