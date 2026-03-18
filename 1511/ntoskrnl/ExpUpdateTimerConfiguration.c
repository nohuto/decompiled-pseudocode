/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x1400EB410
 * Callers:
 *     ExpUpdateTimerResolution @ 0x1400EB314 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-E0h]
  _DWORD v9[44]; // [rsp+40h] [rbp-D8h] BYREF

  memset(&v9[1], 0, 164);
  v9[0] = 1310721;
  KeAddProcessorAffinityEx(v9, KiClockTimerOwner);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  KeGenericProcessorCallback(v9, ExpUpdateTimerConfigurationWorker, v7, 1LL);
  return v8;
}
