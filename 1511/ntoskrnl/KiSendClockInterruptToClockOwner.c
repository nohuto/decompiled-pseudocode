/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x1400EC2C0
 * Callers:
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeResumeClockTimerFromIdle @ 0x140049500 (KeResumeClockTimerFromIdle.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1400EC220 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x140120830 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  __int64 v0; // r8
  __int64 v1; // r9
  _DWORD v3[44]; // [rsp+20h] [rbp-C8h] BYREF

  memset(&v3[1], 0, 164);
  v3[0] = 1310721;
  KeAddProcessorAffinityEx(v3, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v3, v0, v1);
}
