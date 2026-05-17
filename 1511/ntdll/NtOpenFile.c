/*
 * XREFs of NtOpenFile @ 0x1800A5720
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCheckRelativeDrive @ 0x18004D078 (RtlpCheckRelativeDrive.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076AA0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     RtlLockBootStatusData @ 0x180085450 (RtlLockBootStatusData.c)
 *     RtlpSysVolTakeOwnership @ 0x1800878F4 (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800CA8C4 (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800E6370 (RtlpOpenAndMapCustomCultureFile.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
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
