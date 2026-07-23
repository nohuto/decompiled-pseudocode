/*
 * XREFs of MiMarkPteDirty @ 0x14009CF08
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 *a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rsi
  LONG *SharedVm; // rbx
  __int64 v5; // rax
  char v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v5 = MI_READ_PTE_LOCK_FREE(a1);
    v7 = v5;
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
    {
      *a1 = v5 | 0x62;
      if ( (unsigned int)MiPteInShadowRange(a1, v5 | 0x62) )
        MiWritePteShadow(v8, v7);
    }
    LOBYTE(v7) = v6;
    return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v7);
  }
  return result;
}
