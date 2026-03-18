/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x140154494 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140154C9C (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140154D14 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402A667C (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x1402A66B8 (zzzDelegateInputFocusReceivedWindowEvent.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, ULONG_PTR *a2)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+50h] [rbp-38h]

  *(_DWORD *)(*(_QWORD *)(a1 + 464) + 436LL) &= ~0x800u;
  if ( !a2 )
  {
    v26 = *(_QWORD *)(a1 + 464);
    if ( *(_QWORD *)(v26 + 128) )
      *(_DWORD *)(v26 + 436) |= 0x800u;
  }
  v4 = *(struct tagWND **)(*(_QWORD *)(a1 + 464) + 120LL);
  Win32HM_LockIntoThread<1>(a1, (__int64)v4, (__int64 *)BugCheckParameter3);
  if ( a2 && *(_QWORD *)(a1 + 464) != *(_QWORD *)(a2[2] + 464) && *(char *)(a2[5] + 19) >= 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 249LL);
  tagQ::LockFocusWnd(*(_QWORD *)(a1 + 464), a2, 1LL);
  if ( a2 )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928);
    if ( *(_QWORD *)(a1 + 464) == v8 )
    {
      v30 = -1LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      v9 = PtiCurrent(v8);
      v10 = a2[2];
      if ( (struct tagTHREADINFO *)v10 != v9 )
        Win32RawLockedW32Thread::ManualLock((ULONG_PTR)BugCheckParameter2, v10);
      xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)a2[2], (struct tagWND *)a2);
      if ( v30 != -1 )
        PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    }
    v12 = *(_DWORD **)(W32GetUserSessionState(v8, v7) + 18928);
    if ( (*(_DWORD **)(a1 + 464) == v12 || (unsigned __int8)IsKeyboardDelegationTarget(a1))
      && a2 == *(ULONG_PTR **)(*(_QWORD *)(a1 + 464) + 120LL) )
    {
      v12 = (_DWORD *)*(unsigned int *)(W32GetUserSessionState(v12, v11) + 66800);
      if ( (char)v12 >= 0 )
        xxxApplyGlobalInputSettings((int)v12);
    }
    if ( v4 )
    {
      if ( *(_QWORD *)(a1 + 464) == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18928) )
      {
        zzzInputFocusLostWindowEvent(v4, 2LL);
      }
      else if ( (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)v4 + 2))
             && *(_QWORD *)(a2[2] + 464) != *(_QWORD *)(*((_QWORD *)v4 + 2) + 464LL) )
      {
        zzzDelegateInputFocusLostWindowEvent(v4, 16LL);
      }
      xxxSendMessage(v4, 8u);
      v12 = *(_DWORD **)(W32GetUserSessionState(v14, v13) + 19904);
      if ( (*v12 & 4) != 0 )
        xxxFocusSetInputContext(v4, 0, 0);
    }
    if ( a2 == *(ULONG_PTR **)(*(_QWORD *)(a1 + 464) + 120LL) )
    {
      if ( (**(_DWORD **)(W32GetUserSessionState(v12, v11) + 19904) & 4) != 0 )
        xxxFocusSetInputContext((struct tagWND *)a2, 1, 0);
      xxxWindowEvent(0x8005u, (struct tagWND *)a2, -4, 0, 0);
      v15 = *(unsigned int *)(a2[2] + 1360);
      if ( (v15 & 0x40000) != 0
        && (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v15) + 130, 0, 0) & 1) != 0 )
      {
        v27 = 0LL;
        if ( v4 )
          v27 = *(_QWORD *)v4;
        xxxSendNotifyMessage((struct tagWND *)a2, 7u, v27, 0LL, 1);
      }
      else
      {
        xxxSendMessage((struct tagWND *)a2, 7u);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928)
        && (v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18928), *(ULONG_PTR **)(v22 + 120) == a2) )
      {
        UserSessionState = W32GetUserSessionState(v22, v21);
        zzzInputFocusReceivedWindowEventImpl(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18928) + 120LL), 2LL);
      }
      else if ( (unsigned __int8)IsKeyboardDelegationTarget(a1) && a2 == *(ULONG_PTR **)(*(_QWORD *)(a1 + 464) + 120LL) )
      {
        zzzDelegateInputFocusReceivedWindowEvent(15LL);
      }
    }
  }
  else if ( v4 )
  {
    if ( *(_QWORD *)(a1 + 464) == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928) )
    {
      zzzInputFocusLostWindowEvent(v4, 3LL);
    }
    else if ( (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)v4 + 2)) )
    {
      zzzDelegateInputFocusLostWindowEvent(v4, 16LL);
    }
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendMessage(v4, 8u);
    if ( (**(_DWORD **)(W32GetUserSessionState(v25, v24) + 19904) & 4) != 0 )
      xxxFocusSetInputContext(v4, 0, 0);
  }
  return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
