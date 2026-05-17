/*
 * XREFs of _wcsicmp @ 0x1800857E0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x18001A8A0 (LdrRscIsTypeExist.c)
 *     RtlpLangNameInMultiSzString @ 0x18001D000 (RtlpLangNameInMultiSzString.c)
 *     RtlpAddNeutralsToMergedList @ 0x18001D184 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18001F2D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpHashStringToAtom @ 0x180052390 (RtlpHashStringToAtom.c)
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 *     LdrpVerifyAlternateResourceModule @ 0x180056D78 (LdrpVerifyAlternateResourceModule.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180067038 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18006A20C (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     PsspWalkHandleTable @ 0x180082740 (PsspWalkHandleTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800C5544 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800C5620 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800C58CC (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800C5D84 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800C62E4 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800E66CC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E6AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E7BB4 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  signed __int64 v2; // r9
  unsigned __int16 v3; // r8
  wchar_t v4; // cx

  v2 = (char *)String1 - (char *)String2;
  do
  {
    v3 = *(const wchar_t *)((char *)String2 + v2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    v4 = *String2;
    if ( (unsigned __int16)(*String2 - 65) <= 0x19u )
      v4 += 32;
    ++String2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
