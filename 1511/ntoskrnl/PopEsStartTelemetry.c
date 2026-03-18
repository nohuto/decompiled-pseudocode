/*
 * XREFs of PopEsStartTelemetry @ 0x14050BA04
 * Callers:
 *     PopEsExitSleep @ 0x1404F8D74 (PopEsExitSleep.c)
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x140454230 (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  bool v3[12]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+2Ch] [rbp-1Ch]

  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(v3);
  v1 = 0;
  PopEsAcOnline = v3[0];
  if ( v3[1] )
    v1 = v4;
  PopEsLastBatteryThreshold = dword_1402DE2D0;
  result = byte_1402DE2D4;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_1402DE2D4;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
