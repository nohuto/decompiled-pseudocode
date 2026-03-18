/*
 * XREFs of __report_rangecheckfailure @ 0x1401B1250
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009FBFC (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x14014AFC0 (LdrpGetResourceFileName.c)
 *     strspn @ 0x14014EC44 (strspn.c)
 *     strtok_s @ 0x140152E90 (strtok_s.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     SepParseElamCertResources @ 0x14054F6C8 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x1405617C8 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140564B18 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140565368 (WdipSemLoadNextScenario.c)
 *     RtlUnicodeStringToInt64 @ 0x14068847C (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x1406892F4 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x14068960C (RtlpNameprepAsciiWorker.c)
 *     WheapApplyPolicyChanges @ 0x1406BAB20 (WheapApplyPolicyChanges.c)
 *     LocalGetStringForControl @ 0x1406CB6F8 (LocalGetStringForControl.c)
 *     _CmGetDeviceChildren @ 0x1406DCF24 (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140702EC0 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140723DEC (HdlspPutWideString.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
