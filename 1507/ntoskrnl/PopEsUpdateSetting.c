/*
 * XREFs of PopEsUpdateSetting @ 0x1405C1768
 * Callers:
 *     PopEsWorker @ 0x140581C48 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x14016FEA0 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 */

void PopEsUpdateSetting()
{
  _DWORD v0[4]; // [rsp+40h] [rbp-28h] BYREF

  v0[0] = PopEsMode;
  v0[2] = (unsigned __int8)byte_14032E894;
  v0[1] = dword_14032E890;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v0, 12LL);
  PopTraceEsSetting();
}
