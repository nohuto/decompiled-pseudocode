/*
 * XREFs of ZwQueryInformationFile @ 0x14017F210
 * Callers:
 *     KsepShimDbChanged @ 0x1401537EC (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401E16B0 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     CmpGetFileSize @ 0x1404AF9D0 (CmpGetFileSize.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     PopValidateHiberFileSize @ 0x1405650A0 (PopValidateHiberFileSize.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     EtwpRealtimeRestoreState @ 0x1405BC764 (EtwpRealtimeRestoreState.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     HvpGetLogHeader @ 0x140664AE4 (HvpGetLogHeader.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14067810C (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x140696088 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1406B5D1C (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1406FAF18 (CMFGetFileSizeEx.c)
 *     AslpFileGetSizeAttribute @ 0x1407070BC (AslpFileGetSizeAttribute.c)
 *     VfZwQueryInformationFile @ 0x140757288 (VfZwQueryInformationFile.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
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
