/*
 * XREFs of MiChargeControlAreaPartition @ 0x140027BE0
 * Callers:
 *     MiInsertSharedCommitNode @ 0x14042E680 (MiInsertSharedCommitNode.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiSubsectionUsingExtents @ 0x1400E7F14 (MiSubsectionUsingExtents.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1401F1AF0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1401F1F3C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiChargeControlAreaPartition(__int64 *a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  int *v4; // rbp
  unsigned __int16 v5; // ax
  int *v6; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rcx
  __int64 v15; // rcx

  v3 = *((_WORD *)a1 + 30) & 0x3FF;
  if ( v3 == 1023 )
    v4 = MiSystemPartition;
  else
    v4 = *(int **)(qword_140326FF8 + 8LL * v3);
  v5 = *(_WORD *)(a2 + 1444);
  if ( v5 == 1023 )
    v6 = MiSystemPartition;
  else
    v6 = *(int **)(qword_140326FF8 + 8LL * v5);
  if ( v4 == v6 )
    return 0LL;
  if ( v4 != MiSystemPartition )
    return 3221225539LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *a1;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(v9 + 40);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx(v9 + 40, v10, v9 + 40);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( (*((_DWORD *)a1 + 15) & 0xFFFFFC00) != 0 )
    goto LABEL_34;
  v13 = *(unsigned int *)(v9 + 8);
  if ( (a1[7] & 0x40000000) != 0 )
  {
    v13 = 0LL;
    v14 = a1 + 16;
    if ( a1 != (__int64 *)-128LL )
    {
      do
      {
        if ( !(unsigned int)MiSubsectionUsingExtents(v14, v11) )
          v13 += *(unsigned int *)(v15 + 44);
        v14 = *(__int64 **)(v15 + 16);
      }
      while ( v14 );
    }
  }
  if ( !v13 )
    goto LABEL_34;
  if ( !(unsigned int)MiGetCrossPartitionCharges(&unk_1403266B8, v13) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 40);
    KeAbPostRelease(v9 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 3221225773LL;
  }
  if ( !(unsigned int)MiChargeCommit(v4, v13, 0LL) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 40);
    KeAbPostRelease(v9 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiReturnCrossPartitionCharges(&unk_1403266B8, v13);
    return 3221225773LL;
  }
  if ( (unsigned int)MiChargeResident(v4, v13, 0LL) )
  {
LABEL_34:
    if ( (*((_DWORD *)a1 + 15) & 0xFFFFFC00) != 0xFFFFFC00 )
      *((_DWORD *)a1 + 15) = *((_DWORD *)a1 + 15) & 0x3FF ^ ((*((_DWORD *)a1 + 15) & 0xFFFFFC00) + 1024);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 40);
    KeAbPostRelease(v9 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 40);
    KeAbPostRelease(v9 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiReturnCommit(v4, v13);
    MiReturnCrossPartitionCharges(&unk_1403266B8, v13);
    return 3221225495LL;
  }
}
