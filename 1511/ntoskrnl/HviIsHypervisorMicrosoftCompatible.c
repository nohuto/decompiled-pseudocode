/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1401370B8
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140137040 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x140137088 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140217CA4 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x140217DA4 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140217DE4 (HviGetImplementationLimits.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1401370F4 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
