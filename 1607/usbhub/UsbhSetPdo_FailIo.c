/*
 * XREFs of UsbhSetPdo_FailIo @ 0x1C0044874
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0043440 (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044F54 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045434 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004BF44 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054D80 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_FailIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)PdoExt(a1, a2, a3, a4);
  v5 = KeAcquireSpinLockRaiseToDpc(v4 + 151);
  *((_DWORD *)v4 + 196) = 2;
  KeReleaseSpinLock(v4 + 151, v5);
}
