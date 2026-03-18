/*
 * XREFs of MiGetSharedProtos @ 0x14021C58C
 * Callers:
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x140087F2C (MiComputeImagePteIndex.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x14051C0C0 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x14021C5B4 (MiGetSharedProtosAtDpcLevel.c)
 */

__int64 MiGetSharedProtos()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = MiGetSharedProtosAtDpcLevel();
  __writecr8(CurrentIrql);
  return result;
}
