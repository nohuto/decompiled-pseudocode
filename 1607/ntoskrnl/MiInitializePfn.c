/*
 * XREFs of MiInitializePfn @ 0x1400E5120
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x1401F4FAC (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 *     MiInitializeSystemImagePage @ 0x1407A5EBC (MiInitializeSystemImagePage.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiInitializePfn(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 DemandZeroPte; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // rax
  unsigned int v13; // r10d
  unsigned int v14; // r13d
  __int64 ContainingPageTable; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // r14
  unsigned int Queue; // esi
  int v19; // esi
  unsigned __int8 v20; // r15
  unsigned __int64 v21; // rax
  __int64 result; // rax

  DemandZeroPte = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v10 & 4) != 0 )
  {
    if ( DemandZeroPte )
      DemandZeroPte = ((unsigned __int16)DemandZeroPte ^ (unsigned __int16)(32 * v11)) & 0x3E0 ^ (unsigned __int64)DemandZeroPte;
    else
      DemandZeroPte = MiMakeDemandZeroPte(v11, v8, v9, v10);
  }
  v12 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, 4LL);
  *(_QWORD *)(a1 + 16) = v12;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v12 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v14 = MiProtectionToCacheAttribute(v13);
  *(_WORD *)(a1 + 32) = 1;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)(a1 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v17 = 48 * ContainingPageTable - 0x58000000000LL;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    v19 = (Queue >> 9) & 7;
  else
    LOBYTE(v19) = PsGetPagePriorityThread(CurrentThread);
  v20 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
      MiLockPageAtDpcInline(a1);
    else
      v20 = MiLockPageInline(a1);
  }
  if ( (a4 & 0x20) == 0 )
    *(_BYTE *)(a1 + 34) |= 0x10u;
  MiLockNestedPageAtDpcInline(v17);
  *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != v14 )
    MiChangePageAttribute(a1, v14, 1);
  MiSetPfnTbFlushStamp(a1, 0LL, 1LL);
  v21 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v21 | 1;
  *(_BYTE *)(a1 + 35) ^= (v19 ^ *(_BYTE *)(a1 + 35)) & 7;
  result = *(unsigned __int8 *)(a1 + 34);
  LOBYTE(result) = result & 0xF8 | 6;
  *(_BYTE *)(a1 + 34) = result;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      result = v20;
      __writecr8(v20);
    }
  }
  return result;
}
