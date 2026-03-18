/*
 * XREFs of MiInsertPageFileInList @ 0x140538300
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x14001358C (MiNumberWsSwapPagefiles.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B84AC (MiUpdateReserveClusterInfo.c)
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     MiUpdatePageFileList @ 0x14013A4F0 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rdx
  _QWORD **v5; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // r12d
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r14
  __int16 v13; // cx
  BOOLEAN v14; // r8
  unsigned int v16; // ebx
  __int64 v17; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = 2LL;
  *(_BYTE *)(a1 + 206) |= 1u;
  v17 = v1;
  v5 = (_QWORD **)(a1 + 64);
  do
  {
    if ( *v5 )
      **v5 = 2575857425LL;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = *(_QWORD *)(a1 + 256);
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  if ( (int *)v6 == MiSystemPartition )
    v8 = 16;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(v6 + 960);
  v10 = KeAbPreAcquire(v6 + 960, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 960), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 960), v10, v6 + 960);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = *(unsigned int *)(v6 + 5720);
  if ( (unsigned int)v12 >= v8 )
    goto LABEL_26;
  v13 = *(_WORD *)(a1 + 204) & 0xFFF0 | v12 & 0xF;
  *(_WORD *)(a1 + 204) = v13;
  if ( (v13 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v6, v3, v17, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 956) )
        *(_DWORD *)(v6 + 956) = 1;
      goto LABEL_17;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 960));
    KeAbPostRelease(v6 + 960);
    v16 = -1073741583;
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v16;
  }
  if ( (v13 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
  {
LABEL_26:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 960));
    KeAbPostRelease(v6 + 960);
    v16 = -1073741673;
    goto LABEL_29;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v6 + 8 * v12 + 5728) = a1;
  *(_DWORD *)(v6 + 5720) = v12 + 1;
LABEL_17:
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 960));
  KeAbPostRelease(v6 + 960);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 800), 0, v14);
  return 0LL;
}
