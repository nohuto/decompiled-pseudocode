/*
 * XREFs of Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0044908
 * Callers:
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPnpFreeResources_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 i; // r14
  __int64 PortData; // rax
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx

  Log(a1, 2, 1716671314, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 17);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1, v6, v7, v8) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v11 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526258, v11, 0LL);
      if ( v11 )
      {
        v12 = PdoExt(v11, v6, v7, v8)[281];
        PdoExt(v11, v13, v14, v15);
        if ( v12 > 0 )
        {
          if ( v12 <= 2 )
          {
            UsbhDeletePdo(a1, v11, (unsigned int)v12);
          }
          else
          {
            if ( v12 != 3 )
              continue;
            *(_DWORD *)(a2 + 136) = 0;
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
            *(_DWORD *)(a2 + 88) = 1734964085;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
            UsbhUnlinkPdoDeviceHandle(a1, v11, 2017740849, 1);
          }
          UsbhAcquirePdoStateLock(v16, a2, 17);
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
}
