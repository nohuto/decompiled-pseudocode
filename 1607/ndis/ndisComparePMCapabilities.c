/*
 * XREFs of ndisComparePMCapabilities @ 0x1C00ABF34
 * Callers:
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001B2B4 (ndisUpdatePMCurrentCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisComparePMCapabilities(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && a1[2] == a2[2] && a1[7] == a2[7] && a1[10] == a2[10] && a1[11] == a2[11] && a1[12] == a2[12];
}
