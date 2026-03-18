/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14016F450
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14016F3D8 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1402683B0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x1402684B0 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1402684F0 (HviGetImplementationLimits.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14016F48C (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
