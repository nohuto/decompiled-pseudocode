/*
 * XREFs of ZwQueryInformationFile @ 0x140159EA0
 * Callers:
 *     KsepShimDbChanged @ 0x140126CB0 (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401B7A80 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F9AEC (CmpInitHiveFromFile.c)
 *     CmpGetFileSize @ 0x140480680 (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     CmpCmdHiveClose @ 0x14049FCA0 (CmpCmdHiveClose.c)
 *     PopValidateHiberFileSize @ 0x14052EFE0 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x14057A480 (EtwpRealtimeRestoreState.c)
 *     HvpGetLogHeader @ 0x140610A74 (HvpGetLogHeader.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14062743C (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14064BF88 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x14066E7DC (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1406B9188 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, FileInformation);
}
