/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14002B16C
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x1401533B4 (RtlCaptureImageExceptionValues.c)
 *     LookupEntryPoint @ 0x1401535FC (LookupEntryPoint.c)
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     MiInitializeWowPeb @ 0x140462398 (MiInitializeWowPeb.c)
 *     LdrpSearchResourceSection_U @ 0x140462A10 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140463440 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404634F0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 *     EtwpFindDebugId @ 0x1404663D8 (EtwpFindDebugId.c)
 *     RtlFindExportedRoutineByName @ 0x140541BB0 (RtlFindExportedRoutineByName.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405758EC (MiSnapThunk.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140575C84 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCacheImageSymbols @ 0x140576D68 (MiCacheImageSymbols.c)
 *     LdrRelocateImage @ 0x1405977B4 (LdrRelocateImage.c)
 *     KsepPatchDriverImportsTable @ 0x14069CC3C (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1406A1138 (MiSnapUnresolvedImport.c)
 *     LdrEnumResources @ 0x1406CB374 (LdrEnumResources.c)
 *     AslpFileQueryExportName @ 0x140707DC4 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1407323D0 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1407395BC (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140744BC8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140744F10 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140744F94 (ViThunkApplyThunksCurrentSession.c)
 *     ViThunkFindExportAddress @ 0x1407CC0D0 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1407CCE24 (MiUpdateThunks.c)
 *     MiBuildImportsForBootDrivers @ 0x1407D9908 (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14002B194 (RtlpImageDirectoryEntryToDataEx.c)
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
