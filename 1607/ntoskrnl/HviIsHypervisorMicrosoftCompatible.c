/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14014B4C4
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14014B434 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D96C8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140231CC8 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x140231DAC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140231DEC (HviGetImplementationLimits.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14014B500 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
