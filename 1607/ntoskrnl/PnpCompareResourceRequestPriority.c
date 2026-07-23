/*
 * XREFs of PnpCompareResourceRequestPriority @ 0x140578E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCompareResourceRequestPriority(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // r8d

  v2 = a1[4];
  v3 = a2[4];
  if ( v3 != v2 )
    return v3 < v2 ? 1 : -1;
  v4 = a1[5];
  v5 = a2[5];
  if ( v4 > v5 )
    return 1LL;
  if ( v4 >= v5 )
    return a1 < a2 ? -1 : 1;
  return 0xFFFFFFFFLL;
}
