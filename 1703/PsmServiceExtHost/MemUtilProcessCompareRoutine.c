/*
 * XREFs of MemUtilProcessCompareRoutine @ 0x1800196B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MemUtilProcessCompareRoutine(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx

  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > *a2 )
    return 1LL;
  v2 = a1[1];
  v3 = a2[1];
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  return v2 > v3;
}
