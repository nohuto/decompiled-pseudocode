/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x14074877C
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLockNoReboot(ULONG_PTR a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rbx
  USHORT v5; // ax

  v2 = (struct _KLOCK_QUEUE_HANDLE *)a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, a1, 0LL);
  LOBYTE(a2) = v2->OldIrql;
  LOBYTE(a1) = CurrentIrql;
  v4 = ViKeLowerIrqlSanityChecks(a1, a2);
  pXdvKeReleaseInStackQueuedSpinLock(v2);
  if ( v4 )
  {
    *(_QWORD *)v4 = KeGetCurrentThread();
    *(_DWORD *)(v4 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    else
    {
      v5 = RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v4 + 16), 0LL);
      if ( v5 < 5u )
        *(_QWORD *)(v4 + 8LL * v5 + 16) = 0LL;
    }
  }
}
