/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C001F7BC
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0004900 (UsbhDriverResetPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001E99C (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhPortResumeComplete @ 0x1C001F680 (UsbhPortResumeComplete.c)
 *     UsbhHubIsr @ 0x1C0021DA0 (UsbhHubIsr.c)
 *     UsbhResumeSuspendedPort @ 0x1C0025898 (UsbhResumeSuspendedPort.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004288C (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C00506A0 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C00509E0 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C0050AA0 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C001F834 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
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
