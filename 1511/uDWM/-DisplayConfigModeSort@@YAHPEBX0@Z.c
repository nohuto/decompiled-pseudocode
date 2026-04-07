/*
 * XREFs of ?DisplayConfigModeSort@@YAHPEBX0@Z @ 0x1800A02E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayConfigModeSort(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  v2 = a2[1];
  if ( a1[1] > v2 )
    return 1LL;
  if ( a1[1] < v2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v4 = a2[2];
  if ( a1[2] > v4 )
    return 1LL;
  if ( a1[2] < v4 )
    return 0xFFFFFFFFLL;
  v5 = a2[7];
  if ( a1[7] > v5 )
    return 1LL;
  return (unsigned int)-(a1[7] < v5);
}
