/*
 * XREFs of ?CompareLangIDs@@YAHPEBX0@Z @ 0x1401265FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareLangIDs(_WORD *a1, _WORD *a2)
{
  if ( *a2 == *a1 )
    return 0LL;
  else
    return *a2 < *a1 ? 1 : -1;
}
