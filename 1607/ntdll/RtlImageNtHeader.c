/*
 * XREFs of RtlImageNtHeader @ 0x180031C20
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     SbpDetermineDllContext @ 0x18002E304 (SbpDetermineDllContext.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003122C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x180031464 (LdrpGetImageSize.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A40 (LdrpGetFromMUIMemCache.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     TpAllocPoolInternal @ 0x180072E74 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180082160 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x1800908B0 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6CF8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800DB660 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC374 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800DC4FC (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlImageNtHeader(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1LL, a1, 0LL, &v2);
  return v2;
}
