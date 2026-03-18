/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14009DE7C
 * Callers:
 *     KiTimer2Expiration @ 0x14005A0A0 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14009DDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DCA70 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14012A824 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D3F88 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, (unsigned int)KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
