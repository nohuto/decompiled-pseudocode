/*
 * XREFs of PopEsStartTelemetry @ 0x140545AAC
 * Callers:
 *     PopEsExitSleep @ 0x1405318DC (PopEsExitSleep.c)
 *     PopEsWorker @ 0x1405458F4 (PopEsWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14051FC88 (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(&v3);
  v1 = 0;
  PopEsAcOnline = v3;
  if ( BYTE1(v3) )
    v1 = HIDWORD(v3);
  PopEsLastBatteryThreshold = dword_140303E50;
  result = byte_140303E55;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140303E55;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
