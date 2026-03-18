/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x1C00451F4
 * Callers:
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041D74 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhDropDevice @ 0x1C005077C (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C0050ED0 (UsbhPortDisconnect.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0022CF8 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeregisterPdo @ 0x1C0043440 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0053F84 (UsbhDeletePdo.c)
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
