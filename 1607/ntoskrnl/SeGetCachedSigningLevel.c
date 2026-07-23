/*
 * XREFs of SeGetCachedSigningLevel @ 0x1404B7B64
 * Callers:
 *     NtGetCachedSigningLevel @ 0x1404B7928 (NtGetCachedSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_140301130 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return qword_140301130(a1, a3, a2);
  return 3221225485LL;
}
