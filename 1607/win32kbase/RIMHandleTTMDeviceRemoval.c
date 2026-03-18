/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C0080598
 * Callers:
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00D8960 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1, int a2, int a3, int a4)
{
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( gbUseTTM )
  {
    v7 = a1;
    WPP_RECORDER_SF_dq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    TtmNotifyDeviceDeparture(2LL, a1);
  }
  v6 = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xFu,
    (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
    v6,
    v7);
  return 0LL;
}
