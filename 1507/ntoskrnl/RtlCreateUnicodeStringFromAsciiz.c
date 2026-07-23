/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1405A5548
 * Callers:
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     CmpSetSystemValues @ 0x1407D7B24 (CmpSetSystemValues.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140165318 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING Destination, PCSZ Source)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationString, Source) >= 0
      && RtlAnsiStringToUnicodeString(Destination, &DestinationString, 1u) >= 0;
}
