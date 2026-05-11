/*
 * XREFs of PinWaitForStarvation @ 0x1C00020F8
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004840 (USBType1StateChangePin.c)
 *     USBCaptureResetWorker @ 0x1C0004D90 (USBCaptureResetWorker.c)
 *     USBHwDataPipeReset @ 0x1C001D570 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0023300 (USBMidiOutStateChangePin.c)
 * Callees:
 *     <none>
 */

void __fastcall PinWaitForStarvation(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al
  KIRQL v3; // si

  v1 = *(_QWORD *)(a1 + 16);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v3 = v2;
  if ( *(_DWORD *)(v1 + 40) )
  {
    KeResetEvent((PRKEVENT)(v1 + 104));
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v3);
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v2);
  }
}
