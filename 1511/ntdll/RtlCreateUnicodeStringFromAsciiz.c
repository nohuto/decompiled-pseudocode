/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1800118D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x180011890 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x180014B30 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
