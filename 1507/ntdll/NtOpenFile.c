/*
 * XREFs of NtOpenFile @ 0x180093C30
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     RtlpCheckRelativeDrive @ 0x180045FCC (RtlpCheckRelativeDrive.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18006BFC4 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x18006FDF8 (RtlpCreateNewDirectoryReference.c)
 *     RtlLockBootStatusData @ 0x180079110 (RtlLockBootStatusData.c)
 *     RtlpSysVolTakeOwnership @ 0x18007FC70 (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800BDC24 (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800E0C1C (RtlpOpenAndMapCustomCultureFile.c)
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
