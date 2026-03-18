/*
 * XREFs of PopEsUpdateSetting @ 0x14054A80C
 * Callers:
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x140142208 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 */

void PopEsUpdateSetting()
{
  _DWORD v0[4]; // [rsp+40h] [rbp-28h] BYREF

  v0[0] = PopEsMode;
  v0[2] = (unsigned __int8)byte_1402DE2D4;
  v0[1] = dword_1402DE2D0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v0, 12LL);
  PopTraceEsSetting();
}
