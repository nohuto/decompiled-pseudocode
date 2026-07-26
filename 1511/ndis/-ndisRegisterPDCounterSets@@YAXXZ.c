/*
 * XREFs of ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0016D4C
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 */

void ndisRegisterPDCounterSets(void)
{
  int v0; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v1; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  v0 = 4063292;
  v1 = L"PacketDirect Transmit Counters";
  memset(&Info, 0, sizeof(Info));
  Info.CounterCount = 4;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPDTxQueueCounterSet'::`2'::Descriptors;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPDPcwCallback;
  Info.Name = (const _UNICODE_STRING *)&v0;
  Info.Version = 256;
  Info.CallbackContext = (void *)2;
  PcwRegister(&ndisPDTxQueueCounterSet, &Info);
  v0 = 3932218;
  v1 = L"PacketDirect Receive Counters";
  memset(&Info, 0, sizeof(Info));
  Info.Version = 256;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPDRxQueueCounterSet'::`2'::Descriptors;
  Info.CounterCount = 6;
  Info.Name = (const _UNICODE_STRING *)&v0;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPDPcwCallback;
  Info.CallbackContext = (void *)1;
  PcwRegister(&ndisPDRxQueueCounterSet, &Info);
  v0 = 3801144;
  v1 = L"PacketDirect Receive Filters";
  memset(&Info, 0, sizeof(Info));
  Info.Version = 256;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPDTxQueueCounterSet'::`2'::Descriptors;
  Info.CounterCount = 4;
  Info.Name = (const _UNICODE_STRING *)&v0;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPDPcwCallback;
  Info.CallbackContext = (void *)3;
  PcwRegister(&ndisPDRxFilterCounterSet, &Info);
  v0 = 3670070;
  v1 = L"PacketDirect EC Utilization";
  memset(&Info, 0, sizeof(Info));
  Info.CallbackContext = 0LL;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPDECUtilizationCounterSet'::`2'::Descriptors;
  Info.Version = 256;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPDPcwUtilizationCallback;
  Info.CounterCount = 13;
  Info.Name = (const _UNICODE_STRING *)&v0;
  PcwRegister(&ndisPDECUtilizationCounterSet, &Info);
  v0 = 3276848;
  v1 = L"PacketDirect Queue Depth";
  memset(&Info, 0, sizeof(Info));
  Info.CallbackContext = 0LL;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPDQueueDepthCounterSet'::`2'::Descriptors;
  Info.Version = 256;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPDPcwQueueDepthCallback;
  Info.CounterCount = 2;
  Info.Name = (const _UNICODE_STRING *)&v0;
  PcwRegister(&ndisPDQueueDepthCounterSet, &Info);
}
