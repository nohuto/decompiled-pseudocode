/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x140154494 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 */

struct tagWND *__fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  int v4; // r13d
  ULONG_PTR v5; // rsi
  struct tagWND *result; // rax
  tagQ **v7; // rdi
  __int64 v8; // r12
  volatile signed __int32 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // r15d
  tagQ *v13; // rax
  struct tagWND *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-60h] BYREF
  ULONG_PTR v20[2]; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  _BYTE v24[16]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+78h] [rbp-8h]
  int v26; // [rsp+C0h] [rbp+40h]

  v23 = -1LL;
  v19 = 0LL;
  v25 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v4 = a2;
  v5 = a1;
  result = PtiCurrent(a1);
  v7 = (tagQ **)(v5 + 464);
  v8 = (__int64)result;
  v26 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)(v5 + 464) + 128LL) )
    goto LABEL_30;
  if ( (struct tagWND *)v5 != result )
    Win32RawLockedW32Thread::ManualLock((ULONG_PTR)BugCheckParameter2, v5);
  v9 = (volatile signed __int32 *)(v5 + 520);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 0x200) == 0 )
  {
    _InterlockedOr(v9, 0x200u);
    v26 = 1;
  }
  v10 = *((_QWORD *)*v7 + 14);
  if ( v10 )
  {
    Win32HM_LockIntoThread<0>(v8, v10, BugCheckParameter3);
    xxxSendMessage(*((struct tagWND **)*v7 + 14), 0x1Fu);
    SetWakeBit(v5, 2LL);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  v11 = *((_QWORD *)*v7 + 16);
  if ( v11 )
  {
    v5 = *(_QWORD *)(v11 + 16);
    Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v24, (struct _W32THREAD *)v5);
    Win32HM_LockIntoThread<0>(v8, v11, BugCheckParameter3);
    v12 = a3 & 1;
    if ( !v12 && !xxxSendMessage((struct tagWND *)v11, 0x86u) )
    {
      result = (struct tagWND *)Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      if ( v25 != -1 )
        result = (struct tagWND *)PopAndFreeW32ThreadLock((__int64)v24);
      goto LABEL_28;
    }
    xxxSendMessage((struct tagWND *)v11, 6u);
    v13 = *v7;
    if ( *((_QWORD *)*v7 + 16) == v11 )
    {
      v20[1] = *((_QWORD *)*v7 + 16);
      v20[0] = (ULONG_PTR)v13 + 136;
      HMAssignmentLock(v20, 0LL);
      tagQ::SetActiveWindow(*v7, 0LL);
    }
    SetOrClrWF(0, (struct tagWND *)v11, 0x40u, 1);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 1) != 0 )
      v5 = 0LL;
    *(_QWORD *)&v19 = v5;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    if ( v25 != -1 )
    {
      PopAndFreeW32ThreadLock((__int64)v24);
      v25 = -1LL;
    }
    v4 = a2;
  }
  else
  {
    v11 = -1LL;
    *(_QWORD *)&v19 = v5;
    v12 = a3 & 1;
  }
  if ( v5 )
  {
    HIDWORD(v19) &= 0xFFFFFFFC;
    DWORD2(v19) = v4;
    xxxSendActivateAppMessage((const struct tagAAS *)&v19);
  }
  result = *v7;
  if ( *((_QWORD *)*v7 + 16) != v11 )
    goto LABEL_21;
  Win32HM_LockIntoThread<1>(v8, v11, (__int64 *)v20);
  if ( v12 || (unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11) )
  {
    xxxSendMessage((struct tagWND *)v11, 6u);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v20);
    result = *v7;
    if ( *((_QWORD *)*v7 + 16) == v11 )
    {
      BugCheckParameter3[1] = *((_QWORD *)*v7 + 16);
      BugCheckParameter3[0] = (ULONG_PTR)result + 136;
      HMAssignmentLock(BugCheckParameter3, 0LL);
      result = tagQ::SetActiveWindow(*v7, 0LL);
    }
LABEL_21:
    if ( *((_QWORD *)*v7 + 15) )
    {
      result = tagQ::UnlockFocusWnd(*v7);
      v14 = result;
      if ( result )
      {
        Win32HM_LockIntoThread<0>(v8, (__int64)result, BugCheckParameter3);
        if ( *v7 == *(tagQ **)(W32GetUserSessionState(v16, v15) + 18928) )
          zzzInputFocusLostWindowEvent(v14, 8LL);
        xxxSendMessage(v14, 8u);
        if ( (**(_DWORD **)(W32GetUserSessionState(v18, v17) + 19904) & 4) != 0 )
          xxxFocusSetInputContext(v14, 0, 0);
        result = (struct tagWND *)Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
    goto LABEL_28;
  }
  result = (struct tagWND *)Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v20);
LABEL_28:
  if ( v26 )
    _InterlockedAnd(v9, 0xFFFFFDFF);
LABEL_30:
  if ( v23 != -1 )
    return (struct tagWND *)PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return result;
}
