/*
 * XREFs of ExpCovReadFriendlyName @ 0x1406B7834
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1405474F4 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6B08 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovIsModulePresent @ 0x1406B6E80 (ExpCovIsModulePresent.c)
 *     ExpCovQueryLoadedModule @ 0x1406B76C8 (ExpCovQueryLoadedModule.c)
 * Callees:
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     RtlInitAnsiStringEx @ 0x14013E1FC (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1403F7F80 (RtlDuplicateUnicodeString.c)
 */

int __fastcall ExpCovReadFriendlyName(__int64 a1, const UNICODE_STRING *a2, UNICODE_STRING *a3)
{
  __int64 v3; // rax
  int result; // eax
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 36);
  DestinationString.Buffer = 0LL;
  if ( *(_DWORD *)(v3 + a1) == 327680 )
  {
    result = RtlInitAnsiStringEx(&DestinationString, (PCSZ)(a1 + *(unsigned int *)(v3 + a1 + 12)));
    if ( result >= 0 )
      return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
  }
  else
  {
    DbgPrintEx(
      0x7Eu,
      2u,
      "COV: Instrumentation Version %ul is not yet supported in kernel hence defaulting to binary name instead of friendl"
      "y name for %wZ\n");
    return RtlDuplicateUnicodeString(1u, a2, a3);
  }
  return result;
}
