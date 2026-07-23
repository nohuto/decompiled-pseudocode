/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14007BB6C
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140082E38 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     RtlFindExportedRoutineByName @ 0x1403F4DC8 (RtlFindExportedRoutineByName.c)
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046BA04 (MiSnapThunk.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1404831CC (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCacheImageSymbols @ 0x140483508 (MiCacheImageSymbols.c)
 *     EtwpFindDebugId @ 0x1404B4B2C (EtwpFindDebugId.c)
 *     MiInitializeWowPeb @ 0x1404FF1B4 (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x1404FFA10 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404FFAE4 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x1404FFD34 (LdrpSearchResourceSection_U.c)
 *     LdrRelocateImage @ 0x1405545D4 (LdrRelocateImage.c)
 *     KsepPatchDriverImportsTable @ 0x140653388 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x140659878 (MiSnapUnresolvedImport.c)
 *     LdrEnumResources @ 0x140686058 (LdrEnumResources.c)
 *     AslpFileQueryExportName @ 0x1406C8DDC (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1406FE014 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x14070515C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x14070F3E8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x14070F730 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x14070F7B4 (ViThunkApplyThunksCurrentSession.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     ViThunkFindExportAddress @ 0x1407A5538 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1407A5F40 (MiUpdateThunks.c)
 *     MiApplyDynamicRelocations @ 0x1407AA654 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x1407B132C (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14007BB94 (RtlpImageDirectoryEntryToDataEx.c)
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
