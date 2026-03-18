/*
 * XREFs of Usbh_BusPnpStop_PdoEvent @ 0x1C0044DC4
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001A150 (SET_PDO_HWPNPSTATE.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0022CF8 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeletePdo @ 0x1C0053F84 (UsbhDeletePdo.c)
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
        v13 = KeAcquireSpinLockRaiseToDpc(v12 + 348);
        if ( *((_DWORD *)v12 + 698) == 1 )
        {
          *((_DWORD *)v12 + 698) = 2;
          USBD_RemoveDeviceFromGlobalList(v11);
        }
        KeReleaseSpinLock(v12 + 348, v13);
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
