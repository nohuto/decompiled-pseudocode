/*
 * XREFs of ACPIWakeEmptyRequestQueue @ 0x1C0005924
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004140 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIWakeCompleteRequestQueue @ 0x1C0005994 (ACPIWakeCompleteRequestQueue.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 */

__int64 __fastcall ACPIWakeEmptyRequestQueue(__int64 a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  KIRQL Irql; // [rsp+48h] [rbp+10h] BYREF

  v3[1] = v3;
  v3[0] = v3;
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ACPIWakeRemoveDevicesAndUpdate(a1, v3);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(Irql);
  ACPIWakeCompleteRequestQueue(v3, 3221225486LL);
  return 0LL;
}
