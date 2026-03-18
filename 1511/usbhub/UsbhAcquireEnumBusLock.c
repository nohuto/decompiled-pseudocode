/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x1C001F288
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDriverResetPort @ 0x1C0004900 (UsbhDriverResetPort.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhAcquireEnumBusLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _DWORD *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // r9
  KIRQL v10; // r10

  v4 = (unsigned __int16)a3;
  v7 = FdoExt(a1, a2, a3, a4);
  Log(a1, 4, 1631737171, (unsigned int)v7[768], v4);
  Log(a1, 4, 1631734851, (unsigned int)v7[768], a2);
  if ( *((_QWORD *)v7 + 549) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 383);
    if ( v7[768] == (unsigned __int16)v4 || *((_QWORD *)v7 + 385) == a2 )
    {
      Log(a1, 4, 2017613139, (unsigned int)v7[768], (unsigned int)v4);
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 383, v10);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 383, v8);
      Usbh_SSH_Event(a1, 6u, a2, v9);
      (*((void (__fastcall **)(_QWORD))v7 + 549))(*((_QWORD *)v7 + 529));
      Log(a1, 4, 1816286547, (unsigned int)v7[768], (unsigned int)v4);
      v7[768] = (unsigned __int16)v4;
      *((_QWORD *)v7 + 385) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement(v7 + 774);
      *((_QWORD *)v7 + 386) = UsbhIncHubBusy(a1, a2, a1, 1430416236LL, 1);
    }
  }
}
