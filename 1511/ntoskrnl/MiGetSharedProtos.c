/*
 * XREFs of MiGetSharedProtos @ 0x1401E2F60
 * Callers:
 *     MiComputeImagePteIndex @ 0x14003906C (MiComputeImagePteIndex.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiAddMappedPtes @ 0x1403C7E10 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x1401E3148 (MiLocateSessionProtosInSubsection.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *v6; // rdi
  __int64 SessionProtosInSubsection; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v6);
  __writecr8(CurrentIrql);
  return SessionProtosInSubsection;
}
