/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x140026CD4
 * Callers:
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     MiComputeImagePteIndex @ 0x140026C20 (MiComputeImagePteIndex.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiStartingOffset @ 0x140031D40 (MiStartingOffset.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14012CA50 (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x14012D97C (MiImageProtoChargedCommit.c)
 *     MiPfAllocateMdls @ 0x140499560 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140526020 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x140546350 (MiDeleteSessionDriverProtos.c)
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
