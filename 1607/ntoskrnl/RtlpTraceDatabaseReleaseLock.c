/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x140215F64
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140215958 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x140215B58 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140215C14 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x140215C7C (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x140215C84 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
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
