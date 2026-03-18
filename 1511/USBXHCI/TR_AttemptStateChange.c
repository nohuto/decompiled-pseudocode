/*
 * XREFs of TR_AttemptStateChange @ 0x1C002846C
 * Callers:
 *     Bulk_MapTransfers @ 0x1C0002420 (Bulk_MapTransfers.c)
 *     Bulk_MappingLoop @ 0x1C00024C8 (Bulk_MappingLoop.c)
 *     Isoch_MapTransfers @ 0x1C0002DF8 (Isoch_MapTransfers.c)
 *     Isoch_MappingLoop @ 0x1C0002EF0 (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EvtDmaCallback @ 0x1C000EEF0 (Bulk_EvtDmaCallback.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C00107B0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_EP_StartMapping @ 0x1C002AE90 (Isoch_EP_StartMapping.c)
 *     Isoch_EP_StopMapping @ 0x1C002AED0 (Isoch_EP_StopMapping.c)
 *     Isoch_EvtDmaCallback @ 0x1C002AF50 (Isoch_EvtDmaCallback.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002BB14 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C002C3D0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_EP_StartMapping @ 0x1C002DC80 (Bulk_EP_StartMapping.c)
 *     Bulk_EP_StopMapping @ 0x1C002DCC0 (Bulk_EP_StopMapping.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_AttemptStateChange(__int64 a1, signed __int32 a2, __int32 a3)
{
  unsigned __int32 v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( a2 == 5 )
    v3 = _InterlockedExchange((volatile __int32 *)(a1 + 100), a3);
  else
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 100), a3, a2);
  if ( a2 == v3 || a2 == 5 )
  {
    if ( a3 )
      return v3;
    v4 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v4 + 37) )
      goto LABEL_12;
LABEL_13:
    ESM_AddEvent((PVOID)(v4 + 272));
    return v3;
  }
  if ( a2 != 3 || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 100), 0, 1) != 1 )
    return v3;
  v4 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v4 + 37) )
    goto LABEL_13;
LABEL_12:
  v5 = *(_QWORD *)(v4 + 136);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 20)) == *(_DWORD *)(v5 + 8) )
    goto LABEL_13;
  return v3;
}
