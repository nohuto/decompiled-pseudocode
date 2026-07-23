/*
 * XREFs of RtlImageNtHeader @ 0x180032600
 * Callers:
 *     TpAllocPoolInternal @ 0x1800061E0 (TpAllocPoolInternal.c)
 *     SbpDetermineDllContext @ 0x18000E3A8 (SbpDetermineDllContext.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180031654 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x18003188C (LdrpGetImageSize.c)
 *     LdrpGetFromMUIMemCache @ 0x18003195C (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrRelocateImage @ 0x1800805C0 (LdrRelocateImage.c)
 *     RtlCreateUserStack @ 0x1800832E0 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x18008DE80 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800CED88 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800D3400 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800D3FA4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800D4140 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800E20C8 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
