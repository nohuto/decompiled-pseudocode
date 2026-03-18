/*
 * XREFs of Bulk_MapTransfers @ 0x1C0002420
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EvtDmaCallback @ 0x1C000EEF0 (Bulk_EvtDmaCallback.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C00107B0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_CommonBufferCallback @ 0x1C002D3B0 (Bulk_CommonBufferCallback.c)
 *     Bulk_EP_StartMapping @ 0x1C002DC80 (Bulk_EP_StartMapping.c)
 * Callees:
 *     Bulk_MappingLoop @ 0x1C00024C8 (Bulk_MappingLoop.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1)
{
  char i; // di
  int v3; // edx
  __int64 result; // rax

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v3,
        13,
        36,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    result = Bulk_MappingLoop(a1);
    if ( *(_DWORD *)(a1 + 100) != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 292) )
      break;
    result = TR_AttemptStateChange(a1, 2LL, 3LL);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
