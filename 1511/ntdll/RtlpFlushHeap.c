/*
 * XREFs of RtlpFlushHeap @ 0x180051248
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180051230 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004F614 (RtlpLowFragHeapFlushCaches.c)
 *     RtlTryEnterCriticalSection @ 0x1800510F0 (RtlTryEnterCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180052CA8 (RtlpCollectFreeBlocks.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 378) == 2 )
      v2 = *(_QWORD *)(a1 + 368);
    else
      v2 = 0LL;
    if ( v2 )
      RtlpLowFragHeapFlushCaches(v2);
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
