/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x1C0044D84
 * Callers:
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041820 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhDropDevice @ 0x1C0050188 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C00508D0 (UsbhPortDisconnect.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     UsbhDeregisterPdo @ 0x1C0042EE0 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8

  UsbhAcquirePdoStateLock((__int64)a1, a4, a3);
  Log((__int64)a1, 2, 1716736630, 0LL, a4);
  FdoExt((__int64)a1, v8, v9, v10);
  if ( (PdoExt(a2, v11, v12, v13)[353] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v17 = (unsigned int)PdoExt(a2, v14, v15, v16)[281];
  if ( (int)v17 > 0 )
  {
    if ( (int)v17 <= 2 )
    {
      UsbhDeletePdo(a1, a2, v17);
      return;
    }
    if ( (_DWORD)v17 == 3 )
    {
      UsbhDeregisterPdo(a1, a2, v17, a3, a4);
      return;
    }
  }
  *(_DWORD *)(a4 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a4 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
}
