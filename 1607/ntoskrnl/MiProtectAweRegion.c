/*
 * XREFs of MiProtectAweRegion @ 0x14065C5C4
 * Callers:
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
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

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1)
{
  unsigned int v1; // esi
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // r8d
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // r14
  __int16 v12; // ax
  __int64 v13; // rcx
  _KPROCESS *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v19[192]; // [rsp+30h] [rbp-108h] BYREF

  v1 = 1;
  PteAddress = MiGetPteAddress(a1);
  v4 = MiGetPteAddress(v3);
  CurrentThread = KeGetCurrentThread();
  v7 = v4;
  v8 = v5;
  if ( v5 == 24 )
    v8 = 1LL;
  v9 = ((unsigned __int64)(HIBYTE(word_140326AE8) & 1) << 8) | MmProtectToPteMask[v8] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF025LL;
  if ( v5 == 24 )
  {
    v9 &= ~4uLL;
  }
  else if ( v5 == 4 )
  {
    v9 |= 0x42uLL;
  }
  MiInitializeTbFlushList((__int64)v19, 1, 20);
  v11 = *(_QWORD *)(v10 + 1032);
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v11 + 16, 0LL);
  v12 = MI_READ_PTE_LOCK_FREE(PteAddress);
  if ( (v12 & 1) != 0 && (v12 & 4) != 0 )
    v1 = (v12 & 0x800) != 0LL ? 4 : 2;
  while ( PteAddress <= v7 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(PteAddress);
    if ( (v18 & 1) != 0 )
    {
      v9 ^= (v9 ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18)) & 0xFFFFFFFFF000LL;
      MiInsertTbFlushEntry((__int64)v19, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
      *(_QWORD *)PteAddress = v9;
      if ( MiPteInShadowRange(PteAddress) )
        MiWritePteShadow(v13, v9);
    }
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v11 + 16), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v19, v14, v15, v16);
  return v1;
}
