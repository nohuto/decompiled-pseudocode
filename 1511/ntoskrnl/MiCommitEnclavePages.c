/*
 * XREFs of MiCommitEnclavePages @ 0x140628FF8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 PteAddress; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 *v13; // rbx
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
  v12 = MiGetPteAddress(a4);
  v13 = (__int64 *)PteAddress;
  if ( PteAddress > v12 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)(a1 + 1032);
    --CurrentThread->SpecialApcDisable;
    v16 = ExAcquireAutoExpandPushLockShared(v15 + 16, 0LL, v11);
    VmPartition = MiGetVmPartition(a1 + 1280);
    v18 = MiAddPagesToEnclave(a2, VmPartition, PteAddress, v12, a6);
    ExReleaseAutoExpandPushLockShared(v16, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v18;
  }
  else
  {
    while ( !MI_READ_PTE_LOCK_FREE(v13) )
    {
      if ( (unsigned __int64)++v13 > v12 )
        goto LABEL_9;
    }
    return 3221225496LL;
  }
}
