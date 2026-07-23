/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x140026854
 * Callers:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MiComputeImagePteIndex @ 0x1400267A0 (MiComputeImagePteIndex.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14012CFC0 (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x14012DEEC (MiImageProtoChargedCommit.c)
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x140546890 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionDriverProtos(_QWORD *a1)
{
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 )
    return a1[3];
  else
    return 0LL;
}
