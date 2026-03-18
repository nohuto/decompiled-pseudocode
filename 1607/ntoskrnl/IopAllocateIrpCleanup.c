/*
 * XREFs of IopAllocateIrpCleanup @ 0x140620DC0
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(char *Object, PVOID a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a2 )
    ObfDereferenceObject(a2);
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
    ObfDereferenceObject(Object);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return ObfDereferenceObject(Object);
}
