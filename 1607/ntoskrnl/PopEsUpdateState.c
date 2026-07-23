/*
 * XREFs of PopEsUpdateState @ 0x140545F60
 * Callers:
 *     PopEsWorker @ 0x140545E34 (PopEsWorker.c)
 * Callees:
 *     PopDiagTraceEsState @ 0x1402083D8 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x140502CF0 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140534534 (PopEsSnapTelemetry.c)
 *     PopEsPublishState @ 0x140580D4C (PopEsPublishState.c)
 */

char __fastcall PopEsUpdateState(char a1)
{
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // edi
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v6);
  LOBYTE(v2) = PopEsMode;
  v3 = 0;
  v4 = 0;
  if ( PopEsMode == 1 )
  {
    v3 = 1;
    v4 = 1;
    goto LABEL_4;
  }
  if ( PopEsMode == 2 )
  {
    if ( !dword_140303D90 )
      goto LABEL_4;
    if ( BYTE1(v6[0]) )
    {
      if ( DWORD2(v6[0]) )
      {
        v2 = (unsigned int)(100 * HIDWORD(v6[0])) / DWORD2(v6[0]);
        if ( v2 <= dword_140303D90 )
        {
          v4 = 2;
LABEL_17:
          v3 = 1;
          goto LABEL_4;
        }
      }
    }
  }
  if ( dword_140303D90 && byte_140303D94 && PopEsBgActivityLimited )
  {
    v4 = 8;
    goto LABEL_17;
  }
LABEL_4:
  if ( a1 || v3 != PopEsState || v4 != PopEsReason )
  {
    PopDiagTraceEsState();
    LOBYTE(v2) = PopEsSnapTelemetry((__int64)v6);
    if ( v3 != PopEsState )
    {
      PopEsState = v3;
      LOBYTE(v2) = PopEsPublishState();
    }
    PopEsReason = v4;
  }
  return v2;
}
