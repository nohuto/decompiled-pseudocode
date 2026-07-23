/*
 * XREFs of MiLockProtoPage @ 0x1400B6A2C
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeProtoAddressValid @ 0x1400B573C (MiMakeProtoAddressValid.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiLockProtoPage(unsigned __int64 a1, unsigned __int64 a2, KIRQL a3)
{
  _KPROCESS *Process; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  LONG *SharedVm; // rax
  LONG *v13; // rbx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v14) - 0x58000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6, v8, v9, v10);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    if ( !a1 )
      return 0LL;
  }
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExReleaseSpinLockShared(SharedVm, a3);
  MiMakeProtoAddressValid(a1);
  v13 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExAcquireSpinLockShared(v13);
  if ( v13[1] )
    _InterlockedExchange(v13 + 1, 0);
  return a1;
}
