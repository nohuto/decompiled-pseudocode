/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C00047A8
 * Callers:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045668 (Usbh_iSignalSyncDeviceReset.c)
 *     UsbhResetPortData @ 0x1C0054F54 (UsbhResetPortData.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  __int64 v8; // rax

  v5 = a1;
  v6 = (KSPIN_LOCK *)(FdoExt(a1) + 5168);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *(_QWORD *)(PdoExt(a2) + 864) )
  {
    *(_DWORD *)(PdoExt(a2) + 872) = a3;
    Log(v5, 4, 1936287557, a2, 0LL);
    v8 = PdoExt(a2);
    KeSetEvent(*(PRKEVENT *)(v8 + 864), 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
