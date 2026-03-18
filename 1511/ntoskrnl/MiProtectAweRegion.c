/*
 * XREFs of MiProtectAweRegion @ 0x140626D90
 * Callers:
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned __int64 PteAddress; // rdi
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r14
  __int16 v14; // ax
  _KPROCESS *v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v18[192]; // [rsp+30h] [rbp-108h] BYREF

  v4 = 1;
  PteAddress = MiGetPteAddress(a1);
  v7 = MiGetPteAddress(a2);
  CurrentThread = KeGetCurrentThread();
  v9 = v7;
  v10 = a3;
  if ( a3 == 24 )
    v10 = 1LL;
  v11 = ((unsigned __int64)(HIBYTE(word_1402FE760) & 1) << 8) | MmProtectToPteMask[v10] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF025LL;
  if ( a3 == 24 )
  {
    v11 &= ~4uLL;
  }
  else if ( a3 == 4 )
  {
    v11 |= 0x42uLL;
  }
  MiInitializeTbFlushList((__int64)v18, 1, 20);
  v13 = *(_QWORD *)(v12 + 1032);
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v13 + 16, 0LL);
  v14 = MI_READ_PTE_LOCK_FREE((__int64 *)PteAddress);
  if ( (v14 & 1) != 0 && (v14 & 4) != 0 )
    v4 = (v14 & 0x800) != 0LL ? 4 : 2;
  while ( PteAddress <= v9 )
  {
    v17 = MI_READ_PTE_LOCK_FREE((__int64 *)PteAddress);
    if ( (v17 & 1) != 0 )
    {
      v11 ^= (v11 ^ MI_READ_PTE_LOCK_FREE(&v17)) & 0xFFFFFFFFF000LL;
      MiInsertTbFlushEntry((__int64)v18, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
      *(_QWORD *)PteAddress = v11;
      if ( MiPteInShadowRange(PteAddress) )
        MiWritePteShadow(PteAddress, v11);
    }
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v13 + 16), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v18, v15);
  return v4;
}
