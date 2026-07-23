/*
 * XREFs of ViKeIrqlLogCommon @ 0x140712F64
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x14070CA84 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140712154 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140712258 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x1407124FC (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140712B24 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140712B6C (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VfKeIrqlLogRaise @ 0x140712D1C (VfKeIrqlLogRaise.c)
 *     VerifierExReleaseFastMutex @ 0x14071A228 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
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
