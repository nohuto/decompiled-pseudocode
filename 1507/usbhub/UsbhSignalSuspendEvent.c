/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C00417A4
 * Callers:
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000A514 (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BF20 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C0022AD0 (UsbhHubIsr.c)
 *     UsbhRequestPortSuspend @ 0x1C00258F4 (UsbhRequestPortSuspend.c)
 *     UsbhEnumerate1 @ 0x1C0027540 (UsbhEnumerate1.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042670 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C004FF08 (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C00508D0 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C00273F8 (UsbhLogSignalSuspendEvent.c)
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
