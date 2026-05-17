/*
 * XREFs of _wcsicmp @ 0x180096F90
 * Callers:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18001CEF4 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003C2DC (LdrpVerifyAlternateResourceModule.c)
 *     LdrRscIsTypeExist @ 0x18003C590 (LdrRscIsTypeExist.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E20C (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003E6C8 (RtlpAddNeutralsToMergedList.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 *     RtlpHashStringToAtom @ 0x180043E60 (RtlpHashStringToAtom.c)
 *     RtlpLangNameInMultiSzString @ 0x180068F90 (RtlpLangNameInMultiSzString.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180070F64 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 *     PsspWalkHandleTable @ 0x18008A7C0 (PsspWalkHandleTable.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800931CC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800934CC (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800CE874 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800CE950 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800CEBFC (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800CF0B4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800CF614 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800EB1AC (RtlpMuiRegAddAlternateCodePage.c)
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
