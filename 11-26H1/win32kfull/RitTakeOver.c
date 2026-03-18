/*
 * XREFs of RitTakeOver @ 0x140257F58
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RitTakeOver(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(UserSessionState + 16832)) >= 0 )
  {
    v5 = W32GetUserSessionState(v4, v3);
    CBaseInput::Read(*(CBaseInput **)(v5 + 16832));
  }
  EtwTraceRitReEngaged();
  v8 = W32GetUserSessionState(v7, v6);
  ZwSetEvent(*(HANDLE *)(v8 + 18744), 0LL);
  return 1LL;
}
