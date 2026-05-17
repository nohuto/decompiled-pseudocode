/*
 * XREFs of __report_rangecheckfailure @ 0x180084230
 * Callers:
 *     _ResGetSystemWindowsDirectory @ 0x18000F2A0 (_ResGetSystemWindowsDirectory.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlCanonicalizeDomainName @ 0x18005D9C0 (RtlCanonicalizeDomainName.c)
 *     RtlpNameprepAsciiWorker @ 0x18005E190 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18005E8F0 (RtlIdnToUnicode.c)
 *     strcspn @ 0x180088920 (strcspn.c)
 *     strpbrk @ 0x180088EA0 (strpbrk.c)
 *     strspn @ 0x180088F80 (strspn.c)
 *     strtok_s @ 0x18008F660 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800E0AA0 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x180084248 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(0LL);
}
