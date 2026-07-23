/*
 * XREFs of ExpGetNextCallback @ 0x1404CE3D8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  int v2; // esi
  __int64 *v3; // rbp
  __int64 v5; // rbx
  __int64 *v6; // rbx
  signed __int64 v7; // rcx
  ULONG_PTR v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpCallbackListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpCallbackListLock, v5, (ULONG_PTR)&ExpCallbackListLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v6 = (__int64 *)Object[5];
  while ( v6 != &ExpCallbackListHead )
  {
    v3 = v6 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 5)) )
    {
      v2 = 1;
      break;
    }
    v6 = (__int64 *)*v6;
  }
  _m_prefetchw(&ExpCallbackListLock);
  if ( (ExpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = ExpCallbackListLock - 16;
  else
    v7 = 0LL;
  if ( (ExpCallbackListLock & 2) != 0
    || (v8 = ExpCallbackListLock,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, v7, ExpCallbackListLock)) )
  {
    ExfReleasePushLock(&ExpCallbackListLock);
  }
  KeAbPostRelease((ULONG_PTR)&ExpCallbackListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v3 & -(__int64)(v2 != 0);
}
