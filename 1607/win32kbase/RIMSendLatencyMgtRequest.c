/*
 * XREFs of RIMSendLatencyMgtRequest @ 0x1C0086B00
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00B2438 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     EtwTraceLatencyModeSwitchStop @ 0x1C0086F20 (EtwTraceLatencyModeSwitchStop.c)
 *     EtwTraceLatencyModeSwitchStart @ 0x1C0086F30 (EtwTraceLatencyModeSwitchStart.c)
 */

__int64 __fastcall RIMSendLatencyMgtRequest(int a1)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *j; // rbx

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    17,
    (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids);
  EtwTraceLatencyModeSwitchStart();
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    for ( j = i[33].Blink; j; j = j[2].Blink )
    {
      if ( HIDWORD(j[19].Blink) )
        RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)j, (__int64)j[29].Flink, a1);
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  EtwTraceLatencyModeSwitchStop();
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           4,
           18,
           (__int64)&WPP_82c0ba4c5d2b364e6268f1cd35af1b74_Traceguids);
}
