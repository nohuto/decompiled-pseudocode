/*
 * XREFs of Usbh_ErrorDisconnect_PdoEvent @ 0x1C0044FA4
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_ErrorDisconnect_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  UsbhAcquirePdoStateLock(a1, a3, 4);
  Log(a1, 2, 1716736630, 0LL, a3);
  if ( PdoExt(a2, v6, v7, v8)[281] == 1 )
  {
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  }
}
