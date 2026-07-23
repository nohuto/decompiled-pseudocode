/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140144F04
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
