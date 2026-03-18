/*
 * XREFs of GreAcquireEUDCPushLockExclusive2 @ 0x1400F6B70
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6B9C (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 */

__int64 __fastcall GreAcquireEUDCPushLockExclusive2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v4; // rcx

  SessionState = W32GetSessionState(a1, a2, a3);
  return GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(
           v4,
           *(_QWORD *)(SessionState + 96) + 13488LL);
}
