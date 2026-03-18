/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400435F0
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14001AC00 (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x14001AE4C (CcSetValidData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14003079C (FsRtlReleaseFileForModWrite.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtentsFsctl @ 0x1401AC318 (FsRtlGetFileExtentsFsctl.c)
 *     FsRtlMdlReadComplete @ 0x1401AC478 (FsRtlMdlReadComplete.c)
 *     CcZeroData @ 0x1403CAF50 (CcZeroData.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1403F9340 (FsRtlAcquireFileExclusiveCommon.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x14048F78C (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 *     FsRtlSetFileSize @ 0x1404A2234 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     IopParseFile @ 0x1404A6638 (IopParseFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404B43D0 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1404B4614 (IopGetBasicInformationFile.c)
 *     CcMdlReadComplete @ 0x1404BC17C (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x1404BCDCC (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1404C34E0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404C3814 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1404C3880 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1404C3908 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1404C3974 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1404C498C (CcMdlWriteComplete.c)
 *     IopCopyOffloadCapable @ 0x1404C4ECC (IopCopyOffloadCapable.c)
 *     IoGetDeviceObjectPointer @ 0x1404D8270 (IoGetDeviceObjectPointer.c)
 *     IopGetFileInformation @ 0x1404D8FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 *     NtSetVolumeInformationFile @ 0x1404EA818 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x14050B798 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14050C180 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x1405493FC (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x14054C1F8 (PopGetPolicyDeviceObject.c)
 *     FsRtlMdlWriteComplete @ 0x1405F3C5C (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x1405F46E4 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1405F78EC (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1405F91FC (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x1405F98F4 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1405FF3C8 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x140643FE4 (RawSetInformation.c)
 *     SmpUtilsGetControlDevice @ 0x140659EB0 (SmpUtilsGetControlDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14065A4DC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14065AE00 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14065BB3C (SmKmStoreFileOpenVolume.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
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
