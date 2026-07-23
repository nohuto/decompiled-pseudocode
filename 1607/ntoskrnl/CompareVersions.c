/*
 * XREFs of CompareVersions @ 0x140148778
 * Callers:
 *     RtlGetProductInfo @ 0x140148640 (RtlGetProductInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVersions(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // ecx

  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v2 = a1[1];
  v3 = a2[1];
  if ( v2 > v3 )
    return 1LL;
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  v4 = a1[2];
  v5 = a2[2];
  if ( v4 > v5 )
    return 1LL;
  if ( v4 >= v5 )
  {
    v6 = a1[3];
    v7 = a2[3];
    if ( v6 <= v7 )
      return (unsigned int)-(v6 < v7);
    return 1LL;
  }
  return 0xFFFFFFFFLL;
}
