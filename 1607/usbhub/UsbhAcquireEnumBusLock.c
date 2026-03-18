/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x1C000C0C4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDriverResetPort @ 0x1C0004B20 (UsbhDriverResetPort.c)
 *     UsbhPortConnect @ 0x1C0009DC0 (UsbhPortConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhAcquireEnumBusLock(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  __int64 v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r10

  v3 = a3;
  v6 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 4, 1631737171, *(_DWORD *)(v6 + 3072), v3);
  Log((_DWORD)DeviceObject, 4, 1631734851, *(_DWORD *)(v6 + 3072), a2);
  if ( *(_QWORD *)(v6 + 4392) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (unsigned __int16)v3 || *(_QWORD *)(v6 + 3080) == a2 )
    {
      Log((_DWORD)DeviceObject, 4, 2017613139, *(_DWORD *)(v6 + 3072), (unsigned int)v3);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v8);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      Usbh_SSH_Event(DeviceObject);
      (*(void (__fastcall **)(_QWORD))(v6 + 4392))(*(_QWORD *)(v6 + 4232));
      Log((_DWORD)DeviceObject, 4, 1816286547, *(_DWORD *)(v6 + 3072), (unsigned int)v3);
      *(_DWORD *)(v6 + 3072) = (unsigned __int16)v3;
      *(_QWORD *)(v6 + 3080) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 3096));
      *(_QWORD *)(v6 + 3088) = UsbhIncHubBusy(DeviceObject, 1);
    }
  }
}
