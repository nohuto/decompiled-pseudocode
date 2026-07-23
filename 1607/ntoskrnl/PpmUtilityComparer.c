/*
 * XREFs of PpmUtilityComparer @ 0x14020AFCC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUtilityComparer(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return *a1 < *a2;
  else
    return 0xFFFFFFFFLL;
}
