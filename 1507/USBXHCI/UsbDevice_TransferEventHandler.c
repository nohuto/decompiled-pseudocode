/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x1C00305FC
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001D0A0 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     Endpoint_TransferEventHandler @ 0x1C001A8E4 (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C001C5D8 (WPP_RECORDER_SF_DDX.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C0031E0C (WPP_RECORDER_SF_ddqq.c)
 */

void __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD **v6; // rdx
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      *(unsigned __int8 *)(a2 + 15),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      a4);
  v6 = *(_QWORD ***)(a1 + 8LL * (HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F) + 168);
  if ( v6 )
  {
    Endpoint_TransferEventHandler(a2, v6);
  }
  else if ( (*(_BYTE *)a2 & 3) != 1 )
  {
    v8 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
    v7 = *(unsigned __int8 *)(a2 + 15);
    WPP_RECORDER_SF_DDX(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      0xBu,
      0x3Fu,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      v7,
      v8,
      a2);
  }
}
