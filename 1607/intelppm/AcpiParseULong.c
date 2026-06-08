/*
 * XREFs of AcpiParseULong @ 0x1C00165F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiParseULong(__int64 a1, _DWORD *a2, unsigned int a3)
{
  if ( a3 < 4 )
    return 3221225485LL;
  *a2 = *(_DWORD *)(a1 + 4);
  return 0LL;
}
