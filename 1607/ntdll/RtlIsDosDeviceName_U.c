/*
 * XREFs of RtlIsDosDeviceName_U @ 0x180010170
 * Callers:
 *     BaseIsThisAConsoleName @ 0x18010306C (BaseIsThisAConsoleName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E280 (RtlpIsDosDeviceName_Ustr.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return RtlpIsDosDeviceName_Ustr(&DestinationString);
}
