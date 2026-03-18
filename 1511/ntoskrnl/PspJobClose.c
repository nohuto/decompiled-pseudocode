/*
 * XREFs of PspJobClose @ 0x140485508
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140486708 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140486750 (PspLockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v6; // rsi

  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1296), 1u);
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
