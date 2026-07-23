/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14056022C
 * Callers:
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     CmpSetSystemValues @ 0x1407AE99C (CmpSetSystemValues.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x14013E76C (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING Destination, PCSZ Source)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationString, Source) >= 0
      && RtlAnsiStringToUnicodeString(Destination, &DestinationString, 1u) >= 0;
}
