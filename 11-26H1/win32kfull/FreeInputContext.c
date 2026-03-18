/*
 * XREFs of FreeInputContext @ 0x1401ED240
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall FreeInputContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v3 = 0LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19820) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 824LL);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 56);
        v7 = v5;
        v5 = v6;
        if ( v6 == a1 )
          break;
        if ( !v6 )
          return HMFreeObject(a1);
      }
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
        v3 = *(_QWORD *)(v8 + 48);
      *(_QWORD *)(*(_QWORD *)(v7 + 40) + 16LL) = v3;
      *(_QWORD *)(v7 + 56) = v8;
    }
    return HMFreeObject(a1);
  }
  return result;
}
