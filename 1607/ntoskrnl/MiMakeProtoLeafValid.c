/*
 * XREFs of MiMakeProtoLeafValid @ 0x1400984DC
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter4, __int64 a2, KIRQL a3)
{
  ULONG_PTR v4; // rdi
  unsigned __int16 *v5; // r15
  __int64 v6; // rdx
  LONG *SharedVm; // rbx

  v4 = BugCheckParameter4;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  while ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter4) & 1) == 0 )
  {
    LOBYTE(v6) = a3;
    MiUnlockWorkingSetExclusive((__int64)v5, v6);
    SharedVm = MiGetSharedVm((__int64)v5);
    a3 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    MiMakeSystemAddressValid(v4, 0LL, 0, a3, 1);
    BugCheckParameter4 = v4;
  }
  return v4;
}
