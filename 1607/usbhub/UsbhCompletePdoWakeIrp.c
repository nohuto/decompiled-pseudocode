/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x1C0021680
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002E00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0021490 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetDx @ 0x1C0022EC0 (UsbhPdoSetDx.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054ED8 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0 (UsbhEtwLogDeviceIrpEvent.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C0046984 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  char v6; // si
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  PIRP v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  int v19; // r8d
  int v20; // r9d

  v5 = (int)a3;
  v6 = 0;
  v7 = PdoExt(a2, a2, a3, a4);
  v9 = IoCsqRemoveNextIrp((PIO_CSQ)(v7 + 568), 0LL);
  if ( v9 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1, v8, v10, v11);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20);
    }
    Log(a1, 16, 2004304720, v5, (__int64)v9);
    if ( (int)v5 >= 0 && (FdoExt(a1, v13, v14, v15)[640] & 0x4000000) != 0 )
      PoSetSystemWake(v9);
    UsbhEtwLogDeviceIrpEvent((__int64)v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, (unsigned int)v5);
    v9->IoStatus.Status = v5;
    IofCompleteRequest(v9, 0);
    UsbhDecPdoIoCount(*((_QWORD *)v7 + 105), (ULONG_PTR)v9, v16, v17);
    v6 = 1;
  }
  v7[353] &= ~0x2000u;
  return v6;
}
