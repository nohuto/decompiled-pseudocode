/*
 * XREFs of HUBDSM_CheckingIfDevicePDChargingPolicySupported @ 0x1C00177B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDevicePDChargingPolicySupported(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 1618LL) & 1) != 0 ? 4089 : 4061;
}
