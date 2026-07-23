/*
 * XREFs of MiCommitEnclavePages @ 0x14065E818
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiGetVmPartition @ 0x1401E8170 (MiGetVmPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 PteAddress; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r9
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  int *VmPartition; // rax
  unsigned int v18; // ebx

  if ( a5 != 4096 )
    return 3221225715LL;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  PteAddress = MiGetPteAddress(a3);
  v11 = MiGetPteAddress(v10);
  v12 = PteAddress;
  if ( PteAddress > v11 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)(a1 + 1032);
    --CurrentThread->SpecialApcDisable;
    v16 = ExAcquireAutoExpandPushLockShared(v15 + 16, 0LL);
    VmPartition = MiGetVmPartition(a1 + 1280);
    v18 = MiAddPagesToEnclave(a2, VmPartition, PteAddress, v11, a6);
    ExReleaseAutoExpandPushLockShared(v16, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v18;
  }
  else
  {
    while ( !MI_READ_PTE_LOCK_FREE(v12) )
    {
      v12 = v13 + 8;
      if ( v12 > v11 )
        goto LABEL_9;
    }
    return 3221225496LL;
  }
}
