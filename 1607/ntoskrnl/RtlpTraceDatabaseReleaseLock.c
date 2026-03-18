/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x140216138
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140215B2C (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x140215D2C (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140215DE8 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x140215E50 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x140215E58 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  int v2; // eax
  KSPIN_LOCK *v3; // rcx

  *(_QWORD *)(a1 + 48) = 0LL;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = (KSPIN_LOCK *)(a1 + 56);
  if ( (v2 & 4) != 0 )
    KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 40));
  else
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v3);
  return 1;
}
