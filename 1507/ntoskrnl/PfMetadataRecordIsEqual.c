/*
 * XREFs of PfMetadataRecordIsEqual @ 0x140457BB0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     PfVerifyScenarioBuffer @ 0x1404F6520 (PfVerifyScenarioBuffer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
