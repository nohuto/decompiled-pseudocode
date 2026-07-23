/*
 * XREFs of PspGetNextJob @ 0x1404673D0
 * Callers:
 *     PspEnforceLimits @ 0x1404672E8 (PspEnforceLimits.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  __int64 *v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  __int64 *v5; // rdi

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PspJobListLock, v4, (ULONG_PTR)&PspJobListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( Object )
    v5 = (__int64 *)Object[3];
  else
    v5 = (__int64 *)PspJobList;
  if ( v5 != &PspJobList )
  {
    while ( !ObReferenceObjectSafeWithTag((__int64)(v5 - 3)) )
    {
      v5 = (__int64 *)*v5;
      if ( v5 == &PspJobList )
        goto LABEL_10;
    }
    v2 = v5 - 3;
  }
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
