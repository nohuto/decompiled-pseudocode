/*
 * XREFs of PopEsUpdateState @ 0x14050B97C
 * Callers:
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 * Callees:
 *     PopDiagTraceEsState @ 0x1401EF790 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x140454230 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x1404F738C (PopEsSnapTelemetry.c)
 *     PopEsPublishState @ 0x14054ACE4 (PopEsPublishState.c)
 */

char __fastcall PopEsUpdateState(char a1)
{
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // edi
  bool v6[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]

  PopCurrentPowerState(v6);
  LOBYTE(v2) = PopEsMode;
  v3 = 0;
  v4 = 0;
  if ( PopEsMode == 1 )
  {
    v4 = 1;
LABEL_13:
    v3 = 1;
    goto LABEL_4;
  }
  if ( PopEsMode == 2 )
  {
    if ( dword_1402DE2D0 )
    {
      if ( v6[1] )
      {
        if ( v7 )
        {
          v2 = 100 * v8 / v7;
          if ( v2 <= dword_1402DE2D0 )
          {
            v4 = 2;
            goto LABEL_13;
          }
        }
      }
    }
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
