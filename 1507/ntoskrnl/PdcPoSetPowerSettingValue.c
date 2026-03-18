/*
 * XREFs of PdcPoSetPowerSettingValue @ 0x1406B7824
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PdcPoSetPowerSettingValue(const GUID *a1, unsigned int a2, _DWORD *a3)
{
  return PopSetPowerSettingValueAcDc(a1, a2, a3);
}
