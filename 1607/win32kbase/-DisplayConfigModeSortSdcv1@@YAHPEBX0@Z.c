/*
 * XREFs of ?DisplayConfigModeSortSdcv1@@YAHPEBX0@Z @ 0x1C00C65D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayConfigModeSortSdcv1(_DWORD *a1, _DWORD *a2)
{
  int v2; // r8d
  int v4; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // r8d

  v2 = a2[3];
  v4 = a1[3];
  if ( v4 > v2 )
    return 0xFFFFFFFFLL;
  if ( v4 < v2 )
    return 1LL;
  v6 = a1[2];
  v7 = a2[2];
  if ( v6 > v7 )
    return 0xFFFFFFFFLL;
  if ( v6 < v7 )
    return 1LL;
  v8 = a1[1];
  v9 = a2[1];
  if ( v8 > v9 )
    return 0xFFFFFFFFLL;
  if ( v8 < v9 )
    return 1LL;
  return ((unsigned int)(*a2 ^ *a1) >> 18) & 1;
}
