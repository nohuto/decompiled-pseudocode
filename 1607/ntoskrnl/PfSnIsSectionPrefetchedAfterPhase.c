/*
 * XREFs of PfSnIsSectionPrefetchedAfterPhase @ 0x1404EDFBC
 * Callers:
 *     PfSnGetSectionObject @ 0x1404EDC30 (PfSnGetSectionObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfSnIsSectionPrefetchedAfterPhase(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ecx

  v3 = *(_DWORD *)(a1 + 20);
  if ( a2 == 1 )
    v5 = v3 >> 8;
  else
    v5 = v3 >> 1;
  if ( !_BitScanReverse(&v7, v5 & 0x7F) )
    return 0;
  _BitScanReverse(&v8, a3);
  return v7 > v8;
}
