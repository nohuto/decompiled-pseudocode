/*
 * XREFs of NtOpenFile @ 0x1800A6A80
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x180001718 (RtlpCheckRelativeDrive.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007832C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079458 (RtlpCreateNewDirectoryReference.c)
 *     RtlLockBootStatusData @ 0x1800895D0 (RtlLockBootStatusData.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B688 (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D1F34 (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
