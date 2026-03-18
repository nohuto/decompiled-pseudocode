/*
 * XREFs of NtUserEnableWindowShellWindowManagementBehavior @ 0x1402B1AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14025F34C (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserEnableWindowShellWindowManagementBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  const struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rax
  ShellWindowManagement *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v7 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v7;
  if ( v7 )
  {
    if ( ShellWindowManagement::GetThread(v8) == v6 || (LOBYTE(v12) = IAMThreadAccessGranted(v6), v12) )
    {
      v9 = 1LL;
      *(_DWORD *)(v10 + 388) = a3 & a2 & 7 | *(_DWORD *)(v10 + 388) & ~(a2 & 7);
      goto LABEL_8;
    }
    v11 = 5;
  }
  else
  {
    v11 = 1400;
  }
  UserSetLastError(v11);
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}
