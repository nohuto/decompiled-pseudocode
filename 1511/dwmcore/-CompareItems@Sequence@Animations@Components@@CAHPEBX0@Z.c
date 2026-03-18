/*
 * XREFs of ?CompareItems@Sequence@Animations@Components@@CAHPEBX0@Z @ 0x180164530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Sequence::CompareItems(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
