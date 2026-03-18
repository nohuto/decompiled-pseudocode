/*
 * XREFs of MiResizeAweBitMap @ 0x1406270C0
 * Callers:
 *     MiAllocateAweInfo @ 0x14062686C (MiAllocateAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     RtlClearAllBitsEx @ 0x1400BC0AC (RtlClearAllBitsEx.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExInitializeAutoExpandPushLock @ 0x1400E1A04 (ExInitializeAutoExpandPushLock.c)
 *     RtlCopyBitMapEx @ 0x1401F7D34 (RtlCopyBitMapEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1403E336C (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall MiResizeAweBitMap(unsigned __int64 *P)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // ebx
  unsigned __int64 v4; // r15
  void *v5; // r13
  __int64 Process; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  PVOID PoolWithTag; // rax
  unsigned __int64 *v11; // rbp
  __int64 v12; // r8
  int v13; // r12d
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  unsigned __int64 v16; // [rsp+88h] [rbp+10h]
  SIZE_T v17; // [rsp+90h] [rbp+18h]
  PVOID Pa; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v7 = *((_QWORD *)MiGetProcessPartition(Process) + 713);
  if ( *(_QWORD *)(Process + 1064) && (unsigned __int64)(v7 + 1) > 0x100000000LL )
    v7 = 0xFFFFFFFFLL;
  v8 = v7 + 1;
  v16 = v7 + 1;
  v17 = 8 * (((((_BYTE)v7 + 1) & 0x3F) != 0) + ((unsigned __int64)(v7 + 1) >> 6));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x4C646156u);
  Pa = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)&v14 = v8;
  *((_QWORD *)&v14 + 1) = PoolWithTag;
  RtlClearAllBitsEx((__int64)&v14);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P != *(unsigned __int64 **)(Process + 1032) )
      ExFreePoolWithTag(P, 0);
    v3 = -1073741558;
    goto LABEL_22;
  }
  v11 = *(unsigned __int64 **)(Process + 1032);
  if ( v11 )
  {
    if ( P != v11 )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v11 + 2), 0LL);
    if ( v16 <= *v11 )
    {
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)v11 + 4, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
LABEL_22:
      ExFreePoolWithTag(Pa, 0);
      return (unsigned int)v3;
    }
  }
  v13 = PsChargeProcessPagedPoolQuota((struct _KPROCESS *)Process, v17);
  if ( v13 < 0 )
  {
    if ( v11 )
    {
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)v11 + 4, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( P && P != v11 )
      ExFreePoolWithTag(P, 0);
    v3 = v13;
    goto LABEL_22;
  }
  if ( v11 )
  {
    RtlCopyBitMapEx(v11, (unsigned __int64 *)&v14, v12);
    v15 = *(_OWORD *)v11;
    *(_OWORD *)v11 = v14;
    ExReleaseAutoExpandPushLockExclusive((_DWORD *)v11 + 4, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v5 = (void *)*((_QWORD *)&v15 + 1);
    v4 = v15;
  }
  else
  {
    *(_OWORD *)P = v14;
    ExInitializeAutoExpandPushLock(P + 2, 1);
    *(_QWORD *)(Process + 1032) = P;
  }
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    LOBYTE(v3) = (v4 & 0x3F) != 0;
    PsReturnProcessPagedPoolQuota((struct _KPROCESS *)Process, 8 * ((v4 >> 6) + v3));
  }
  return 0LL;
}
