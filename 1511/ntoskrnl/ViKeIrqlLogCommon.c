/*
 * XREFs of ViKeIrqlLogCommon @ 0x1406C6F14
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1406C09EC (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1406C6104 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1406C6208 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x1406C64AC (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1406C6AD4 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1406C6B1C (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VfKeIrqlLogRaise @ 0x1406C6CCC (VfKeIrqlLogRaise.c)
 *     VerifierExReleaseFastMutex @ 0x1406CE170 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViKeIrqlLogCommon(__int64 a1, ULONG a2)
{
  USHORT v3; // ax

  if ( a1 )
  {
    *(_QWORD *)a1 = KeGetCurrentThread();
    *(_DWORD *)(a1 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    else
    {
      v3 = RtlCaptureStackBackTrace(a2, 5u, (PVOID *)(a1 + 16), 0LL);
      if ( v3 < 5u )
        *(_QWORD *)(a1 + 8LL * v3 + 16) = 0LL;
    }
  }
}
