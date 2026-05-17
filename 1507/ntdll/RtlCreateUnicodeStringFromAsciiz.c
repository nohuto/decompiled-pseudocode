/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x180020EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x180020E70 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
