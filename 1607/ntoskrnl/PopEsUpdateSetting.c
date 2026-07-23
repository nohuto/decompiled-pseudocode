/*
 * XREFs of PopEsUpdateSetting @ 0x140580B4C
 * Callers:
 *     PopEsWorker @ 0x140545E34 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x14014C620 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 */

void PopEsUpdateSetting()
{
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_140303D95;
  Buffer[1] = dword_140303D90;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  PopTraceEsSetting();
}
