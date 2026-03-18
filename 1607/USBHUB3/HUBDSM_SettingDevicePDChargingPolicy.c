/*
 * XREFs of HUBDSM_SettingDevicePDChargingPolicy @ 0x1C0018310
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C0023040 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingDevicePDChargingPolicy(__int64 a1)
{
  HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
