/*
 * XREFs of MiProtectEnclavePages @ 0x14065F6F8
 * Callers:
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1400B3858 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiUpdateEnclavePfnProtection @ 0x1401F0588 (MiUpdateEnclavePfnProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  __int64 v9; // r14
  _QWORD *PteAddress; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r9
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  _DWORD *v16; // r10
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  _KPROCESS *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rbp
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v29; // [rsp+20h] [rbp-128h] BYREF
  __int64 v30; // [rsp+28h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-118h]
  _BYTE v32[192]; // [rsp+40h] [rbp-108h] BYREF

  v30 = a7;
  v9 = a3;
  if ( (a4 & 0x20000000) == 0 || (a3 & 7) == 0 || a3 > 7 || (a3 & 5) == 5 )
    return 3221225496LL;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v12 = MiGetPteAddress(v11);
  v13 = (unsigned __int64)PteAddress;
  if ( (unsigned __int64)PteAddress <= v12 )
  {
    while ( MI_READ_PTE_LOCK_FREE(v13) )
    {
      v13 = v14 + 8;
      if ( v13 > v12 )
        goto LABEL_8;
    }
    return 3221225496LL;
  }
LABEL_8:
  v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
  *v16 = MmProtectToValue[((unsigned __int64)*(unsigned int *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 5) & 0x1F];
  CurrentThread = KeGetCurrentThread();
  v18 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v18 + 16, 0LL);
  v19 = (unsigned __int64)(HIBYTE(word_140326AE8) & 1) << 8;
  v20 = v19 | MmProtectToPteMask[v9] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF025LL;
  if ( (v9 & 4) != 0 )
    v20 = v19 | MmProtectToPteMask[v9] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF067LL;
  MiInitializeTbFlushList((__int64)v32, 1, 20);
  v24 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v25 = (_QWORD *)v30;
  *a6 = v24;
  *v25 = (a2 & 0xFFFFFFFFFFFFF000uLL) - v24 + 4096;
  while ( (unsigned __int64)PteAddress <= v12 )
  {
    v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v26 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v29);
    MiUpdateEnclavePfnProtection(48 * v26 - 0x58000000000LL, v9);
    v20 ^= (v20 ^ (v26 << 12)) & 0xFFFFFFFFF000LL;
    *PteAddress = v20;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
      MiWritePteShadow(v27, v20);
    MiInsertTbFlushEntry((__int64)v32, v24, 1LL, 0);
    ++PteAddress;
    v24 += 4096LL;
  }
  MiFlushTbList((__int64)v32, v21, v22, v23);
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
