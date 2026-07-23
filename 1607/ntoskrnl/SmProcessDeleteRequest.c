/*
 * XREFs of SmProcessDeleteRequest @ 0x14069691C
 * Callers:
 *     SmSetStoreInformation @ 0x1403E472C (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreDelete @ 0x1403E57A0 (SmKmStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessDeleteRequest(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 v5; // rax

  if ( a3 != 8 )
    return 3221225990LL;
  if ( a4 && ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a2;
  if ( (unsigned __int8)*a2 != 1 || (v5 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  else
    return SmKmStoreDelete(a1, HIDWORD(v5), a4);
}
