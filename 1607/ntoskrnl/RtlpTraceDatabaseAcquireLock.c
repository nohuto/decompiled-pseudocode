/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x140215E90
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140215B2C (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x140215D2C (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140215DE8 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x140215E48 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x140215E58 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
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
