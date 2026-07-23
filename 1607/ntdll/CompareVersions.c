/*
 * XREFs of CompareVersions @ 0x180084970
 * Callers:
 *     RtlGetProductInfo @ 0x180084830 (RtlGetProductInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVersions(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 >= *a2 )
  {
    v3 = a2[1];
    if ( a1[1] > v3 )
      return 1LL;
    if ( a1[1] >= v3 )
    {
      v4 = a2[2];
      if ( a1[2] > v4 )
        return 1LL;
      if ( a1[2] >= v4 )
      {
        v5 = a2[3];
        if ( a1[3] <= v5 )
          return (unsigned int)-(a1[3] < v5);
        return 1LL;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
