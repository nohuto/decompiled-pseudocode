/*
 * XREFs of AcpiParseRegister @ 0x1C0011200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiParseRegister(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 < 0xC )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) < 0xFu || *(_BYTE *)(a1 + 4) != 0x82 || *(_WORD *)(a1 + 5) < 0xCu )
    return 3222536200LL;
  *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
  *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
  *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
  return 0LL;
}
