/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14002DC60
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140007D58 (PnpGetRelatedTargetDevice.c)
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14008E914 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     CcSetValidData @ 0x1400C3EC4 (CcSetValidData.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     FsRtlGetFileExtents @ 0x1401B8094 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1401B81E4 (FsRtlMdlReadComplete.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     CcZeroData @ 0x14045739C (CcZeroData.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     IopParseFile @ 0x1404AEA28 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404AF9D8 (NtUnlockFile.c)
 *     IopGetSetObjectId @ 0x1404B13DC (IopGetSetObjectId.c)
 *     FsRtlQueryKernelEaFile @ 0x1404B33F8 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404BCA54 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1404BCC98 (IopGetBasicInformationFile.c)
 *     CcMdlReadComplete @ 0x1404C4C00 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1404C5AF0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     FsRtlSetKernelEaFile @ 0x1404CB0F8 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404CF4EC (FsRtlSetFileSize.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404D017C (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1404D01E8 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1404D0270 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1404D02DC (FsRtlMdlRead.c)
 *     IopCopyOffloadCapable @ 0x1404D1430 (IopCopyOffloadCapable.c)
 *     CcMdlWriteComplete @ 0x1404D1B94 (CcMdlWriteComplete.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     NtSetVolumeInformationFile @ 0x140529AB4 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x14056C8B4 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DB44 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14061E068 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14061EAFC (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140621760 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140623158 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14062330C (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x140683488 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1406981EC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x140698B10 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x140699848 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14069B2B0 (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  _QWORD *FileObjectExtension; // r8
  PVPB v6; // rax
  PDEVICE_OBJECT *v7; // rdx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v6 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v6->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v7 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v7 )
    {
      while ( result != *v7 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v7;
    }
    else
    {
      do
      {
LABEL_5:
        result = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
  }
  return result;
}
