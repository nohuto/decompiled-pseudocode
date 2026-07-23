/*
 * XREFs of KsepCacheHwIdEqual @ 0x140131DC4
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 */

_BOOL8 __fastcall KsepCacheHwIdEqual(__int64 a1, __int64 a2)
{
  return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 40), 1u) == 0;
}
