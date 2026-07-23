/*
 * XREFs of _wcsicmp @ 0x180098350
 * Callers:
 *     PsspWalkHandleTable @ 0x18000576C (PsspWalkHandleTable.c)
 *     RtlpLangNameInMultiSzString @ 0x180011680 (RtlpLangNameInMultiSzString.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CDF0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003BA84 (LdrpVerifyAlternateResourceModule.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003E290 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrRscIsTypeExist @ 0x18003E3E0 (LdrRscIsTypeExist.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E6F8 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003F354 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180043E6C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlpHashStringToAtom @ 0x180068050 (RtlpHashStringToAtom.c)
 *     RtlGetFileMUIPath @ 0x180069A90 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AA0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DE4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800D6884 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800D6960 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800D6C08 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800D70E4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800D7620 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800F3F2C (RtlpMuiRegAddAlternateCodePage.c)
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
