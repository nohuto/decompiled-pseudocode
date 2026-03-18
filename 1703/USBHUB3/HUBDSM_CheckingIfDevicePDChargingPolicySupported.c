/*
 * XREFs of HUBDSM_CheckingIfDevicePDChargingPolicySupported @ 0x1C0019C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDevicePDChargingPolicySupported(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1616LL) & 0x10000) != 0 ? 4089 : 4061;
}
