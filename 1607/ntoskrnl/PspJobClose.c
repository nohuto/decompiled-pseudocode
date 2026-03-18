/*
 * XREFs of PspJobClose @ 0x1404E2DE8
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140464B30 (PspLockJobMemoryLimitsExclusive.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140464B90 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404E2F28 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v6; // rsi

  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1304), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      PspUnlockJob(a2, (__int64)CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    PspLockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    v6 = *(void **)(a2 + 456);
    *(_QWORD *)(a2 + 456) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    PspUnlockJob(a2, (__int64)CurrentThread);
    if ( v6 )
      ObfDereferenceObject(v6);
  }
}
