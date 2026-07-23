/*
 * XREFs of PopDiagInterruptTimeToLocalTime @ 0x1403DF4CC
 * Callers:
 *     PopDiagTracePostSleepNotification @ 0x1403D09D8 (PopDiagTracePostSleepNotification.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14067295C (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x1400B3208 (ExSystemTimeToLocalTime.c)
 */

void __fastcall PopDiagInterruptTimeToLocalTime(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rcx
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 >= 0 )
    v2 = a1 - MEMORY[0xFFFFF78000000008];
  else
    v2 = -a1;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014] + v2;
  ExSystemTimeToLocalTime(&SystemTime, a2);
}
