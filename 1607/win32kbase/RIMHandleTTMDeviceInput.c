/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C001066C
 * Callers:
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  if ( gbUseTTM )
    TtmNotifyDeviceInput(2LL, a1, (*(_DWORD *)(*(_QWORD *)(a1 + 352) + 76LL) & gWakeOnDeviceTypes) != 0);
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    16,
    (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
    0);
  return 0LL;
}
