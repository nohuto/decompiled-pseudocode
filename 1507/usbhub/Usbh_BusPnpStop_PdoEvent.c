/*
 * XREFs of Usbh_BusPnpStop_PdoEvent @ 0x1C0044954
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003EFB0 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001E760 (SET_PDO_HWPNPSTATE.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPnpStop_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 i; // si
  __int64 PortData; // rax
  __int64 v11; // rdi
  KSPIN_LOCK *v12; // r14
  KIRQL v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx

  Log(a1, 2, 1716736630, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 5);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1, v6, v7, v8) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v11 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526257, v11, 0LL);
      if ( v11 )
      {
        v12 = (KSPIN_LOCK *)PdoExt(v11, v6, v7, v8);
        v13 = KeAcquireSpinLockRaiseToDpc(v12 + 347);
        if ( *((_DWORD *)v12 + 696) == 1 )
        {
          *((_DWORD *)v12 + 696) = 2;
          USBD_RemoveDeviceFromGlobalList(v11);
        }
        KeReleaseSpinLock(v12 + 347, v13);
        v7 = (unsigned int)PdoExt(v11, v14, v15, v16)[281];
        if ( (int)v7 > 0 )
        {
          if ( (int)v7 <= 2 )
          {
            UsbhDeletePdo(a1, v11, v7);
            UsbhAcquirePdoStateLock(v17, a2, 5);
          }
          else if ( (_DWORD)v7 == 3 )
          {
            SET_PDO_HWPNPSTATE(v11, 3LL, 5LL, v8);
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
}
