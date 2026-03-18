/*
 * XREFs of NtUserRegisterUserApiHook @ 0x140237F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _RegisterUserApiHook @ 0x140237F88 (_RegisterUserApiHook.c)
 */

__int64 __fastcall NtUserRegisterUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  v9 = (int)RegisterUserApiHook(a1, a2, a3, a4);
  if ( v11[0] )
  {
    v8 = v12;
    --*(_DWORD *)(v12 + 28);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
