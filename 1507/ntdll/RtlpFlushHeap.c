/*
 * XREFs of RtlpFlushHeap @ 0x180008638
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180008620 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x180008880 (RtlTryEnterCriticalSection.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180008B34 (RtlpLowFragHeapFlushCaches.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180037564 (RtlpCollectFreeBlocks.c)
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
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
