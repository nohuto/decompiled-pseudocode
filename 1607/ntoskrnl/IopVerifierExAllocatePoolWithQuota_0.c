/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_0 @ 0x14009AB34
 * Callers:
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     IopTrackLink @ 0x1404CB08C (IopTrackLink.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
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
