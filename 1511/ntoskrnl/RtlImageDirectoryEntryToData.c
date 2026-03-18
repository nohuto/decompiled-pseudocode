/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140035E48
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x14001A844 (RtlCaptureImageExceptionValues.c)
 *     LookupEntryPoint @ 0x140123ADC (LookupEntryPoint.c)
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 *     RtlFindExportedRoutineByName @ 0x1403B7EA0 (RtlFindExportedRoutineByName.c)
 *     MiCacheImageSymbols @ 0x1403CC35C (MiCacheImageSymbols.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1403CC9F8 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiInitializeWowPeb @ 0x140461E70 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 *     LdrpAccessResourceData @ 0x1404A1380 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404A1430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 *     EtwpFindDebugId @ 0x1404CF2A8 (EtwpFindDebugId.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     LdrRelocateImage @ 0x14052097C (LdrRelocateImage.c)
 *     KsepPatchDriverImportsTable @ 0x14061E02C (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x140621AA8 (MiSnapUnresolvedImport.c)
 *     LdrEnumResources @ 0x140648290 (LdrEnumResources.c)
 *     AslpFileQueryExportName @ 0x140683120 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1406B2388 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1406B90A0 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1406C3328 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1406C3670 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1406C36F4 (ViThunkApplyThunksCurrentSession.c)
 *     ViThunkFindExportAddress @ 0x14074AC34 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x14074B648 (MiUpdateThunks.c)
 *     MiBuildImportsForBootDrivers @ 0x14074BBEC (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140035E70 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __stdcall RtlImageDirectoryEntryToData(PVOID BaseAddress, BOOLEAN MappedAsImage, USHORT Directory, PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(BaseAddress, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
