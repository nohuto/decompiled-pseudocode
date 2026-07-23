/*
 * XREFs of MiLockDownWorkingSet @ 0x14010A384
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

int __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2)
{
  __int64 v3; // rbp
  __int64 *v4; // rdi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  KIRQL v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _BYTE v17[48]; // [rsp+20h] [rbp-58h] BYREF

  v3 = (__int64)&a1[1].IdealNode[12];
  v4 = *(__int64 **)(qword_140327FD0 + 276841312);
  KiStackAttachProcess(a1, 0, (__int64)v17);
  SharedVm = MiGetSharedVm(v3);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  v8 = 5LL;
  do
  {
    v9 = *v4;
    if ( (*v4 & 0x800000000000LL) != 0 )
      v10 = v9 | 0xFFFF000000000000uLL;
    else
      v10 = v9 & 0xFFFFFFFFFFFFLL;
    v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v11);
    if ( a2 == 1 )
      MiAddLockedPageCharge(v11, 1);
    else
      MiRemoveLockedPageChargeAndDecRef(v11, v12, v13, v14);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v15 = *(unsigned int *)(qword_140327FD0 + 276841264);
    v4 = (__int64 *)((char *)v4 + v15);
    --v8;
  }
  while ( v8 );
  LOBYTE(v15) = v7;
  MiUnlockWorkingSetExclusive(v3, v15);
  return KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
}
