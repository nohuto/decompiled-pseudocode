/*
 * XREFs of NtUserDestroyInputContext @ 0x140224FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x140225050 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  struct tagIMC *v6; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  if ( (**(_DWORD **)(W32GetUserSessionState(v3, v2) + 19904) & 4) == 0 )
  {
    UserSetLastError(120);
LABEL_3:
    v5 = 0;
    goto LABEL_6;
  }
  v6 = (struct tagIMC *)HMValidateHandleWithDescriptor(a1, 0x11u);
  if ( !v6 )
    goto LABEL_3;
  v5 = DestroyInputContext(v6);
LABEL_6:
  if ( v8[0] )
  {
    v4 = v9;
    --*(_DWORD *)(v9 + 28);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
