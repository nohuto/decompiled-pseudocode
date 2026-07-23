/*
 * XREFs of PopEsPublishState @ 0x140580D4C
 * Callers:
 *     PopEsWorker @ 0x140545E34 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x140545F60 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int Buffer_4; // [rsp+54h] [rbp+Ch]

  Buffer_4 = -1;
  Buffer = (2 * (PopEsState == 1)) | 1;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return PopSetPowerSettingValueAcDc((__int64)&GUID_POWER_SAVING_STATUS, 4u, (__int64)&PopEsState);
}
