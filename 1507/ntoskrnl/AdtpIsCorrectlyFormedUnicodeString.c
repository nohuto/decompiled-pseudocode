/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140164B44
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
