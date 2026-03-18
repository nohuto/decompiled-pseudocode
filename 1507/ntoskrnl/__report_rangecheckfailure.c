/*
 * XREFs of __report_rangecheckfailure @ 0x1401DC4F0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x14016FA64 (LdrpGetResourceFileName.c)
 *     strspn @ 0x140173894 (strspn.c)
 *     strtok_s @ 0x140177B80 (strtok_s.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     SepParseElamCertResources @ 0x140590958 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x14059284C (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x1405AE0B4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     RtlUnicodeStringToInt64 @ 0x1406CBF3C (RtlUnicodeStringToInt64.c)
 *     RtlIdnToUnicode @ 0x1406CCBA8 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1406CCEB4 (RtlpNameprepAsciiWorker.c)
 *     WheapApplyPolicyChanges @ 0x1406FCC04 (WheapApplyPolicyChanges.c)
 *     LocalGetStringForControl @ 0x140709FDC (LocalGetStringForControl.c)
 *     _CmGetDeviceChildren @ 0x1407179D8 (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1407379BC (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x14075AFD0 (HdlspPutWideString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407D546C (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x1407D5960 (IopInitializeResourceMap.c)
 *     CmpSetupConfigurationTree @ 0x1407D7ECC (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     KsepMatchInitBiosInfo @ 0x1407E1D2C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 0LL, _security_cookie, _security_cookie_complement, 0LL);
}
