/*
 * XREFs of __report_rangecheckfailure @ 0x1401A8930
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140141A88 (LdrpGetResourceFileName.c)
 *     strspn @ 0x140145864 (strspn.c)
 *     strtok_s @ 0x140149B00 (strtok_s.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     _CmGetDeviceChildren @ 0x1404F9AB8 (_CmGetDeviceChildren.c)
 *     SepParseElamCertResources @ 0x140521C94 (SepParseElamCertResources.c)
 *     WdipSemLoadNextEndEvent @ 0x140532BD0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     RtlCultureNameToLCID @ 0x14053A358 (RtlCultureNameToLCID.c)
 *     RtlUnicodeStringToInt64 @ 0x140648EB8 (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x140649B24 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140649E30 (RtlpNameprepAsciiWorker.c)
 *     WheapApplyPolicyChanges @ 0x1406783E8 (WheapApplyPolicyChanges.c)
 *     LocalGetStringForControl @ 0x140686A00 (LocalGetStringForControl.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1406B76C8 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x1406D7DEC (HdlspPutWideString.c)
 *     CmpSetupConfigurationTree @ 0x140743B30 (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140760E7C (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x140761370 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     KsepMatchInitBiosInfo @ 0x14076CB4C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 0LL, _security_cookie, _security_cookie_complement, 0LL);
}
