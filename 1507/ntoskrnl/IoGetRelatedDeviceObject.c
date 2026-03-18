/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140048020
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     CcSetValidData @ 0x1400CF694 (CcSetValidData.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400E3638 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 *     FsRtlMdlReadComplete @ 0x1401E1E6C (FsRtlMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x14040AA88 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x14040D278 (IopGetSetObjectId.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 *     IopGetFileInformation @ 0x140428218 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1404A7FB8 (IopGetBasicInformationFile.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 *     CcZeroData @ 0x1404B124C (CcZeroData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0 (FsRtlAcquireFileExclusiveCommon.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     IopParseFile @ 0x14052F910 (IopParseFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     CcMdlWriteComplete @ 0x14055090C (CcMdlWriteComplete.c)
 *     CcMdlReadComplete @ 0x140550FA8 (CcMdlReadComplete.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140558E04 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140558E70 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x140558EF8 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140558F64 (FsRtlMdlRead.c)
 *     IopCopyOffloadCapable @ 0x14055A658 (IopCopyOffloadCapable.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x140582DB8 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x1405C355C (PopGetPolicyDeviceObject.c)
 *     FsRtlMdlWriteComplete @ 0x14066CB68 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140671774 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140673358 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140673B70 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1406C7008 (RawSetInformation.c)
 *     SmpUtilsGetControlDevice @ 0x1406DC5F4 (SmpUtilsGetControlDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1406DCC20 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1406DD654 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1406DE390 (SmKmStoreFileOpenVolume.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  _QWORD *FileObjectExtension; // r8
  PVPB v5; // rax
  PDEVICE_OBJECT *v6; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v5 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v5->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v6 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v6 )
    {
      while ( result != *v6 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v6;
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
