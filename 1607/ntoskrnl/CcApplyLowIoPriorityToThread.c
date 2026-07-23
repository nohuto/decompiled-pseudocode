/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x140071360
 * Callers:
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006AD1C (CcUpdateSharedCacheMapFlag.c)
 *     PsSetIoPriorityThread @ 0x140071C90 (PsSetIoPriorityThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(char a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi

  CurrentThread = KeGetCurrentThread();
  if ( !a2[1] )
    KeBugCheckEx(0x34u, 0x480uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a1 )
  {
    if ( CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads
      || CcLowPriWorkerThread
      || a2[129]
      || (a2[38] & 0x10000) != 0 )
    {
      return;
    }
    v4 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v4, &CcLowPriorityWorkerThreadLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    CcLowPriWorkerThread = CurrentThread;
    CcLowPriSharedCacheMap = (__int64)a2;
    CcLowPriOldIoPriority = PsSetIoPriorityThread(CurrentThread, 0LL);
  }
  else
  {
    if ( CcLowPriWorkerThread != CurrentThread )
      return;
    v7 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
    v8 = v7;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v7, &CcLowPriorityWorkerThreadLock);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    PsSetIoPriorityThread(CurrentThread, (unsigned int)CcLowPriOldIoPriority);
    if ( CcLowPriOldCpuPriority != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), CcLowPriOldCpuPriority);
    if ( (a2[38] & 0x20000000) != 0 )
    {
      PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
      CcUpdateSharedCacheMapFlag((__int64)a2, 0x20000000, 0);
    }
    CcLowPriWorkerThread = 0LL;
    CcLowPriSharedCacheMap = 0LL;
    CcLowPriOldIoPriority = 5;
    CcLowPriOldCpuPriority = 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
}
