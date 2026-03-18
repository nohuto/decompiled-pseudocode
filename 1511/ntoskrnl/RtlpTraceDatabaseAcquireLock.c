/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x1401FBBE8
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1401FB884 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1401FBA84 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1401FBB40 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1401FBBA0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1401FBBB0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  int v1; // eax
  KSPIN_LOCK *v3; // rcx

  v1 = *(_DWORD *)(a1 + 4);
  v3 = (KSPIN_LOCK *)(a1 + 56);
  if ( (v1 & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v3);
  else
    ExAcquireFastMutex((PFAST_MUTEX)v3);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
