/*
 * XREFs of RtlImageNtHeader @ 0x180031C10
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     SbpDetermineDllContext @ 0x18002E2F4 (SbpDetermineDllContext.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003121C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x180031454 (LdrpGetImageSize.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A30 (LdrpGetFromMUIMemCache.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180082150 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x1800908A0 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6DB8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800DB720 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC434 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800DC5BC (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
