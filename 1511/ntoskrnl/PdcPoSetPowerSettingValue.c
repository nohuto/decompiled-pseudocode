/*
 * XREFs of PdcPoSetPowerSettingValue @ 0x140637ACC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PdcPoSetPowerSettingValue(const GUID *a1, unsigned int a2, void *a3)
{
  return PopSetPowerSettingValueAcDc(a1, a2, a3);
}
