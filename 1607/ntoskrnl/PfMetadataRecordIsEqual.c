/*
 * XREFs of PfMetadataRecordIsEqual @ 0x1404D8684
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x1403EC7A0 (PfVerifyScenarioBuffer.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
