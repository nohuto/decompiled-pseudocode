/*
 * XREFs of PopEsPublishState @ 0x1405808A0
 * Callers:
 *     PopEsWorker @ 0x1405458F4 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x140545A20 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F5BE4 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  int v2; // [rsp+54h] [rbp+Ch]

  v2 = -1;
  v1 = (2 * (PopEsState == 1)) | 1;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v1, 8LL);
  return PopSetPowerSettingValueAcDc((__int64)&GUID_POWER_SAVING_STATUS, 4u, (__int64)&PopEsState);
}
