/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x140041E40
 * Callers:
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400851D0 (CcUpdateSharedCacheMapFlag.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(char a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  signed __int32 v6; // eax
  unsigned __int32 v7; // ebx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ebp
  signed __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // esi
  int v15; // esi

  CurrentThread = KeGetCurrentThread();
  if ( !a2[1] )
    KeBugCheckEx(0x34u, 0x480uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a1 )
  {
    if ( CcLowPriWorkerThread != CurrentThread )
      return;
    v9 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v9, &CcLowPriorityWorkerThreadLock);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = CcLowPriOldIoPriority;
    v12 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    v13 = (unsigned int)(CcLowPriOldIoPriority << 9);
    do
    {
      v14 = v12;
      v12 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
              v13 | v12 & 0xFFFFF1FF,
              v12);
    }
    while ( v12 != v14 );
    v15 = (v14 >> 9) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((_DWORD)CurrentThread, 1332, v15, v11, 0LL);
    if ( v11 != v15 )
      KeAbProcessBaseIoPriorityChange((__int64)CurrentThread, v15, v11);
    if ( CcLowPriOldCpuPriority != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), CcLowPriOldCpuPriority);
    if ( (a2[38] & 0x20000000) != 0 )
    {
      LOBYTE(v13) = 1;
      PsBoostThreadIoEx(CurrentThread, v13, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag(a2, 0x20000000LL, 0LL);
    }
    CcLowPriWorkerThread = 0LL;
    CcLowPriSharedCacheMap = 0LL;
    CcLowPriOldIoPriority = 5;
    CcLowPriOldCpuPriority = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
    {
LABEL_36:
      KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
      return;
    }
LABEL_37:
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
    goto LABEL_36;
  }
  if ( CcMaxNumberOfWriteBehindThreads < (unsigned int)CcNumberWorkerThreads
    && !CcLowPriWorkerThread
    && !a2[129]
    && (a2[38] & 0x10000) == 0 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v4, &CcLowPriorityWorkerThreadLock);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    CcLowPriWorkerThread = CurrentThread;
    CcLowPriSharedCacheMap = (__int64)a2;
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
             v6 & 0xFFFFF1FF,
             v6);
    }
    while ( v6 != v7 );
    v8 = (v7 >> 9) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((_DWORD)CurrentThread, 1332, v8, 0, 0LL);
    if ( v8 )
      KeAbProcessBaseIoPriorityChange((__int64)CurrentThread, v8, 0);
    CcLowPriOldIoPriority = v8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_36;
    goto LABEL_37;
  }
}
