/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18007B230
 * Callers:
 *     BaseIsThisAConsoleName @ 0x1800F8798 (BaseIsThisAConsoleName.c)
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180017960 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return RtlpIsDosDeviceName_Ustr((__m128i *)&DestinationString);
}
