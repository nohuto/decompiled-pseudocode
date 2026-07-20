/*
 * XREFs of sub_140010000 @ 0x140010000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140010000(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return (unsigned int)-(*a1 < *a2);
  else
    return 1LL;
}
