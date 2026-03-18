/*
 * XREFs of MiLockProtoPage @ 0x1400E1EC0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiMakeProtoAddressValid @ 0x1400E20DC (MiMakeProtoAddressValid.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, KIRQL a3)
{
  _KPROCESS *Process; // r14
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v9) - 0x58000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12], a3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  ExAcquireSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  return BugCheckParameter1;
}
