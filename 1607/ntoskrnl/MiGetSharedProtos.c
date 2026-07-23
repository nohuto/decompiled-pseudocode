/*
 * XREFs of MiGetSharedProtos @ 0x1401F4EB4
 * Callers:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MiComputeImagePteIndex @ 0x1400267A0 (MiComputeImagePteIndex.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiGetImageProtoProtection @ 0x1400BB9E4 (MiGetImageProtoProtection.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F4EDC (MiGetSharedProtosAtDpcLevel.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = MiGetSharedProtosAtDpcLevel(a1, a2, a3);
  __writecr8(CurrentIrql);
  return result;
}
