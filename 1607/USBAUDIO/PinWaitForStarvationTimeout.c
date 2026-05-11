/*
 * XREFs of PinWaitForStarvationTimeout @ 0x1C00021F8
 * Callers:
 *     PinWaitForStarvation @ 0x1C000228C (PinWaitForStarvation.c)
 *     USBType1StateChangePin @ 0x1C00049B0 (USBType1StateChangePin.c)
 *     USBCaptureResetWorker @ 0x1C0004F40 (USBCaptureResetWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinWaitForStarvationTimeout(__int64 a1, union _LARGE_INTEGER *a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  KIRQL v5; // al
  KIRQL v6; // bp

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  v6 = v5;
  if ( *(_DWORD *)(v2 + 40) )
  {
    KeResetEvent((PRKEVENT)(v2 + 104));
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    return (unsigned int)KeWaitForSingleObject((PVOID)(v2 + 104), Executive, 0, 0, a2);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
  }
  return v4;
}
