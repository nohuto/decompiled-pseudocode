/*
 * XREFs of PfMetadataRecordIsEqual @ 0x1404DC2F0
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x1404D2320 (PfVerifyScenarioBuffer.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
