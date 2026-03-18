/*
 * XREFs of MiProtectEnclavePages @ 0x140629E98
 * Callers:
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiUpdateEnclavePfnProtection @ 0x1401DFECC (MiUpdateEnclavePfnProtection.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  __int64 v9; // r14
  __int64 *PteAddress; // rsi
  unsigned __int64 v11; // r15
  __int64 *v12; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  _KPROCESS *v18; // rdx
  unsigned __int64 v19; // rbp
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v23; // [rsp+20h] [rbp-128h] BYREF
  __int64 v24; // [rsp+28h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-118h]
  _BYTE v26[192]; // [rsp+40h] [rbp-108h] BYREF

  v24 = a7;
  v9 = a3;
  if ( (a4 & 0x20000000) == 0 || (a3 & 7) == 0 || a3 > 7 || (a3 & 5) == 5 )
    return 3221225496LL;
  PteAddress = (__int64 *)MiGetPteAddress(a1);
  v11 = MiGetPteAddress(a2);
  v12 = PteAddress;
  if ( (unsigned __int64)PteAddress <= v11 )
  {
    while ( MI_READ_PTE_LOCK_FREE(v12) )
    {
      if ( (unsigned __int64)++v12 > v11 )
        goto LABEL_8;
    }
    return 3221225496LL;
  }
LABEL_8:
  v23 = MI_READ_PTE_LOCK_FREE(PteAddress);
  *a5 = MmProtectToValue[((unsigned __int64)*(unsigned int *)(48
                                                            * ((((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFLL)
                                                             - 0x1D55555555LL)) >> 5) & 0x1F];
  CurrentThread = KeGetCurrentThread();
  v14 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[3];
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v14 + 16, 0LL, v15);
  v16 = (unsigned __int64)(HIBYTE(word_1402FE760) & 1) << 8;
  v17 = v16 | MmProtectToPteMask[v9] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF025LL;
  if ( (v9 & 4) != 0 )
    v17 = v16 | MmProtectToPteMask[v9] & 0xFFFFFFFFFFFFFF7FuLL | 0xFFFFFFFFF067LL;
  MiInitializeTbFlushList((__int64)v26, 1, 20);
  v19 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v20 = (_QWORD *)v24;
  *a6 = v19;
  *v20 = (a2 & 0xFFFFFFFFFFFFF000uLL) - v19 + 4096;
  while ( (unsigned __int64)PteAddress <= v11 )
  {
    v23 = MI_READ_PTE_LOCK_FREE(PteAddress);
    v21 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v23);
    MiUpdateEnclavePfnProtection(48 * v21 - 0x58000000000LL, v9);
    v17 ^= (v17 ^ (v21 << 12)) & 0xFFFFFFFFF000LL;
    *PteAddress = v17;
    if ( MiPteInShadowRange((__int64)PteAddress) )
      MiWritePteShadow((__int64)PteAddress, v17);
    MiInsertTbFlushEntry((__int64)v26, v19, 1LL, 0);
    ++PteAddress;
    v19 += 4096LL;
  }
  MiFlushTbList((__int64)v26, v18);
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
