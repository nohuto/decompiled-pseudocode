/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14007BAEC
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140084CD8 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1401E5FA8 (MmReplaceImportEntry.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     RtlFindExportedRoutineByName @ 0x1403F5F04 (RtlFindExportedRoutineByName.c)
 *     MmCreatePeb @ 0x14046C0B8 (MmCreatePeb.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046CB34 (MiSnapThunk.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140484478 (LdrpFetchAddressOfSecurityCookie.c)
 *     EtwpFindDebugId @ 0x1404D108C (EtwpFindDebugId.c)
 *     MiCacheImageSymbols @ 0x1404EF3AC (MiCacheImageSymbols.c)
 *     MiInitializeWowPeb @ 0x14051BDC4 (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x14051C620 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14051C6F4 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14051C944 (LdrpSearchResourceSection_U.c)
 *     LdrRelocateImage @ 0x140554094 (LdrRelocateImage.c)
 *     KsepPatchDriverImportsTable @ 0x1406532A4 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x140659794 (MiSnapUnresolvedImport.c)
 *     LdrEnumResources @ 0x140685F74 (LdrEnumResources.c)
 *     AslpFileQueryExportName @ 0x1406C8CA4 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1406FE014 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x14070512C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x14070F3B8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x14070F700 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x14070F784 (ViThunkApplyThunksCurrentSession.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     ViThunkFindExportAddress @ 0x1407A5538 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1407A5F40 (MiUpdateThunks.c)
 *     MiApplyDynamicRelocations @ 0x1407AA654 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x1407B132C (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14007BB14 (RtlpImageDirectoryEntryToDataEx.c)
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
