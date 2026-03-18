/*
 * XREFs of UsbhIdleIrp_ReleaseIrp @ 0x1C00560E8
 * Callers:
 *     UsbhIdleExIrp_IdleReady @ 0x1C005572C (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C00558A0 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C00559A0 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C0055ADC (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055DA0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C00561DC (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhClearPdoIdleReady @ 0x1C00210BC (UsbhClearPdoIdleReady.c)
 *     WPP_RECORDER_SF_dqqD @ 0x1C0056680 (WPP_RECORDER_SF_dqqD.c)
 */

__int64 __fastcall UsbhIdleIrp_ReleaseIrp(__int64 a1, ULONG_PTR a2, IRP *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  _DWORD *v12; // rbp
  __int64 v13; // r9
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+20h] [rbp-48h]

  Log(a1, 0x10000, 1936933744, (int)a4, (__int64)a3);
  if ( a3 )
  {
    v12 = PdoExt(a2, v8, v9, v10);
    UsbhClearPdoIdleReady(a1, a2, (__int64)a3, v13);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dqqD(
        WPP_GLOBAL_Control->DeviceExtension,
        *((unsigned __int16 *)v12 + 710),
        v14,
        v15,
        v19,
        *((_WORD *)v12 + 710),
        a2,
        (char)a3,
        a4);
    UsbhEtwLogDeviceIrpEvent((__int64)v12, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_COMPLETE, a4);
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v16, v17);
  }
  else
  {
    Log(a1, v11, 1936933680, v10, 0LL);
  }
  return a4;
}
