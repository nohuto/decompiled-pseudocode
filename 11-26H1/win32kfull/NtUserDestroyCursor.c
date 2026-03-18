/*
 * XREFs of NtUserDestroyCursor @ 0x140028CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _BOOL8 v7; // rbx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  LOBYTE(v4) = 3;
  v6 = HMValidateHandleWithDescriptor(a1, v4);
  if ( !v6 )
    goto LABEL_11;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v9 = 87;
      goto LABEL_10;
    }
    goto LABEL_4;
  }
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( PsGetCurrentProcess() == v10 )
    goto LABEL_4;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_QWORD *)(v6 + 24) == CurrentProcessWin32Process )
  {
LABEL_4:
    if ( *(_QWORD *)(v6 + 48) == v6 )
    {
      v7 = _DestroyCursor((struct tagCURSOR *)v6, a2);
      goto LABEL_6;
    }
  }
  v9 = 5;
LABEL_10:
  UserSetLastError(v9);
LABEL_11:
  v7 = 0LL;
LABEL_6:
  if ( v13[0] )
  {
    v5 = v14;
    --*(_DWORD *)(v14 + 28);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
