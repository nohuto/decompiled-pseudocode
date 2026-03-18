/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1C0004760
 * Callers:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004730 (UsbhSignalSyncDeviceReset.c)
 *     UsbhDropDevice @ 0x1C0050188 (UsbhDropDevice.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x1C00047FC (UsbhLogSignalDriverResetEvent.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  KIRQL v5; // al
  KIRQL v6; // bl

  Log(a1, 16, 1685213745, a2, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, v4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v6 = v5;
    UsbhSetPcqEventStatus(a1, a2, 3LL, 30LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
}
