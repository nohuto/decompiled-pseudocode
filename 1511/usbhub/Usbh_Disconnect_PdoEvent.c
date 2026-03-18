/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x1C0044EB4
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041A3C (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhDropDevice @ 0x1C00500E8 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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

  UsbhAcquirePdoStateLock(a1, a4, a3);
  Log(a1, 2, 1716736630, 0LL, a4);
  FdoExt(a1, v8, v9, v10);
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
