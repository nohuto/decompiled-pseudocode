/*
 * XREFs of ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1C00D33C0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C0012360 (memcmp.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int result; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v4 = *a1 & 0x80000000;
  if ( v4 != (*a2 & 0x80000000) )
    return v4 != 0 ? -1 : 1;
  v5 = a1[46];
  v6 = a2[46];
  if ( v5 > v6 )
    return 1;
  if ( v5 < v6 )
    return -1;
  v7 = a1[5];
  v8 = a2[5];
  if ( v7 > v8 )
    return 1;
  if ( v7 < v8 )
    return -1;
  result = memcmp(a1 + 2, a2 + 2, 8uLL);
  if ( !result )
  {
    v10 = a1[4];
    v11 = a2[4];
    if ( v10 <= v11 )
      return -(v10 < v11);
    return 1;
  }
  return result;
}
