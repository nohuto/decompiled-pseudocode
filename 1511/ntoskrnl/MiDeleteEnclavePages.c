/*
 * XREFs of MiDeleteEnclavePages @ 0x140629B8C
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiDeleteEnclavePage @ 0x1401DFA64 (MiDeleteEnclavePage.c)
 *     MiReturnReservedEnclavePages @ 0x14062A128 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1)
{
  unsigned __int64 v2; // r15
  unsigned __int64 PteAddress; // rbp
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  ULONG_PTR v9; // rbx
  _KPROCESS *v10; // rdx
  __int64 *v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  _KPROCESS *v14; // rdx
  __int64 *v15; // rbx
  unsigned __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  __int64 v18; // [rsp+28h] [rbp-100h]
  _BYTE v19[192]; // [rsp+30h] [rbp-F8h] BYREF

  v2 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  PteAddress = MiGetPteAddress(v2);
  v4 = MiGetPteAddress((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  v7 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  v18 = ExAcquireAutoExpandPushLockShared(v7 + 16, 0LL, v8);
  v9 = v18;
  MiInitializeTbFlushList((__int64)v19, 1, 20);
  v11 = (__int64 *)PteAddress;
  if ( PteAddress <= v6 )
  {
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE(v11);
      if ( v17 )
      {
        v12 = MI_READ_PTE_LOCK_FREE((__int64 *)&v17);
        MiInsertTbFlushEntry((__int64)v19, v2, 1LL, 0);
        v13 = qword_140381320 & 0xFFFFFFFFFFFFFF7BuLL | v12 & 0xFFFFFFFFF000LL | ((unsigned __int64)(HIBYTE(word_1402FE760) & 1) << 8) | 0x63;
        v17 = v13;
        *v11 = v13;
        if ( MiPteInShadowRange((__int64)v11) )
          MiWritePteShadow((__int64)v11, v13);
      }
      v2 += 4096LL;
      ++v11;
    }
    while ( (unsigned __int64)v11 <= v6 );
    v9 = v18;
  }
  MiFlushTbList((__int64)v19, v10);
  while ( PteAddress <= v6 )
  {
    MiDeleteEnclavePage(PteAddress, (__int64)v19);
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockShared(v9, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v19, v14);
  if ( (*(_DWORD *)(a1 + 88) & 2) != 0 )
    _InterlockedAdd((volatile signed __int32 *)0xFFFFF58010804264LL, 0xFFFFFFFF);
  v15 = *(__int64 **)(a1 + 64);
  if ( (MI_READ_PTE_LOCK_FREE(v15) & 1) != 0 )
    MiDeleteEnclavePage((__int64)v15, 0LL);
  MiReleasePtes((__int64)&qword_1402FF7B0, *(_QWORD **)(a1 + 64), 1u);
  return MiReturnReservedEnclavePages(a1);
}
