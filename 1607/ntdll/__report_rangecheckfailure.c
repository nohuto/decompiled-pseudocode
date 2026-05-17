/*
 * XREFs of __report_rangecheckfailure @ 0x180096DE0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlCanonicalizeDomainName @ 0x180055610 (RtlCanonicalizeDomainName.c)
 *     RtlpNameprepAsciiWorker @ 0x180055E84 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x180056690 (RtlIdnToUnicode.c)
 *     _ResGetSystemWindowsDirectory @ 0x18005A6BC (_ResGetSystemWindowsDirectory.c)
 *     strcspn @ 0x18009B470 (strcspn.c)
 *     strpbrk @ 0x18009B9F0 (strpbrk.c)
 *     strspn @ 0x18009BAD0 (strspn.c)
 *     strtok_s @ 0x1800A2220 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800EF4B4 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x180096DFC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
