/*
 * XREFs of RtlpStackDbStackComparitor @ 0x180102AD0
 * Callers:
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x18010216C (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}
