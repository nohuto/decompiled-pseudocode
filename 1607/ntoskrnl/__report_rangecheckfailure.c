/*
 * XREFs of __report_rangecheckfailure @ 0x1401B1134
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x14014B530 (LdrpGetResourceFileName.c)
 *     strspn @ 0x14014F204 (strspn.c)
 *     strtok_s @ 0x140153450 (strtok_s.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     SepParseElamCertResources @ 0x14054FC08 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140561D08 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140565058 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1405658A8 (WdipSemLoadNextScenario.c)
 *     RtlUnicodeStringToInt64 @ 0x140688560 (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x1406893D8 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1406896F0 (RtlpNameprepAsciiWorker.c)
 *     WheapApplyPolicyChanges @ 0x1406BAC58 (WheapApplyPolicyChanges.c)
 *     LocalGetStringForControl @ 0x1406CB830 (LocalGetStringForControl.c)
 *     _CmGetDeviceChildren @ 0x1406DD05C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140702EF0 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140723DEC (HdlspPutWideString.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
