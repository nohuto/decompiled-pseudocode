/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x1407421E4
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 */

void __fastcall VerifierKeReleaseQueuedSpinLock(ULONG_PTR a1, __int64 a2)
{
  KIRQL v2; // di
  KSPIN_LOCK_QUEUE_NUMBER v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rbx
  USHORT v6; // ax

  v2 = a2;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( KernelVerifier == 1 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x36uLL, CurrentIrql, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  LOBYTE(a1) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(a1, a2);
  pXdvKeReleaseQueuedSpinLock(v3, v2);
  if ( v5 )
  {
    *(_QWORD *)v5 = KeGetCurrentThread();
    *(_DWORD *)(v5 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    else
    {
      v6 = RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v5 + 16), 0LL);
      if ( v6 < 5u )
        *(_QWORD *)(v5 + 8LL * v6 + 16) = 0LL;
    }
  }
}
