/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C0051B60
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C00515DC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00519CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0058538 (ACPIWakeDisableAsync.c)
 * Callees:
 *     ACPIWakeCompleteRequestQueue @ 0x1C0005994 (ACPIWakeCompleteRequestQueue.c)
 *     WPP_RECORDER_SF_q @ 0x1C0014508 (WPP_RECORDER_SF_q.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, char a2, __int64 a3, _QWORD **a4)
{
  if ( *a4 == a4 )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      21,
      29,
      (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
      (char)a4);
  else
    ACPIWakeCompleteRequestQueue(a4, a2);
  ExFreePoolWithTag(a4, 0);
}
