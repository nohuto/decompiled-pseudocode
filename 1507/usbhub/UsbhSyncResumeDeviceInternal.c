/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1C0029084
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463B0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00544B0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C00179CC (UsbhSet_Pdo_Dx.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     UsbhSyncResumePort @ 0x1C00291BC (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhSyncResumeDeviceInternal(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx

  v7 = PdoExt((__int64)a3, a2, (__int64)a3, a4);
  v8 = UsbhLatchPdo(a1, *((_WORD *)v7 + 710), 0LL, 0x70534D52u);
  Log(a1, 8, 1920167280, *((unsigned __int16 *)v7 + 710), v8);
  v12 = FdoExt(a1, v9, v10, v11);
  if ( v8 && a3 == (struct _DEVICE_OBJECT *)v8 && (v12[640] & 0x10) == 0 )
  {
    UsbhAcquirePdoStateLock(v13, a2, 15);
    if ( PdoExt((__int64)a3, v16, v17, v18)[281] == 3 )
    {
      *(_DWORD *)(a2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
      v19 = UsbhSyncResumePort(a1);
    }
    else
    {
      *(_DWORD *)(a2 + 136) = 0;
      v19 = -1073741810;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    }
  }
  else
  {
    v19 = -1073741810;
  }
  if ( v8 )
    UsbhUnlatchPdo(a1, v8, 0LL, 0x70534D52u);
  if ( v19 >= 0 )
    UsbhSet_Pdo_Dx(a3, 1LL, v14, v15);
  return (unsigned int)v19;
}
