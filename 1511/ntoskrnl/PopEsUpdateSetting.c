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
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_1402DE2D4;
  Buffer[1] = dword_1402DE2D0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  PopTraceEsSetting();
}
