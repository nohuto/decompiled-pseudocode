/*
 * XREFs of ZwQueryInformationFile @ 0x140150840
 * Callers:
 *     KsepShimDbChanged @ 0x14011BA00 (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401ABBD4 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     CmpGetFileSize @ 0x1403D3E84 (CmpGetFileSize.c)
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     PopValidateHiberFileSize @ 0x1404F5F24 (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x1405457B0 (EtwpRealtimeRestoreState.c)
 *     PopValidateExistingHiberFile @ 0x14054B958 (PopValidateExistingHiberFile.c)
 *     HvpGetLogHeader @ 0x1405EC47C (HvpGetLogHeader.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1405FD7C8 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1406177C4 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x140636434 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140676748 (CMFGetFileSizeEx.c)
 *     AslpFileGetSizeAttribute @ 0x1406823A0 (AslpFileGetSizeAttribute.c)
 *     VfZwQueryInformationFile @ 0x1406D36C0 (VfZwQueryInformationFile.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
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
