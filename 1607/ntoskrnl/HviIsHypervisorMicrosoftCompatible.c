/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14014AF54
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14014AEC4 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x14014AF24 (HviGetHypervisorFeatures.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D989C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140231E9C (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x140231F80 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140231FC0 (HviGetImplementationLimits.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14014AF90 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
