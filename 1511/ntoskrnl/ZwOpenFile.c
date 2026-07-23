/*
 * XREFs of ZwOpenFile @ 0x140150C80
 * Callers:
 *     KsepShimDbChanged @ 0x14011BA00 (KsepShimDbChanged.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1403B5538 (CmpOpenFileWithExtremePrejudice.c)
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1403B68CC (PiLookupInDDB.c)
 *     MiCreateSectionForDriver @ 0x1403CC5FC (MiCreateSectionForDriver.c)
 *     NtGetNlsSectionPtr @ 0x140461AE0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140464988 (ExpGetGlobalLocaleSection.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1404B8788 (EtwpUpdateFileInfoDriverRegistration.c)
 *     IoGetDeviceObjectPointer @ 0x1404D8270 (IoGetDeviceObjectPointer.c)
 *     PopValidateHiberFileSize @ 0x1404F5F24 (PopValidateHiberFileSize.c)
 *     BiGetNtPartitionPath @ 0x1404FC190 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1404FDDA4 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1404FE1C0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x1404FE324 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1404FE510 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x140506AA0 (SiGetDiskPartitionInformation.c)
 *     RtlLockBootStatusData @ 0x14050CBEC (RtlLockBootStatusData.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     PspLocateSystemDll @ 0x14053F9A8 (PspLocateSystemDll.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1405F0A88 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x1405F7FA8 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x1405F98F4 (IoAttachDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140602E1C (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1406177C4 (IopFileUtilClearAttributes.c)
 *     ExpGetDriveGeometry @ 0x14066DFEC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14066E1FC (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406700EC (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     BiGetPhysicalDriveName @ 0x14068E814 (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1406917C0 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140691B48 (SiIssueSynchronousIoctl.c)
 *     VfZwOpenFile @ 0x1406D2A28 (VfZwOpenFile.c)
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopFileUtilRename @ 0x14076ECBC (IopFileUtilRename.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 *     VhdiGetVolumeNumber @ 0x14078680C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
