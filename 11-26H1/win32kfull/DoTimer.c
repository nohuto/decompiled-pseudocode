/*
 * XREFs of DoTimer @ 0x1400983E4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14009906C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x140099330 (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1401A65C8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DoTimer(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  char v4; // r15
  __int64 v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbp
  int v16; // eax
  _QWORD *v17; // rax
  bool v18; // r12
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  struct tagWND *v22; // rdx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 **v30; // rax
  __int64 v31; // rax
  __int64 **v32; // rcx
  int v34; // ecx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v4 = 0;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  for ( i = *(_QWORD **)(v5 + 1344); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(v5 + 1344) )
      return 0LL;
    v7 = i - 7;
    if ( (*(_DWORD *)(i - 1) & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1327LL);
      continue;
    }
    v8 = v7[13];
    if ( !a1 || a1 == v8 || a1 == 1 && !v8 )
      break;
    while ( v8 )
    {
      LOBYTE(v3) = *(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 0xC0;
      if ( (_BYTE)v3 != 64 )
        break;
      v8 = *(_QWORD *)(v8 + 104);
      if ( a1 == v8 )
      {
        v9 = 1;
        goto LABEL_13;
      }
    }
    v9 = 0;
LABEL_13:
    if ( v9 )
      break;
  }
  v10 = *((_DWORD *)v7 + 35);
  if ( *((_DWORD *)v7 + 34) == v10 )
    *((_DWORD *)v7 + 34) = v10;
  v12 = *(unsigned int *)(W32GetUserSessionState(v3, v8) + 69064);
  if ( *(_DWORD *)(v5 + 856) >= (unsigned int)v12 )
  {
    v34 = 1816;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    v14 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 16864));
    v15 = v14;
    if ( v14 )
    {
      memset_0(v14, 0, 0xA8uLL);
      v16 = 8;
      if ( *(_DWORD *)(v5 + 860) != 2 )
        v16 = 4;
      v15[25] |= v16;
      v17 = *(_QWORD **)(v5 + 848);
      if ( v17 )
      {
        *v17 = v15;
        *((_QWORD *)v15 + 1) = *(_QWORD *)(v5 + 848);
      }
      else
      {
        *(_QWORD *)(v5 + 840) = v15;
        *(_QWORD *)(v5 + 872) = 0LL;
      }
      *(_QWORD *)(v5 + 848) = v15;
      ++*(_DWORD *)(v5 + 856);
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      {
        v4 = 1;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control, 4LL);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v4;
        WPP_RECORDER_AND_TRACE_SF_qqdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v21, v20, *(_QWORD *)(v19 + 69152));
      }
      v22 = (struct tagWND *)v7[13];
      if ( v22 )
        v23 = *(_DWORD *)(*((_QWORD *)v22 + 5) + 288LL);
      else
        v23 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v5 + 464)) + 456) + 268LL);
      if ( (v7[6] & 2) == 0 || (v24 = 280LL, !v7[4]) )
        v24 = v7[4];
      StoreQMessage(
        (struct tagQMSG *)v15,
        v22,
        (v7[6] & 2) != 0 ? 280 : 275,
        v7[14],
        v24,
        0,
        0LL,
        0,
        0LL,
        0,
        0LL,
        v23,
        0LL,
        0LL);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v5 + 480) + 8LL), 0x108u);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v5 + 480) + 4LL), 0x108u);
        W32GetUserSessionState(v26, v25);
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 480) + 16LL) & 0x108) != 0 )
          KeSetEvent(*(PRKEVENT *)(v5 + 760), 2, 0);
      }
      goto LABEL_34;
    }
    v34 = 8;
  }
  UserSetLastError(v34);
LABEL_34:
  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    DecTimerCountAndClearReadyFlag((struct tagTIMER *)v7);
  }
  else
  {
    *((_DWORD *)v7 + 12) &= ~1u;
    DecTimerCount((struct tagTIMER *)v7);
  }
  v28 = v7 + 9;
  v29 = *v28;
  if ( *(__int64 **)(*v28 + 8) != v28
    || (v30 = (__int64 **)v28[1], *v30 != v28)
    || (*v30 = (__int64 *)v29,
        *(_QWORD *)(v29 + 8) = v30,
        v31 = W32GetUserSessionState(v29, v27) + 57536,
        v32 = *(__int64 ***)(v31 + 8),
        *v32 != (__int64 *)v31) )
  {
    __fastfail(3u);
  }
  *v28 = v31;
  v28[1] = (__int64)v32;
  *v32 = v28;
  *(_QWORD *)(v31 + 8) = v28;
  return 1LL;
}
