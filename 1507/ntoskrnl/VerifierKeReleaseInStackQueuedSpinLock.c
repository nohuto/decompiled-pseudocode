/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x140748584
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rbx
  USHORT v6; // ax
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfDeadlockReleaseResource(
    (unsigned __int64)a1->LockQueue.Lock & 0xFFFFFFFFFFFFFFFCuLL,
    6LL,
    KeGetCurrentThread(),
    retaddr);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  LOBYTE(v2) = a1->OldIrql;
  LOBYTE(v3) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(v3, v2);
  pXdvKeReleaseInStackQueuedSpinLock(a1);
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
