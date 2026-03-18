/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1C0028044
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045320 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046430 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054480 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000D644 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x1C002817C (UsbhSyncResumePort.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx

  v7 = PdoExt((__int64)a3, a2, (__int64)a3, a4);
  v8 = UsbhLatchPdo(a1, *((_WORD *)v7 + 710), 0LL, 0x70534D52u);
  Log(a1, 8, 1920167280, *((unsigned __int16 *)v7 + 710), v8);
  v12 = FdoExt(a1, v9, v10, v11);
  if ( v8 && a3 == (struct _DEVICE_OBJECT *)v8 && (v12[640] & 0x10) == 0 )
  {
    UsbhAcquirePdoStateLock(v13, a2, 15);
    if ( PdoExt((__int64)a3, v14, v15, v16)[281] == 3 )
    {
      *(_DWORD *)(a2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
      v17 = UsbhSyncResumePort(a1);
    }
    else
    {
      *(_DWORD *)(a2 + 136) = 0;
      v17 = -1073741810;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    }
  }
  else
  {
    v17 = -1073741810;
  }
  if ( v8 )
    UsbhUnlatchPdo(a1, v8, 0LL, 0x70534D52u);
  if ( v17 >= 0 )
    UsbhSet_Pdo_Dx(a3, (POWER_STATE)1);
  return (unsigned int)v17;
}
