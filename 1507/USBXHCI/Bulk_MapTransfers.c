/*
 * XREFs of Bulk_MapTransfers @ 0x1C002A6B0
 * Callers:
 *     Bulk_CommonBufferCallback @ 0x1C0029790 (Bulk_CommonBufferCallback.c)
 *     Bulk_EP_StartMapping @ 0x1C002A080 (Bulk_EP_StartMapping.c)
 *     Bulk_EvtDmaCallback @ 0x1C002A110 (Bulk_EvtDmaCallback.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C002D460 (Bulk_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Bulk_MappingLoop @ 0x1C002A758 (Bulk_MappingLoop.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1)
{
  int i; // edi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = *(_QWORD *)(a1 + 56);
      LODWORD(v7) = i;
      LODWORD(v6) = *(_DWORD *)(v3 + 144);
      LODWORD(v5) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v3 + 80),
        5u,
        0xDu,
        0x24u,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        v5,
        v6,
        v7);
    }
    result = Bulk_MappingLoop(a1);
    if ( *(_DWORD *)(a1 + 100) != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 292) )
      break;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
