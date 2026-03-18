/*
 * XREFs of PspSetJobBackgroundCountCallback @ 0x1404C2508
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobBackgroundCountCallback(__int64 a1, _BYTE *a2)
{
  if ( *a2 )
    ++*(_DWORD *)(a1 + 868);
  else
    --*(_DWORD *)(a1 + 868);
  return 0LL;
}
