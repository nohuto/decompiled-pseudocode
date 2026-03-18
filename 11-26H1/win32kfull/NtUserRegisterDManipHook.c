/*
 * XREFs of NtUserRegisterDManipHook @ 0x1402572F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _RegisterDManipHook @ 0x1402935E0 (_RegisterDManipHook.c)
 */

__int64 NtUserRegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v3);
  v1 = (int)RegisterDManipHook();
  if ( v3[0] )
  {
    v0 = v4;
    --*(_DWORD *)(v4 + 28);
  }
  UserSessionSwitchLeaveCrit(v0);
  return v1;
}
