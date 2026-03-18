/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x1C004479C
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0026DB0 (UsbhCancelEnumeration.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0043444 (UsbhFlushQueuedDriverReset.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPause_PdoEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx

  UsbhFlushQueuedDriverReset(a1, a3);
  UsbhAcquirePdoStateLock(v8, a4, 10);
  Log(a1, 2, 1716736630, 0LL, a4);
  v12 = (unsigned int)PdoExt(a2, v9, v10, v11)[281];
  if ( (_DWORD)v12 == 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        1u,
        0x45u,
        (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
        a2);
    Log(a1, 4, 1685283663, a2, a4);
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else if ( (_DWORD)v12 == 2 || (int)v12 > 2 && (int)v12 <= 4 )
  {
    SET_PDO_HWPNPSTATE(a2, v12, 10);
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceReset(a1, a2, a3, 0xC0000001);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
  }
}
