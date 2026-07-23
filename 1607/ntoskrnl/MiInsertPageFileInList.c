/*
 * XREFs of MiInsertPageFileInList @ 0x1405690A4
 * Callers:
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B32A8 (MiUpdateReserveClusterInfo.c)
 *     MiNumberWsSwapPagefiles @ 0x1400BC72C (MiNumberWsSwapPagefiles.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     MiUpdatePageFileList @ 0x1401431BC (MiUpdatePageFileList.c)
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
  _BYTE *v10; // rax
  _BYTE *v11; // r14
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
  v9 = (volatile signed __int64 *)(v6 + 952);
  v10 = (_BYTE *)KeAbPreAcquire(v6 + 952, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 952), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 952), v10, v6 + 952);
  if ( v11 )
    v11[26] |= 1u;
  v12 = *(unsigned int *)(v6 + 6296);
  if ( (unsigned int)v12 >= v8 )
    goto LABEL_27;
  v13 = *(_WORD *)(a1 + 204) & 0xFFF0 | v12 & 0xF;
  *(_WORD *)(a1 + 204) = v13;
  if ( (v13 & 0x50) != 0 )
  {
    if ( (v13 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
    {
LABEL_27:
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 952));
      KeAbPostRelease(v6 + 952);
      v16 = -1073741673;
LABEL_30:
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return v16;
    }
    MiUpdatePageFileList(a1, 1);
    *(_QWORD *)(v6 + 8 * v12 + 6304) = a1;
    *(_DWORD *)(v6 + 6296) = v12 + 1;
  }
  else
  {
    if ( !(unsigned int)MiIncreaseCommitLimits(v6, v3, v17, 0, a1) )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 952));
      KeAbPostRelease(v6 + 952);
      v16 = -1073741583;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 948) )
      *(_DWORD *)(v6 + 948) = 1;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 952));
  KeAbPostRelease(v6 + 952);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 792), 0, v14);
  return 0LL;
}
