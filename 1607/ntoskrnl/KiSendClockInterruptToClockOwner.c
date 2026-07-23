/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14009D67C
 * Callers:
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14009D5D0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14012AD94 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, (unsigned int)KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
