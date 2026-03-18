/*
 * XREFs of SessionIsInteractive @ 0x1400FC060
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 *     NtSetThreadExecutionState @ 0x14052CD00 (NtSetThreadExecutionState.c)
 *     PopSetWin32kInputTimeout @ 0x140674C94 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     PsGetSiloBySessionId @ 0x1405209F0 (PsGetSiloBySessionId.c)
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
