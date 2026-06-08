/*
 * XREFs of AcpiParseULong64 @ 0x1C0011420
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0006800 (memmove.c)
 */

__int64 __fastcall AcpiParseULong64(__int64 a1, _QWORD *a2, unsigned int a3)
{
  if ( a3 < 8 )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) > 8u )
    return 3222536200LL;
  *a2 = 0LL;
  memmove(a2, (const void *)(a1 + 4), *(unsigned __int16 *)(a1 + 2));
  return 0LL;
}
