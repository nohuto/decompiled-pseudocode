/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x1400D5F78
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1400D5EB0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  unsigned int v0; // ecx
  char v1; // r8
  __int64 v2; // rcx
  _DWORD v4[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v5[21]; // [rsp+28h] [rbp-C0h] BYREF

  v4[1] = 0;
  v4[0] = 1310721;
  memset(v5, 0, 0xA0uLL);
  v0 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
  v1 = v0 & 0x3F;
  v2 = v0 >> 6;
  if ( (_DWORD)v2 )
    LOWORD(v4[0]) = v2 + 1;
  v5[(unsigned int)v2] = v5[v2] | (1LL << v1);
  return HalRequestClockInterrupt(0LL, v4);
}
