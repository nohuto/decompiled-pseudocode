/*
 * XREFs of MiMakeProtoLeafValid @ 0x140098CDC
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140015DAC (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
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
