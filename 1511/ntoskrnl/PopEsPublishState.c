/*
 * XREFs of PopEsPublishState @ 0x14054ACE4
 * Callers:
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14050B97C (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int v2; // [rsp+54h] [rbp+Ch]

  v2 = -1;
  Buffer = Buffer & 0x800000 | 1 | (2 * (PopEsState == 1));
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
}
