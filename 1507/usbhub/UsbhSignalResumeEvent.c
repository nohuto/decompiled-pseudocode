/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C00250BC
 * Callers:
 *     UsbhDriverResetPort @ 0x1C00049E0 (UsbhDriverResetPort.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000A514 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C0022AD0 (UsbhHubIsr.c)
 *     UsbhPortResumeComplete @ 0x1C0024F80 (UsbhPortResumeComplete.c)
 *     UsbhResumeSuspendedPort @ 0x1C00268D8 (UsbhResumeSuspendedPort.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042670 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C0050740 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C00508D0 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C0050A80 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C0050B40 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0025134 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
