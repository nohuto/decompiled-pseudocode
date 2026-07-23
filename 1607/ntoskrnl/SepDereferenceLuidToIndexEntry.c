/*
 * XREFs of SepDereferenceLuidToIndexEntry @ 0x14010CA40
 * Callers:
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14046D184 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepTokenDeleteMethod @ 0x14051A9E0 (SepTokenDeleteMethod.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SepDereferenceLuidToIndexEntry(__int64 a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 result; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    *(_BYTE *)(a1 + 48) = 1;
  }
  return result;
}
