/*
 * XREFs of NtUserUnregisterHotKey @ 0x14018D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018D468 (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 */

_BOOL8 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  struct tagWND *v4; // rax
  __int64 v5; // rcx
  _BOOL8 v6; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  if ( !a1 )
  {
    v4 = 0LL;
    goto LABEL_3;
  }
  v4 = (struct tagWND *)ValidateHwnd(a1);
  if ( v4 )
  {
LABEL_3:
    v6 = _UnregisterHotKey(v4, a2);
    goto LABEL_4;
  }
  v6 = 0LL;
LABEL_4:
  if ( v8[0] )
  {
    v5 = v9;
    --*(_DWORD *)(v9 + 28);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
