/*
 * XREFs of ?CompareItems@Sequence@Animations@Components@@CAHPEBX0@Z @ 0x1800B2700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Sequence::CompareItems(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
