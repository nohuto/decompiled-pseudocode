/*
 * XREFs of MiResizeAweBitMap @ 0x14065C910
 * Callers:
 *     MiAllocateAweInfo @ 0x14065C110 (MiAllocateAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlClearAllBitsEx @ 0x140095EC4 (RtlClearAllBitsEx.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140096C30 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140097AA0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExInitializeAutoExpandPushLock @ 0x14009C620 (ExInitializeAutoExpandPushLock.c)
 *     RtlCopyBitMapEx @ 0x140211E90 (RtlCopyBitMapEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1404AD388 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall MiResizeAweBitMap(_RTL_BITMAP_EX *P)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // ebx
  ULONG_PTR Process; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  SIZE_T v7; // r15
  unsigned __int64 *PoolWithTag; // rax
  _RTL_BITMAP_EX *v10; // rsi
  __int64 v11; // r8
  int v12; // r15d
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-48h] BYREF
  PVOID v14[2]; // [rsp+30h] [rbp-38h]
  unsigned __int64 *Pa; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v14[0] = 0LL;
  v14[1] = 0LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v5 = *((_QWORD *)MiGetProcessPartition(Process) + 785);
  if ( *(_QWORD *)(Process + 1064) && (unsigned __int64)(v5 + 1) > 0x100000000LL )
    v5 = 0xFFFFFFFFLL;
  v6 = v5 + 1;
  v7 = 8 * (((((_BYTE)v5 + 1) & 0x3F) != 0) + ((unsigned __int64)(v5 + 1) >> 6));
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v7, 0x4C646156u);
  Pa = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  BitMapHeader.SizeOfBitMap = v6;
  BitMapHeader.Buffer = PoolWithTag;
  RtlClearAllBitsEx(&BitMapHeader);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P != *(_RTL_BITMAP_EX **)(Process + 1032) )
      ExFreePoolWithTag(P, 0);
    v3 = -1073741558;
    goto LABEL_22;
  }
  v10 = *(_RTL_BITMAP_EX **)(Process + 1032);
  if ( v10 )
  {
    if ( P != v10 )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&v10[1], 0LL);
    if ( v6 <= v10->SizeOfBitMap )
    {
      ExReleaseAutoExpandPushLockExclusive(&v10[1], 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
LABEL_22:
      ExFreePoolWithTag(Pa, 0);
      return (unsigned int)v3;
    }
  }
  v12 = PsChargeProcessPagedPoolQuota((struct _KPROCESS *)Process, v7);
  if ( v12 < 0 )
  {
    if ( v10 )
    {
      ExReleaseAutoExpandPushLockExclusive(&v10[1], 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P && P != v10 )
      ExFreePoolWithTag(P, 0);
    v3 = v12;
    goto LABEL_22;
  }
  if ( v10 )
  {
    RtlCopyBitMapEx(&v10->SizeOfBitMap, &BitMapHeader.SizeOfBitMap, v11);
    *(_RTL_BITMAP_EX *)v14 = *v10;
    *v10 = BitMapHeader;
    ExReleaseAutoExpandPushLockExclusive(&v10[1], 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    *P = BitMapHeader;
    ExInitializeAutoExpandPushLock(&P[1].SizeOfBitMap, 1);
    *(_QWORD *)(Process + 1032) = P;
  }
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( v14[1] )
  {
    ExFreePoolWithTag(v14[1], 0);
    LOBYTE(v3) = ((__int64)v14[0] & 0x3F) != 0;
    PsReturnProcessPagedPoolQuota(Process, 8 * (v3 + ((unsigned __int64)v14[0] >> 6)));
  }
  return 0LL;
}
