/*
 * XREFs of KeFlushQueuedDpcs @ 0x14009C070
 * Callers:
 *     KeCleanupThreadState @ 0x14002DBCC (KeCleanupThreadState.c)
 *     MmPageEntireDriver @ 0x1403CF37C (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x1404C5944 (IopDeleteDriver.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 *     VerifierKeFlushQueuedDpcs @ 0x1406C097C (VerifierKeFlushQueuedDpcs.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KiGetDeepIdleProcessors @ 0x1400940B4 (KiGetDeepIdleProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  int v0; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v3; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v4; // [rsp+48h] [rbp-B8h]
  _WORD v5[88]; // [rsp+F0h] [rbp-10h] BYREF

  KiGetDeepIdleProcessors(&v3, (__int64)v5);
  v1[1] = v4;
  v1[0] = &v3;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 11756) )
      KeAddProcessorAffinityEx(v5, v0);
  }
  KeGenericProcessorCallback(v5, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
