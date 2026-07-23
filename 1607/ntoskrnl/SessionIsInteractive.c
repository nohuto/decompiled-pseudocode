/*
 * XREFs of SessionIsInteractive @ 0x1400F9DE0
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 *     NtSetThreadExecutionState @ 0x14052D240 (NtSetThreadExecutionState.c)
 *     PopSetWin32kInputTimeout @ 0x140674D78 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsGetSiloBySessionId @ 0x140503A58 (PsGetSiloBySessionId.c)
 */

bool __fastcall SessionIsInteractive(__int64 a1)
{
  int v1; // ebx
  void *v2; // r8
  bool v3; // bl
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( (_DWORD)a1 == -1 || (int)PsGetSiloBySessionId(a1, &v5) < 0 )
    return 0;
  v3 = v1 != *((_DWORD *)PsGetServerSiloGlobals(v5) + 252)
    || v1 == *((_DWORD *)PsGetServerSiloGlobals((__int64)v2) + 253);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  return v3;
}
