/*
 * XREFs of Bulk_MapTransfers @ 0x1C00022F8
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000ABB0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EvtDmaCallback @ 0x1C000E910 (Bulk_EvtDmaCallback.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000F9E0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_CommonBufferCallback @ 0x1C002D900 (Bulk_CommonBufferCallback.c)
 *     Bulk_EP_StartMapping @ 0x1C002E1F0 (Bulk_EP_StartMapping.c)
 * Callees:
 *     Bulk_MappingLoop @ 0x1C0002F34 (Bulk_MappingLoop.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 *     TR_AttemptStateChange @ 0x1C0028AA4 (TR_AttemptStateChange.c)
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
        (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
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
