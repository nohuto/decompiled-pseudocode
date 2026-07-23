/*
 * XREFs of MiCombinePageSortByHash @ 0x140663E64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombinePageSortByHash(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
