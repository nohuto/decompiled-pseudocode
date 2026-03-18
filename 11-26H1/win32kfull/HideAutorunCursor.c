/*
 * XREFs of HideAutorunCursor @ 0x14029A510
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HideAutorunCursor(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  FindTimer(0LL, *(_QWORD *)(UserSessionState + 62704), 4u, 1, 0LL);
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 62704) = 0LL;
  v6 = PtiCurrent(v5);
  if ( v6 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v8, v7) + 18696) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 962);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  zzzUpdateCursorImage(v10, v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
}
