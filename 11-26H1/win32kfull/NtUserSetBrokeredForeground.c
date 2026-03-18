/*
 * XREFs of NtUserSetBrokeredForeground @ 0x14024E900
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     _SetBrokeredForeground @ 0x140265774 (_SetBrokeredForeground.c)
 */

__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  v3 = PtiCurrent(v2);
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    v5 = (_QWORD *)v4;
    if ( v4 )
    {
      if ( IsTopLevelWindow(v4)
        && !v5[15]
        && !(unsigned int)IsWindowBeingDestroyed((__int64)v5)
        && (*(_BYTE *)(v5[5] + 31LL) & 0x10) == 0
        && v5[13] != GetMessageWindow((__int64)v5) )
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        if ( !GetProp((__int64)v5, *(unsigned __int16 *)(UserSessionState + 41394), 1u) )
        {
          v9 = *(_DWORD *)(v5[5] + 236LL);
          if ( v9 == 14 || v9 == 4 )
          {
            if ( (unsigned int)IsImmersiveBroker(*((_QWORD *)v3 + 57)) && v3 == (struct tagTHREADINFO *)v5[2] )
            {
              v10 = SetBrokeredForeground(v5);
            }
            else
            {
              UserSetLastError(5);
              v10 = 0;
            }
            goto LABEL_13;
          }
          UserSetLastError(5);
        }
      }
    }
  }
  v10 = 0;
  UserSetLastError(87);
LABEL_13:
  if ( v13[0] )
    --*(_DWORD *)(v14 + 28);
  UserSessionSwitchLeaveCrit(v11);
  return v10;
}
