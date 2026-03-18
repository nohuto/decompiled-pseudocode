/*
 * XREFs of MiMakeProtoLeafValid @ 0x14001EF04
 * Callers:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter1, __int64 a2, KIRQL a3)
{
  ULONG_PTR v4; // rdi
  _KPROCESS *Process; // r14
  __int64 v6; // rdx

  v4 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  while ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter1) & 1) == 0 )
  {
    LOBYTE(v6) = a3;
    MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v6);
    a3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
    MiMakeSystemAddressValid(v4, 1);
    BugCheckParameter1 = v4;
  }
  return v4;
}
