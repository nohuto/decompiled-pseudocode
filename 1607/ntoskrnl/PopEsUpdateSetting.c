/*
 * XREFs of PopEsUpdateSetting @ 0x1405806A0
 * Callers:
 *     PopEsWorker @ 0x1405458F4 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x14014C0B0 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 */

void PopEsUpdateSetting()
{
  _DWORD v0[4]; // [rsp+40h] [rbp-28h] BYREF

  v0[0] = PopEsMode;
  v0[2] = (unsigned __int8)byte_140303E55;
  v0[1] = dword_140303E50;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v0, 12LL);
  PopTraceEsSetting();
}
