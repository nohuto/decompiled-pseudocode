/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C003E3A0
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C003E0AC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C003E160 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C003E258 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C004201C (ACPIWakeDisableAsync.c)
 * Callees:
 *     ACPIWakeCompleteRequestQueue @ 0x1C0041FD8 (ACPIWakeCompleteRequestQueue.c)
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
