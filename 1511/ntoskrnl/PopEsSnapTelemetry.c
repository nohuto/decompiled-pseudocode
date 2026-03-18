/*
 * XREFs of PopEsSnapTelemetry @ 0x1404F738C
 * Callers:
 *     PopEsEnterSleepShutdown @ 0x1404F7350 (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x14050B97C (PopEsUpdateState.c)
 * Callees:
 *     PopTraceEsState @ 0x14011A04C (PopTraceEsState.c)
 */

char __fastcall PopEsSnapTelemetry(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  char result; // al

  v1 = 0;
  v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( PopEsLastStateChangeTimeStamp )
    PopTraceEsState();
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = dword_1402DE2D0;
  result = byte_1402DE2D4;
  PopEsLastStateChangeTimeStamp = v3;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_1402DE2D4;
  return result;
}
