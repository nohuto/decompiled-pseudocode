/*
 * XREFs of EditionHandleMoveSizeDataOnDestroyMonitor @ 0x1402C8250
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall EditionHandleMoveSizeDataOnDestroyMonitor(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx

  v3 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 63376);
  v4 = (_QWORD *)*v3;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968);
  v8 = *(_QWORD *)(v7 + 96);
  if ( !*(_DWORD *)(W32GetUserSessionState(v9, v7) + 36432) && !v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 155);
  if ( v8 == a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 156);
  while ( v4 != v3 )
  {
    if ( v4[27] == a1 )
      v4[27] = v8;
    if ( v4[28] == a1 )
      v4[28] = v8;
    if ( v4[30] == a1 )
      v4[30] = v8;
    v4 = (_QWORD *)*v4;
  }
}
