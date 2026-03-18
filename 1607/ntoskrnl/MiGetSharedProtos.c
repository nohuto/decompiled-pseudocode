/*
 * XREFs of MiGetSharedProtos @ 0x1401F5088
 * Callers:
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     MiComputeImagePteIndex @ 0x140026C20 (MiComputeImagePteIndex.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiStartingOffset @ 0x140031D40 (MiStartingOffset.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiGetProtoPteAddress @ 0x140042460 (MiGetProtoPteAddress.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiGetImageProtoProtection @ 0x1400BDB54 (MiGetImageProtoProtection.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140499560 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140526020 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F50B0 (MiGetSharedProtosAtDpcLevel.c)
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
