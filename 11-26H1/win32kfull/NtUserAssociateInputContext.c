/*
 * XREFs of NtUserAssociateInputContext @ 0x1402016B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x140201784 (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v8 = ValidateHwnd(a1);
  if ( !v8 )
    goto LABEL_2;
  if ( (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19904) & 4) == 0 )
  {
    UserSetLastError(120);
    goto LABEL_2;
  }
  if ( a2 )
  {
    v11 = HMValidateHandleWithDescriptor(a2, 0x11u);
    if ( v11 )
      goto LABEL_9;
LABEL_2:
    v9 = 2;
    goto LABEL_3;
  }
  v11 = 0LL;
LABEL_9:
  v9 = AssociateInputContextEx(v8, v11, a3);
LABEL_3:
  if ( v12[0] )
  {
    v7 = v13;
    --*(_DWORD *)(v13 + 28);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
