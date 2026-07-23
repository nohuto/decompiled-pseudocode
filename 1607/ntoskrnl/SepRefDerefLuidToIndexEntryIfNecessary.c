/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14046D184
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14046D098 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x14010CA40 (SepDereferenceLuidToIndexEntry.c)
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
