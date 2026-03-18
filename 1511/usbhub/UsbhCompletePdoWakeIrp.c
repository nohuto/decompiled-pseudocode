/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x1C000A9A0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C000B300 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetDx @ 0x1C001FC88 (UsbhPdoSetDx.c)
 *     UsbhPdoRemoveCleanup @ 0x1C00548A8 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C0046654 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, int a3)
{
  char v5; // si
  __int64 v6; // rdi
  PIRP v7; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v5 = 0;
  v6 = PdoExt(a2);
  v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 2272), 0LL);
  if ( v7 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    Log(a1, 16, 2004304720, a3, (__int64)v7);
    if ( a3 >= 0 && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x4000000) != 0 )
      PoSetSystemWake(v7);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, (unsigned int)a3);
    v7->IoStatus.Status = a3;
    IofCompleteRequest(v7, 0);
    UsbhDecPdoIoCount(*(_QWORD *)(v6 + 840), (ULONG_PTR)v7);
    v5 = 1;
  }
  *(_DWORD *)(v6 + 1412) &= ~0x2000u;
  return v5;
}
