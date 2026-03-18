/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1402B64A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rsi
  struct tagWND *v8; // rdi
  struct tagTHREADINFO *v9; // rax
  struct tagTHREADINFO *v10; // rdx
  struct tagDDECONV *DdeConv; // rax
  __int64 v12; // rcx
  int v13; // eax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v8 = (struct tagWND *)ValidateHwnd(a2);
    if ( v8 )
    {
      v9 = PtiCurrent(v5);
      v10 = (struct tagTHREADINFO *)*((_QWORD *)v8 + 2);
      if ( v10 == v9 )
      {
        v5 = *((_QWORD *)v7 + 2);
        if ( *(_QWORD *)(v5 + 456) == *((_QWORD *)v10 + 57) )
        {
          v6 = 1LL;
        }
        else
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
          DdeConv = FindDdeConv(v7, v8);
          if ( DdeConv )
          {
            v12 = *((_QWORD *)DdeConv + 11);
            if ( v12 )
            {
              v13 = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(v12 + 16), KeGetCurrentThread());
              if ( v13 >= 0 )
                v6 = 1LL;
              else
                SetLastNtError(v13);
            }
          }
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
        }
      }
      else
      {
        UserSetLastError(87);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
