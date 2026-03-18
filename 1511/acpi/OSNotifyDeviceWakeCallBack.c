/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C003DF90
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C003DC9C (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C003DD50 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C003DE48 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0041A5C (ACPIWakeDisableAsync.c)
 * Callees:
 *     ACPIWakeCompleteRequestQueue @ 0x1C0041A18 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void *v5; // rcx

  v5 = a4;
  if ( (_QWORD *)*a4 != a4 )
  {
    ACPIWakeCompleteRequestQueue(a4);
    v5 = a4;
  }
  ExFreePoolWithTag(v5, 0);
}
