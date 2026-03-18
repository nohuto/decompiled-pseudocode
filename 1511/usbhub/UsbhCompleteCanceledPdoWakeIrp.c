/*
 * XREFs of UsbhCompleteCanceledPdoWakeIrp @ 0x1C0004A80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C004677C (WPP_RECORDER_SF_dqq.c)
 */

void __fastcall UsbhCompleteCanceledPdoWakeIrp(char *Csq, PIRP Irp)
{
  char *v2; // rbx
  int v4; // r8d
  int v5; // r9d
  __int16 v6; // r10
  int v7; // [rsp+20h] [rbp-28h]

  v2 = Csq - 2272;
  Log(*((_QWORD *)Csq - 137), 16, 2004304705, (_DWORD)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_dqq(
      WPP_GLOBAL_Control->DeviceExtension,
      *((unsigned __int16 *)v2 + 710),
      v4,
      v5,
      v7,
      *((_WORD *)v2 + 710),
      *((_QWORD *)v2 + 105),
      (char)Irp);
  UsbhEtwLogDeviceIrpEvent(v2, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, 3221225760LL);
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
  UsbhDecPdoIoCount(*((_QWORD *)v2 + 105), (ULONG_PTR)Irp);
}
