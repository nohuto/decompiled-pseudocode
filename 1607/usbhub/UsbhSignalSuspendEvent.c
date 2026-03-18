/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C0041CF8
 * Callers:
 *     UsbhEnumerate1 @ 0x1C0009834 (UsbhEnumerate1.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0009AB8 (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C0023900 (UsbhHubIsr.c)
 *     UsbhRequestPortSuspend @ 0x1C0025DD4 (UsbhRequestPortSuspend.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042BC4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C00504FC (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C0050ED0 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C00258C0 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027090 (UsbhLogSignalSuspendEvent.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // al
  KIRQL v7; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2, a3, a4) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v7 = v6;
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
  }
}
