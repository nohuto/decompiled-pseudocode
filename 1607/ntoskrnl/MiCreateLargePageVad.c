/*
 * XREFs of MiCreateLargePageVad @ 0x1406625E0
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140014090 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x14065A378 (MiChargeProcessPhysicalPages.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rdi
  _KPROCESS *Process; // r15
  _DWORD *PoolWithTag; // rbp
  int v10; // esi

  v2 = *(unsigned int *)(a2 + 52);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v2) = v2 & 0x7FFFFFFF;
  v6 = v2 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  Process = CurrentThread->ApcState.Process;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x624C6D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v6) )
  {
    v10 = -1073741523;
LABEL_11:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v10;
  }
  if ( Process == (_KPROCESS *)a1 )
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v10 = MiChargeFullProcessCommitment(a1, v6);
  if ( Process == (_KPROCESS *)a1 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v10 < 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -(__int64)v6);
    goto LABEL_11;
  }
  PoolWithTag[2] = 16;
  MiInsertVadEvent(a2, (__int64 *)PoolWithTag, 0);
  return 0LL;
}
