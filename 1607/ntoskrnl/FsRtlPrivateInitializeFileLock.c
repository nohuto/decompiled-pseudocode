/*
 * XREFs of FsRtlPrivateInitializeFileLock @ 0x1400B0500
 * Callers:
 *     FsRtlPrivateLock @ 0x1400C2A48 (FsRtlPrivateLock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

char __fastcall FsRtlPrivateInitializeFileLock(_QWORD *a1, char a2)
{
  char v4; // bl
  _QWORD *v5; // rax

  ExAcquireFastMutex(&FsRtlCreateLockInfo);
  v4 = 0;
  if ( a1[3] )
    goto LABEL_4;
  v5 = ExAllocateFromNPagedLookasideList(&FsRtlLockInfoLookasideList);
  if ( v5 )
  {
    *v5 = -1LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[1] = *a1;
    v5[2] = a1[1];
    a1[7] = 0LL;
    a1[10] = 0LL;
    a1[3] = v5;
LABEL_4:
    v4 = 1;
    goto LABEL_7;
  }
  if ( !a2 )
    RtlRaiseStatus(-1073741670);
LABEL_7:
  KeReleaseGuardedMutex(&FsRtlCreateLockInfo);
  return v4;
}
