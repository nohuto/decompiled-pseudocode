/*
 * XREFs of RtlpMatchUILanguage @ 0x1800E61F4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800EABF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  _UNICODE_STRING v3; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceStringa[88]; // [rsp+50h] [rbp-B0h] BYREF

  *(_QWORD *)&v3.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &v3) < 0 || *(_QWORD *)&v3.Length >= 0x55uLL )
    return 0;
  if ( (unsigned __int64)(2LL * *(_QWORD *)&v3.Length) >= 0xAA )
    _report_rangecheckfailure();
  SourceStringa[*(_QWORD *)&v3.Length] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v3, SourceStringa);
  return !RtlCompareUnicodeStrings(
            DestinationString.Buffer,
            (unsigned __int64)DestinationString.Length >> 1,
            v3.Buffer,
            (unsigned __int64)v3.Length >> 1,
            1u);
}
