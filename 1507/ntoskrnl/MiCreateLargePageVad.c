/*
 * XREFs of MiCreateLargePageVad @ 0x1406A9CA4
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiInsertVadEvent @ 0x140089D40 (MiInsertVadEvent.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x1406A5EA4 (MiChargeProcessPhysicalPages.c)
 *     MiAllocateLargeZeroPages @ 0x1406A9A90 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v8; // rdi
  _KPROCESS *Process; // r15
  PVOID PoolWithTag; // rbp
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  int ProcessPartition; // r12d
  _QWORD *LargeZeroPages; // rax
  __int64 v18; // r8
  __int64 v19; // r9

  v4 = *(unsigned int *)(a2 + 52);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  v8 = v4 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  Process = CurrentThread->ApcState.Process;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x624C6D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v8) )
  {
    v13 = -1073741523;
LABEL_17:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v13;
  }
  ProcessPartition = (unsigned int)MiGetProcessPartition(v12);
  if ( Process == (_KPROCESS *)a1 )
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v14, v15);
  v13 = MiChargeFullProcessCommitment(a1, v8);
  if ( Process == (_KPROCESS *)a1 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v13 < 0 )
  {
LABEL_16:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1576), -(__int64)v8);
    goto LABEL_17;
  }
  LargeZeroPages = MiAllocateLargeZeroPages(ProcessPartition, v8, a3, a4);
  if ( !LargeZeroPages )
  {
    if ( Process == (_KPROCESS *)a1 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v18, v19);
    MiReturnFullProcessCommitment(a1, v8);
    if ( Process == (_KPROCESS *)a1 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v13 = -1073741670;
    goto LABEL_16;
  }
  *((_DWORD *)PoolWithTag + 2) = 16;
  *((_QWORD *)PoolWithTag + 2) = LargeZeroPages;
  MiInsertVadEvent(a2, (__int64 *)PoolWithTag, 0);
  return 0LL;
}
