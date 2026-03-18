/*
 * XREFs of MiCreateLargePageVad @ 0x14062B3E0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140626B34 (MiChargeProcessPhysicalPages.c)
 *     MiAllocateLargeZeroPages @ 0x14062B1CC (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v8; // rdi
  _KPROCESS *Process; // r15
  _QWORD *PoolWithTag; // rbp
  __int64 v12; // rcx
  int v13; // esi
  int ProcessPartition; // r12d
  _QWORD *LargeZeroPages; // rax

  v4 = *(unsigned int *)(a2 + 52);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  v8 = v4 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  Process = CurrentThread->ApcState.Process;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x624C6D4Du);
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
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v13 = MiChargeFullProcessCommitment(a1, v8);
  if ( Process == (_KPROCESS *)a1 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v13 < 0 )
  {
LABEL_16:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1584), -(__int64)v8);
    goto LABEL_17;
  }
  LargeZeroPages = MiAllocateLargeZeroPages(ProcessPartition, v8, a3, a4);
  if ( !LargeZeroPages )
  {
    if ( Process == (_KPROCESS *)a1 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    MiReturnFullProcessCommitment(a1, v8);
    if ( Process == (_KPROCESS *)a1 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v13 = -1073741670;
    goto LABEL_16;
  }
  *((_DWORD *)PoolWithTag + 2) = 16;
  PoolWithTag[2] = LargeZeroPages;
  MiInsertVadEvent(a2, PoolWithTag, 0LL);
  return 0LL;
}
