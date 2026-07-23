/*
 * XREFs of RtlImageNtHeader @ 0x180016830
 * Callers:
 *     RtlCreateUserStack @ 0x180001780 (RtlCreateUserStack.c)
 *     LdrpGetFromMUIMemCache @ 0x180017204 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetImageSize @ 0x180017484 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     SbpDetermineDllContext @ 0x180041658 (SbpDetermineDllContext.c)
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrRelocateImage @ 0x1800735D8 (LdrRelocateImage.c)
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 *     LdrpCorFixupImage @ 0x180083A50 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800C5A58 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800CA930 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800CB764 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800CB900 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800DBA48 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
