/*
 * XREFs of _wcsicmp @ 0x180098360
 * Callers:
 *     PsspWalkHandleTable @ 0x180005778 (PsspWalkHandleTable.c)
 *     RtlpLangNameInMultiSzString @ 0x180011690 (RtlpLangNameInMultiSzString.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003BA94 (LdrpVerifyAlternateResourceModule.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003E2A0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrRscIsTypeExist @ 0x18003E3F0 (LdrRscIsTypeExist.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E708 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003F364 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180043E7C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlpHashStringToAtom @ 0x180068060 (RtlpHashStringToAtom.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DF4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800D67C4 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800D68A0 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800D6B48 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800D7024 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800D7560 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
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
