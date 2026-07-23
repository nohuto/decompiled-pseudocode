/*
 * XREFs of KeFlushQueuedDpcs @ 0x140082314
 * Callers:
 *     KeCleanupThreadState @ 0x14010D068 (KeCleanupThreadState.c)
 *     MmPageEntireDriver @ 0x14047C9C8 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x1405461D4 (IopDeleteDriver.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 * Callees:
 *     KiGetDeepIdleProcessors @ 0x1400823D8 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v1; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v2; // [rsp+30h] [rbp-D0h]
  __int16 v3; // [rsp+38h] [rbp-C8h]
  _BYTE v4[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+48h] [rbp-B8h]
  _BYTE v6[176]; // [rsp+F0h] [rbp-10h] BYREF

  KiGetDeepIdleProcessors(v4, v6);
  v2 = v5;
  v1 = v4;
  v3 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, &v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v0] + 11756) )
      KeAddProcessorAffinityEx(v6, (unsigned int)v0);
  }
  KeGenericProcessorCallback(v6, KiFlushQueuedDpcsWorker, 0LL, 2LL, v0, v1, v2);
}
