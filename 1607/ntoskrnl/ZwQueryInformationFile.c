/*
 * XREFs of ZwQueryInformationFile @ 0x14015A410
 * Callers:
 *     KsepShimDbChanged @ 0x140127220 (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401B7964 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     CmpGetFileSize @ 0x14047F3D4 (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     PopValidateHiberFileSize @ 0x14052F520 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x14057A9C0 (EtwpRealtimeRestoreState.c)
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1406274F0 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14064C06C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x14066E8C0 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x140698BCC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1406B92C0 (CMFGetFileSizeEx.c)
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
  return KiServiceInternal(FileHandle);
}
