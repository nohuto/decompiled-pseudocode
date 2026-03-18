/*
 * XREFs of Isoch_MapTransfers @ 0x1C0002DF8
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_CommonBufferCallback @ 0x1C002AA00 (Isoch_CommonBufferCallback.c)
 *     Isoch_EP_StartMapping @ 0x1C002AE90 (Isoch_EP_StartMapping.c)
 *     Isoch_EvtDmaCallback @ 0x1C002AF50 (Isoch_EvtDmaCallback.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002BB14 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C002C3D0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     Isoch_MappingLoop @ 0x1C0002EF0 (Isoch_MappingLoop.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1)
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
        66,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    Isoch_MappingLoop(a1);
    result = *(unsigned int *)(a1 + 100);
    if ( (_DWORD)result != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 296) )
      return result;
    result = TR_AttemptStateChange(a1, 2LL, 3LL);
    if ( (_DWORD)result != 2 )
      return result;
LABEL_12:
    ;
  }
  if ( (_DWORD)result == 4 )
  {
    if ( *(_DWORD *)(a1 + 300) )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 100), 3, 4);
      if ( (_DWORD)result == 4 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 272),
          0LL);
        goto LABEL_12;
      }
    }
  }
  return result;
}
