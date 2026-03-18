/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x1C00016C4
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     Endpoint_TransferEventHandler @ 0x1C000EED0 (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C0025ED8 (WPP_RECORDER_SF_DDX.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C00332DC (WPP_RECORDER_SF_ddqq.c)
 */

char __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // r8d
  char result; // al

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      *(unsigned __int8 *)(a2 + 15),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      a4);
  v6 = *(_DWORD *)(a2 + 12);
  if ( *(_QWORD *)(a1 + 8LL * (HIWORD(v6) & 0x1F) + 168) )
    return Endpoint_TransferEventHandler(a2);
  result = *(_BYTE *)a2 & 3;
  if ( result != 1 )
    return WPP_RECORDER_SF_DDX(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
             3,
             11,
             63,
             (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
             *(_BYTE *)(a2 + 15),
             BYTE2(v6) & 0x1F,
             a2);
  return result;
}
