/*
 * XREFs of RtlCompareUnicodeString @ 0x18002EFD0
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  return RtlCompareUnicodeStrings(
           *((_QWORD *)a1 + 1),
           (unsigned __int64)*a1 >> 1,
           *((_QWORD *)a2 + 1),
           (unsigned __int64)*a2 >> 1,
           a3);
}
