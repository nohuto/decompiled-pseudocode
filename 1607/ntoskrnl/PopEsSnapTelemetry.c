/*
 * XREFs of PopEsSnapTelemetry @ 0x140533FF4
 * Callers:
 *     PopEsEnterSleepShutdown @ 0x140533FB8 (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x140545A20 (PopEsUpdateState.c)
 * Callees:
 *     PopTraceEsState @ 0x140126300 (PopTraceEsState.c)
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
  PopEsLastBatteryThreshold = dword_140303E50;
  result = byte_140303E55;
  PopEsLastStateChangeTimeStamp = v3;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140303E55;
  return result;
}
