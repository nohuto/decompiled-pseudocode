/*
 * XREFs of ACPIWmiEnableLog @ 0x1C0059364
 * Callers:
 *     ACPIDispatchWmiLog @ 0x1C002A2F0 (ACPIDispatchWmiLog.c)
 * Callees:
 *     WPP_RECORDER_SF_IdDD @ 0x1C0059434 (WPP_RECORDER_SF_IdDD.c)
 */

__int64 __fastcall ACPIWmiEnableLog(__int64 a1, unsigned int a2, int a3, int a4)
{
  _InterlockedExchange(&ACPIWmiTraceEnable, 1);
  if ( a2 >= 0x30 )
  {
    ACPIWmiLoggerHandle = *(_QWORD *)(a1 + 8);
    if ( ACPIWmiTraceGlobalEnable )
      ACPIWmiTraceGlobalEnable = 0;
    WPP_RECORDER_SF_IdDD(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  }
  return 0LL;
}
