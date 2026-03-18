/*
 * XREFs of Isoch_MapTransfers @ 0x1C00250A4
 * Callers:
 *     Isoch_CommonBufferCallback @ 0x1C00243D0 (Isoch_CommonBufferCallback.c)
 *     Isoch_EP_StartMapping @ 0x1C0024A50 (Isoch_EP_StartMapping.c)
 *     Isoch_EvtDmaCallback @ 0x1C0024B20 (Isoch_EvtDmaCallback.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0025EC4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0028670 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Isoch_MappingLoop @ 0x1C0025190 (Isoch_MappingLoop.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1)
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
        0x42u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        v5,
        v6,
        v7);
    }
    Isoch_MappingLoop(a1);
    result = *(unsigned int *)(a1 + 100);
    if ( (_DWORD)result != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 296) )
      return result;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      return result;
LABEL_12:
    ;
  }
  if ( (_DWORD)result == 4 )
  {
    if ( *(_DWORD *)(a1 + 300) )
    {
      result = TR_AttemptStateChange(a1, 4, 3);
      if ( (_DWORD)result == 4 )
      {
        (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          *(_QWORD *)(a1 + 272),
          0LL);
        goto LABEL_12;
      }
    }
  }
  return result;
}
