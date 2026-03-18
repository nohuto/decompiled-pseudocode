/*
 * XREFs of NtUserRegisterCloakedNotification @ 0x1402B9E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserRegisterCloakedNotification(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // ax
  __int64 v12; // r8
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
    if ( *(struct tagTHREADINFO **)(v7 + 16) != PtiCurrent(v8) || !IsTopLevelWindow(v7) )
    {
      v9 = 5023;
LABEL_4:
      UserSetLastError(v9);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
      goto LABEL_14;
    }
    v10 = *(_WORD *)(v7 + 376);
    if ( a2 )
    {
      if ( v10 == -1 )
      {
        v9 = 170;
        goto LABEL_4;
      }
      v11 = v10 + 1;
    }
    else
    {
      if ( !v10 )
      {
LABEL_13:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
        v6 = v12;
        goto LABEL_14;
      }
      v11 = v10 - 1;
    }
    *(_WORD *)(v7 + 376) = v11;
    goto LABEL_13;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
