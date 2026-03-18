/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14002E0E0
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400081E4 (PnpGetRelatedTargetDevice.c)
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14008F1B4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009F9F8 (FsRtlAcquireFileForModWriteEx.c)
 *     CcSetValidData @ 0x1400C6024 (CcSetValidData.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     FsRtlGetFileExtents @ 0x1401B81B0 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1401B8300 (FsRtlMdlReadComplete.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042BC1C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042BEA0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlGetFileSize @ 0x14042C454 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x14042DE60 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042E010 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     CcZeroData @ 0x1404584CC (CcZeroData.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     IopParseFile @ 0x1404C2D14 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     IopGetSetObjectId @ 0x1404CB9B0 (IopGetSetObjectId.c)
 *     FsRtlQueryKernelEaFile @ 0x1404CE198 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404D9450 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1404D9694 (IopGetBasicInformationFile.c)
 *     CcMdlReadComplete @ 0x1404E15FC (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1404E2B8C (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     FsRtlSetKernelEaFile @ 0x1404E8D6C (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404ED434 (FsRtlSetFileSize.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404EE0B4 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1404EE120 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1404EE1A8 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1404EE214 (FsRtlMdlRead.c)
 *     IopCopyOffloadCapable @ 0x1404EF33C (IopCopyOffloadCapable.c)
 *     CcMdlWriteComplete @ 0x1404EFB78 (CcMdlWriteComplete.c)
 *     CmpFileFlushAndPurge @ 0x140506A2C (CmpFileFlushAndPurge.c)
 *     IoGetDeviceObjectPointer @ 0x1405083E8 (IoGetDeviceObjectPointer.c)
 *     IopGetFileInformation @ 0x140509FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x140546704 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140546D48 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x14056C374 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x14057D324 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DA90 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14061DFB4 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14061EA48 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1406216AC (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1406230A4 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140623258 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140629384 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1406833A4 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x140698A2C (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x140699764 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14069B1CC (SmpUtilsGetControlDevice.c)
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
