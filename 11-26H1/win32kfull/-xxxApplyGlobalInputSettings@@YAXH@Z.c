/*
 * XREFs of ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140154D14
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionKeyboardInputDelegationChanged @ 0x14029DAE0 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetProcessWindowStation @ 0x1401BC230 (_GetProcessWindowStation.c)
 */

void __fastcall xxxApplyGlobalInputSettings()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  struct tagQ *KeyboardDelegationTargetQ; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 ProcessWindowStation; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (GetDelegationFlags() & 1) != 0 )
    KeyboardDelegationTargetQ = (struct tagQ *)GetKeyboardDelegationTargetQ();
  else
    KeyboardDelegationTargetQ = *(struct tagQ **)(W32GetUserSessionState(v1, v0) + 18928);
  if ( KeyboardDelegationTargetQ )
  {
    v4 = *((_QWORD *)KeyboardDelegationTargetQ + 15);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      if ( v5 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 1) == 0
          && *(_QWORD *)(v5 + 816) )
        {
          v8 = PtiCurrent(v2);
          if ( (struct tagTHREADINFO *)v5 == v8 )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14232) )
            {
              v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 14232);
              if ( v12 != *((_QWORD *)v8 + 59) )
              {
                UserSessionState = W32GetUserSessionState(v12, v11);
                Win32HM_LockIntoThread<0>((__int64)v8, *(_QWORD *)(UserSessionState + 14232), BugCheckParameter3);
                v16 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 14232);
                ProcessWindowStation = GetProcessWindowStation(0LL);
                xxxInternalActivateKeyboardLayout(ProcessWindowStation, v16, 0LL, 0LL);
                Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
              }
            }
          }
          else
          {
            PostEventMessageEx((struct tagTHREADINFO *)v5, KeyboardDelegationTargetQ, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
}
