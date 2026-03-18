/*
 * XREFs of MiResizeAweBitMap @ 0x14065C82C
 * Callers:
 *     MiAllocateAweInfo @ 0x14065C02C (MiAllocateAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140027B7C (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002C390 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CFD0 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlClearAllBitsEx @ 0x1400966C4 (RtlClearAllBitsEx.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140097430 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400982A0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExInitializeAutoExpandPushLock @ 0x14009CE20 (ExInitializeAutoExpandPushLock.c)
 *     RtlCopyBitMapEx @ 0x140212064 (RtlCopyBitMapEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1404C1658 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall MiResizeAweBitMap(unsigned __int64 *P)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // ebx
  ULONG_PTR Process; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  SIZE_T v7; // r15
  PVOID PoolWithTag; // rax
  unsigned __int64 *v10; // rsi
  __int64 v11; // r8
  int v12; // r15d
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  PVOID v14[2]; // [rsp+30h] [rbp-38h]
  PVOID Pa; // [rsp+78h] [rbp+10h]

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
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x4C646156u);
  Pa = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)&v13 = v6;
  *((_QWORD *)&v13 + 1) = PoolWithTag;
  RtlClearAllBitsEx((__int64)&v13);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P != *(unsigned __int64 **)(Process + 1032) )
      ExFreePoolWithTag(P, 0);
    v3 = -1073741558;
    goto LABEL_22;
  }
  v10 = *(unsigned __int64 **)(Process + 1032);
  if ( v10 )
  {
    if ( P != v10 )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v10 + 2), 0LL);
    if ( v6 <= *v10 )
    {
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)v10 + 4, 0LL);
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
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)v10 + 4, 0LL);
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
    RtlCopyBitMapEx(v10, (unsigned __int64 *)&v13, v11);
    *(_OWORD *)v14 = *(_OWORD *)v10;
    *(_OWORD *)v10 = v13;
    ExReleaseAutoExpandPushLockExclusive((_DWORD *)v10 + 4, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    *(_OWORD *)P = v13;
    ExInitializeAutoExpandPushLock(P + 2, 1);
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
