/*
 * XREFs of PspSetJobBackgroundCountCallback @ 0x1404CFC64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobBackgroundCountCallback(__int64 a1, _BYTE *a2)
{
  if ( *a2 )
    ++*(_DWORD *)(a1 + 860);
  else
    --*(_DWORD *)(a1 + 860);
  return 0LL;
}
