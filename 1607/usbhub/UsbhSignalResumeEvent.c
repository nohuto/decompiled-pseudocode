/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C00256AC
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0004B20 (UsbhDriverResetPort.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0009AB8 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C0023900 (UsbhHubIsr.c)
 *     UsbhPortResumeComplete @ 0x1C0025570 (UsbhPortResumeComplete.c)
 *     UsbhResumeSuspendedPort @ 0x1C0026A2C (UsbhResumeSuspendedPort.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042BC4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C0050D40 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C0050ED0 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C0051080 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C0051140 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0025724 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00258C0 (UsbhSetPcqEventStatus.c)
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
