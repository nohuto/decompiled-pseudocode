/*
 * XREFs of NtUserUpdateInputContext @ 0x140201930
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1402019E0 (-UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int updated; // ebx
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  if ( (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19904) & 4) == 0 )
  {
    UserSetLastError(120);
    goto LABEL_3;
  }
  v8 = HMValidateHandleWithDescriptor(a1, 0x11u);
  if ( !v8 )
  {
LABEL_3:
    updated = 0;
    goto LABEL_4;
  }
  updated = UpdateInputContext(v8, a2, a3);
LABEL_4:
  if ( v12[0] )
  {
    v9 = v13;
    --*(_DWORD *)(v13 + 28);
  }
  UserSessionSwitchLeaveCrit(v9);
  return updated;
}
