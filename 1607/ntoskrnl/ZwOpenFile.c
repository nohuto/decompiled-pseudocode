/*
 * XREFs of ZwOpenFile @ 0x14015A850
 * Callers:
 *     KsepShimDbChanged @ 0x140127220 (KsepShimDbChanged.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     NtGetNlsSectionPtr @ 0x14047444C (NtGetNlsSectionPtr.c)
 *     MiCreateSectionForDriver @ 0x14048338C (MiCreateSectionForDriver.c)
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140496D98 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpGetGlobalLocaleSection @ 0x1404B6830 (ExpGetGlobalLocaleSection.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1404D1584 (CmpOpenFileWithExtremePrejudice.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 *     PiLookupInDDB @ 0x1405158D4 (PiLookupInDDB.c)
 *     PopValidateHiberFileSize @ 0x14052F520 (PopValidateHiberFileSize.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053F0F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14053F210 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14053F390 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x140542728 (SiGetDiskPartitionInformation.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x140554BC0 (PspLocateSystemDll.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 *     DbgkpSectionToFileHandle @ 0x14061AD68 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140621E1C (IopIsNotNativeDriverImage.c)
 *     IoAttachDevice @ 0x14062330C (IoAttachDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14062D268 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14064C06C (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExpGetDriveGeometry @ 0x1406B0E3C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406B104C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406B2F14 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1406BC140 (ApiSetpLoadSchemaImage.c)
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1406D6198 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x1406D62C0 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1406D6420 (SiIssueSynchronousIoctl.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x1407B9164 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407BD360 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 *     VhdiGetVolumeNumber @ 0x1407D29AC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
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
