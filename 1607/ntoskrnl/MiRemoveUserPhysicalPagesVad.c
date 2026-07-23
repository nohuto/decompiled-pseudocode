/*
 * XREFs of MiRemoveUserPhysicalPagesVad @ 0x14065C778
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140096C30 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140097AA0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiInitializeTbFlushList @ 0x1400B3858 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRemoveUserPhysicalPagesVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  unsigned __int64 PteAddress; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  _DWORD *v7; // r14
  _KPROCESS *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v13[192]; // [rsp+30h] [rbp-D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = (__int64)CurrentThread->ApcState.Process;
  if ( *(_QWORD *)(result + 1600) )
  {
    PteAddress = MiGetPteAddress((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
    v5 = MiGetPteAddress(((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF);
    MiInitializeTbFlushList((__int64)v13, 1, 20);
    --CurrentThread->SpecialApcDisable;
    v7 = (_DWORD *)(v6 + 16);
    ExAcquireAutoExpandPushLockExclusive(v6 + 16, 0LL);
    while ( PteAddress <= v5 )
    {
      v12 = MI_READ_PTE_LOCK_FREE(PteAddress);
      if ( (v12 & 1) != 0 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(48
                                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFLL)
                                    - 0x57FFFFFFFF8LL),
          0LL);
        MiInsertTbFlushEntry((__int64)v13, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
        *(_QWORD *)PteAddress = 0LL;
        if ( MiPteInShadowRange(PteAddress) )
          MiWritePteShadow(v11, 0LL);
      }
      PteAddress += 8LL;
    }
    MiFlushTbList((__int64)v13, v8, v9, v10);
    ExReleaseAutoExpandPushLockExclusive(v7, 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
