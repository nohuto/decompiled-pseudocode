/*
 * XREFs of sub_1400CC928 @ 0x1400CC928
 * Callers:
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall sub_1400CC928(POOL_TYPE a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(a1, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
