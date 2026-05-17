/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x180073D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitAnsiStringEx @ 0x180073DC0 (RtlInitAnsiStringEx.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
