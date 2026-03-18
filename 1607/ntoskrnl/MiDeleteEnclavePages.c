/*
 * XREFs of MiDeleteEnclavePages @ 0x14065F308
 * Callers:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008BE60 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1400B5A30 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C7740 (ExAcquireAutoExpandPushLockShared.c)
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiDeleteEnclavePage @ 0x1401F02DC (MiDeleteEnclavePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnReservedEnclavePages @ 0x14065F89C (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 PteAddress; // rsi
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // r12
  _KPROCESS *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  _KPROCESS *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r9
  unsigned __int64 v20; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v21[192]; // [rsp+30h] [rbp-F8h] BYREF

  v2 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  PteAddress = MiGetPteAddress(v2);
  v4 = MiGetPteAddress((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  v7 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  v8 = ExAcquireAutoExpandPushLockShared(v7 + 16, 0LL);
  MiInitializeTbFlushList((__int64)v21, 1, 20);
  v12 = (_QWORD *)PteAddress;
  if ( PteAddress <= v6 )
  {
    do
    {
      v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v12);
      if ( v20 )
      {
        v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
        MiInsertTbFlushEntry((__int64)v21, v2, 1LL, 0);
        v20 = qword_1403A9360 & 0xFFFFFFFFFFFFFF7BuLL | v13 & 0xFFFFFFFFF000LL | ((unsigned __int64)(HIBYTE(word_140326AA8) & 1) << 8) | 0x63;
        *v12 = v20;
        if ( MiPteInShadowRange((unsigned __int64)v12) )
          MiWritePteShadow(v14, (__int64)v9);
      }
      v2 += 4096LL;
      ++v12;
    }
    while ( (unsigned __int64)v12 <= v6 );
  }
  MiFlushTbList((__int64)v21, v9, v10, v11);
  while ( PteAddress <= v6 )
  {
    MiDeleteEnclavePage(PteAddress, (__int64)v21);
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockShared(v8, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v21, v15, v16, v17);
  if ( (*(_DWORD *)(a1 + 88) & 2) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(qword_140327F90 + 276840556), 0xFFFFFFFF);
  if ( (MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 64)) & 1) != 0 )
    MiDeleteEnclavePage(v18, 0LL);
  MiReleasePtes((__int64)&qword_140327870, *(_QWORD *)(a1 + 64), 1u);
  return MiReturnReservedEnclavePages(a1);
}
