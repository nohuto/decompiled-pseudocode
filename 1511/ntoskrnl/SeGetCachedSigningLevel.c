/*
 * XREFs of SeGetCachedSigningLevel @ 0x1404AD494
 * Callers:
 *     NtGetCachedSigningLevel @ 0x1404AD250 (NtGetCachedSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_1402DBDD0 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return qword_1402DBDD0(a1, a3, a2);
  return 3221225485LL;
}
