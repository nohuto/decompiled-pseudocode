/*
 * XREFs of RtlpGetMultiStringLength @ 0x1800E72A0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetMultiStringLength(_WORD *a1, _WORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  *a2 = 0;
  if ( a3 )
    *a3 = 0;
  for ( ; *a1; a1 += v4 + 1 )
  {
    if ( a3 )
      ++*a3;
    v3 = -1LL;
    do
      ++v3;
    while ( a1[v3] );
    *a2 += v3 + 1;
    v4 = -1LL;
    do
      ++v4;
    while ( a1[v4] );
  }
  return 0LL;
}
