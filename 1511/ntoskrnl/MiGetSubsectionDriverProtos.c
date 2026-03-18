/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1400390D8
 * Callers:
 *     MiComputeImagePteIndex @ 0x14003906C (MiComputeImagePteIndex.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14011FFB4 (MiCountSystemImageCommitment.c)
 *     MiAddMappedPtes @ 0x1403C7E10 (MiAddMappedPtes.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 *     MiDeleteSessionDriverProtos @ 0x14050BE0C (MiDeleteSessionDriverProtos.c)
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
