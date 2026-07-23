/*
 * XREFs of __report_rangecheckfailure @ 0x180096DD0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlCanonicalizeDomainName @ 0x180055600 (RtlCanonicalizeDomainName.c)
 *     RtlpNameprepAsciiWorker @ 0x180055E74 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x180056680 (RtlIdnToUnicode.c)
 *     _ResGetSystemWindowsDirectory @ 0x18005A6AC (_ResGetSystemWindowsDirectory.c)
 *     strcspn @ 0x18009B460 (strcspn.c)
 *     strpbrk @ 0x18009B9E0 (strpbrk.c)
 *     strspn @ 0x18009BAC0 (strspn.c)
 *     strtok_s @ 0x1800A2220 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800EF4B4 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x180096DEC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
