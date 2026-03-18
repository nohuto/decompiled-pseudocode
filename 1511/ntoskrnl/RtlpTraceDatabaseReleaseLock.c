/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1401FBE90
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1401FB884 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1401FBA84 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1401FBB40 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1401FBBA8 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1401FBBB0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
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
