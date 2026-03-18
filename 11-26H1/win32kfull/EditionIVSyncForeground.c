/*
 * XREFs of EditionIVSyncForeground @ 0x14029D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     WakeRIT @ 0x140133F68 (WakeRIT.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall EditionIVSyncForeground(__int64 a1)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      117,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      a1);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
  *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19528) = a1;
  WakeRIT(256LL, v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
}
