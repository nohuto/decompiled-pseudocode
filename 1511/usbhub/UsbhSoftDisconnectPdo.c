/*
 * XREFs of UsbhSoftDisconnectPdo @ 0x1C0044578
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00425DC (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C000FBE4 (UsbhCancelResetTimeout.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhSoftDisconnectPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 PortData; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  int v19; // edx

  v4 = *(_QWORD *)(a3 + 16);
  v6 = a2;
  FdoExt(a1, a2, a3, a4);
  v11 = PdoExt(v4, v8, v9, v10);
  Log(a1, 2, 1347638561, 0LL, a3);
  PortData = UsbhGetPortData(a1, *((_WORD *)v11 + 710));
  v13 = PortData;
  if ( PortData )
  {
    UsbhCancelResetTimeout(a1, PortData, 1);
    UsbhSignalSyncDeviceReset(a1, v4, v13, 0xC0000001);
    UsbhAcquirePdoStateLock(v14, a3, v6);
    Log(a1, 4, 1685219152, v13, v4);
    v18 = PdoExt(v4, v15, v16, v17);
    if ( v18[281] == 3 )
    {
      v19 = 3;
    }
    else
    {
      if ( v18[281] != 4 )
      {
LABEL_7:
        *(_DWORD *)(a3 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        return;
      }
      Log(a1, 4, 1685219123, (__int64)v11, (unsigned int)v11[353]);
      v19 = 4;
    }
    SET_PDO_HWPNPSTATE(v4, v19, v6);
    goto LABEL_7;
  }
}
