/*
 * XREFs of RtlpStackDbStackComparitor @ 0x180102B90
 * Callers:
 *     RtlStackDbStackAdd @ 0x1801018D4 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x18010222C (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}
