/*
 * XREFs of IopVerifierExAllocatePoolWithQuota @ 0x140079F20
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(NonPagedPoolNx, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
