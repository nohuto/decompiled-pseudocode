/*
 * XREFs of xxxDesktopThreadWaiter @ 0x14002565C
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThread @ 0x14020A3B0 (xxxDesktopThread.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x140025944 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     zzzWakeInputIdle @ 0x140025990 (zzzWakeInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 *     SleepInputIdle @ 0x140026534 (SleepInputIdle.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401F16F8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(__int64 a1, unsigned int a2)
{
  char v2; // r14
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  LegacyInputDispatcher *v13; // r13
  int v14; // r15d
  char v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  char v19; // bl
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v31; // [rsp+70h] [rbp+18h] BYREF
  int v32; // [rsp+74h] [rbp+1Ch]

  v2 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  v10 = W32GetUserSessionState(v9, v8);
  v11 = 19192LL;
  v12 = 19200LL;
  if ( v6 != *(_QWORD *)(v10 + 68472) )
    v11 = 19200LL;
  v13 = *(LegacyInputDispatcher **)(v11 + UserSessionState);
  v14 = *((_DWORD *)v13 + 15);
  v15 = 0;
  if ( v2 )
  {
    ClearQueueServerEvent(0x3CFFu);
    v17 = *(unsigned int *)(*(_QWORD *)(v6 + 480) + 4LL);
    if ( (v17 & 0x1CFF) != 0 )
      goto LABEL_7;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 0x400) == 0
      || (result = CheckProcessForeground((struct tagTHREADINFO *)v6), (int)result >= 0) )
    {
      *(_QWORD *)(*(_QWORD *)(v6 + 512) + 8LL) = 0LL;
      if ( v6 == *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944)
        && ((*(_DWORD *)(v6 + 712) | *(_DWORD *)(**(_QWORD **)(v6 + 496) + 16LL)) & 0x1000) != 0 )
      {
        xxxCallHook(0, 0LL, 0LL, 11);
      }
      xxxUpdateInputHangInfo(0LL, 0);
      zzzWakeInputIdle(v6);
      goto LABEL_14;
    }
    return result;
  }
  do
  {
    while ( 1 )
    {
LABEL_14:
      v19 = 0;
      v20 = W32GetUserSessionState(v11, v12);
      if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v20 + 16)) == 1 )
      {
        v19 = 1;
        LeaveMitRitHazardCrit();
      }
      UserSessionSwitchLeaveCrit(v21);
      if ( v2 || *(_DWORD *)(W32GetUserSessionState(v23, v22) + 19136) )
      {
        v24 = LegacyInputDispatcher::WaitAndDispatch(v13);
      }
      else
      {
        v31 = 0;
        v32 = 768;
        v28 = W32GetUserSessionState(v27, v26);
        v14 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
                *(CBaseInput **)(v28 + 3096),
                (struct CEventBitmap *)&v31,
                v13);
        if ( v14 < 0 )
          goto LABEL_19;
        v24 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v13);
      }
      v14 = v24;
LABEL_19:
      EnterCrit(1LL, 0LL);
      if ( v19 )
        EnterMitRitHazardCrit();
      if ( v14 != *((_DWORD *)v13 + 15) )
        break;
      v25 = xxxRemoveQueueCompletion();
      if ( v2 )
        goto LABEL_23;
      if ( !v25 )
        break;
      v29 = *(_QWORD *)(v6 + 480);
      v11 = a2 & *(_DWORD *)(v29 + 8);
      if ( ((unsigned __int8)a2 & *(_BYTE *)(v29 + 8) & 8) != 0 )
        break;
      v15 = 1;
    }
    v15 = 0;
LABEL_23:
    ;
  }
  while ( v15 );
  if ( v2 )
    xxxUpdateInputHangInfo(0LL, 1);
  if ( v14 == *((_DWORD *)v13 + 15) )
  {
    SleepInputIdle(v6);
    v14 = v2 != 0 ? v14 : 0;
  }
LABEL_7:
  if ( v2 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v6 + 480) + 16LL), 0);
  return (unsigned int)v14;
}
