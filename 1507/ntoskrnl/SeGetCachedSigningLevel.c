/*
 * XREFs of SeGetCachedSigningLevel @ 0x14053E5C8
 * Callers:
 *     NtGetCachedSigningLevel @ 0x1406D054C (NtGetCachedSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_14032C130 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return qword_14032C130(a1, a3, a2);
  return 3221225485LL;
}
