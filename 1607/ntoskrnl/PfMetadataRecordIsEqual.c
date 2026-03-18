/*
 * XREFs of PfMetadataRecordIsEqual @ 0x1404F56F8
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x1403EB170 (PfVerifyScenarioBuffer.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
