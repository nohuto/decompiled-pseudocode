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
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_14032E894;
  Buffer[1] = dword_14032E890;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  PopTraceEsSetting();
}
