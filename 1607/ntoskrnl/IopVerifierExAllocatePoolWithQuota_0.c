/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334
 * Callers:
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     IopTrackLink @ 0x1404B0AB8 (IopTrackLink.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_0(POOL_TYPE a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(a1, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
