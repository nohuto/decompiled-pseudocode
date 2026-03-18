/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14046E2B4
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14046E1C8 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x140088850 (SepDereferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}
