/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x1800EED60
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x1800D9C20 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x1800EF6F8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x1800EF7B0 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x1800EF8B8 (RtlpLogHeapExtendEvent.c)
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
