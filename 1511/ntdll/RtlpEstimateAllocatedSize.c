/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x1800F0D30
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x1800F1650 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x1800F1708 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 536) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 378) == 2 )
    v2 = *(_QWORD *)(a1 + 368);
  else
    v2 = 0LL;
  if ( v2 )
    v1 -= *(_QWORD *)(v2 + 72);
  return v1;
}
