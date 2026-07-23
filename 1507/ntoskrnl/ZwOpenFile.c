/*
 * XREFs of ZwOpenFile @ 0x14017F650
 * Callers:
 *     KsepShimDbChanged @ 0x1401537EC (KsepShimDbChanged.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 *     NtGetNlsSectionPtr @ 0x14040FF20 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140464DB4 (ExpGetGlobalLocaleSection.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14054AE9C (EtwpUpdateFileInfoDriverRegistration.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14055B714 (CmpOpenFileWithExtremePrejudice.c)
 *     PopValidateHiberFileSize @ 0x1405650A0 (PopValidateHiberFileSize.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140570F6C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140571158 (BiIsVolumePartitionInformationRetained.c)
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x140575F0C (MiCreateSectionForDriver.c)
 *     SiGetDiskPartitionInformation @ 0x14057FD78 (SiGetDiskPartitionInformation.c)
 *     RtlLockBootStatusData @ 0x140583F50 (RtlLockBootStatusData.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140669708 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140671E78 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140673B70 (IoAttachDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14067DC88 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x140696088 (IopFileUtilClearAttributes.c)
 *     ExpGetDriveGeometry @ 0x1406F18F8 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406F1BB4 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1406F3C98 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     BiGetPhysicalDriveName @ 0x14070E32C (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1407112D8 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140711660 (SiIssueSynchronousIoctl.c)
 *     VfZwOpenFile @ 0x1407565F0 (VfZwOpenFile.c)
 *     IopMarkBootPartition @ 0x1407B65F4 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x1407E4464 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 *     VhdiGetVolumeNumber @ 0x1407FC9D8 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
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
