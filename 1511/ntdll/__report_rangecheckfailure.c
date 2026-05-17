/*
 * XREFs of __report_rangecheckfailure @ 0x1800959E0
 * Callers:
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     _ResGetSystemWindowsDirectory @ 0x180048DEC (_ResGetSystemWindowsDirectory.c)
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 *     RtlpNameprepAsciiWorker @ 0x180069B44 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18006A2A0 (RtlIdnToUnicode.c)
 *     strcspn @ 0x18009A0D0 (strcspn.c)
 *     strpbrk @ 0x18009A650 (strpbrk.c)
 *     strspn @ 0x18009A730 (strspn.c)
 *     strtok_s @ 0x1800A0E00 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800E61F4 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x1800959F8 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(0LL);
}
