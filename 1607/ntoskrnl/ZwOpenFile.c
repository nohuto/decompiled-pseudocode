/*
 * XREFs of ZwOpenFile @ 0x14015A2E0
 * Callers:
 *     KsepShimDbChanged @ 0x140126CB0 (KsepShimDbChanged.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     NtGetNlsSectionPtr @ 0x14047557C (NtGetNlsSectionPtr.c)
 *     MiCreateSectionForDriver @ 0x14047D2C8 (MiCreateSectionForDriver.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140496308 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     ExpGetGlobalLocaleSection @ 0x1404D2D90 (ExpGetGlobalLocaleSection.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1404EF4C0 (CmpOpenFileWithExtremePrejudice.c)
 *     IoGetDeviceObjectPointer @ 0x1405083E8 (IoGetDeviceObjectPointer.c)
 *     PopValidateHiberFileSize @ 0x14052EFE0 (PopValidateHiberFileSize.c)
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x14053E80C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053EBB4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14053ECD0 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14053EE50 (BiIsVolumePartitionInformationRetained.c)
 *     SiGetDiskPartitionInformation @ 0x1405421E8 (SiGetDiskPartitionInformation.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x140554680 (PspLocateSystemDll.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140618B20 (DbgkpPostModuleMessages.c)
 *     DbgkpSectionToFileHandle @ 0x14061ACB4 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140621D68 (IopIsNotNativeDriverImage.c)
 *     IoAttachDevice @ 0x140623258 (IoAttachDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14062D1B4 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14064BF88 (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExpGetDriveGeometry @ 0x1406B0D04 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406B0F14 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406B2DDC (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1406BC008 (ApiSetpLoadSchemaImage.c)
 *     BiGetPhysicalDriveName @ 0x1406D2FF8 (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1406D6060 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x1406D6188 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1406D62E8 (SiIssueSynchronousIoctl.c)
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

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
