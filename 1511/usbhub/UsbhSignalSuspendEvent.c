/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C00419C0
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 *     UsbhRequestPortSuspend @ 0x1C001CF30 (UsbhRequestPortSuspend.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001E99C (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubIsr @ 0x1C0021DA0 (UsbhHubIsr.c)
 *     UsbhEnumerate1 @ 0x1C00267E8 (UsbhEnumerate1.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004288C (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C004FE68 (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0026510 (UsbhLogSignalSuspendEvent.c)
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
