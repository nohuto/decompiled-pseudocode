/*
 * XREFs of xxxGetInputEvent @ 0x140022BD0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetInputEvent @ 0x1402B3A40 (NtUserGetInputEvent.c)
 * Callees:
 *     GetInputBits @ 0x140022F60 (GetInputBits.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401F16F8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall xxxGetInputEvent(__int64 a1)
{
  unsigned __int16 v1; // si
  unsigned int v2; // edi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // r15
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  struct _KEVENT *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rax

  v1 = a1;
  v2 = WORD1(a1);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v4 = 0LL;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = v2 & 4;
  if ( (unsigned __int16)GetInputBits(*(_QWORD *)(v5 + 480), v1, v2 & 4)
    || (v7 = *(_QWORD *)(v5 + 1360), (v7 & 0x400) != 0 || (v2 & 8) != 0) && (v7 & 0x200) != 0
    || (v8 = *(_QWORD *)(v5 + 464), *(_QWORD *)(v8 + 72) == v5)
    && (*(_DWORD *)(v8 + 436) & 0x400) == 0
    && *(_QWORD *)(v8 + 80) == 1LL
    && *(_QWORD *)(v5 + 608) == 1LL
    && (v1 & 0x1C07) != 0 )
  {
LABEL_41:
    KeSetEvent(*(PRKEVENT *)(v5 + 760), 2, 0);
    goto LABEL_24;
  }
  if ( v5 == *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944) )
  {
    v21 = *(__int64 **)(v5 + 496);
    v9 = *v21;
    if ( ((*(_DWORD *)(v5 + 712) | *(_DWORD *)(*v21 + 16)) & 0x1000) != 0 )
      xxxCallHook(0, 0LL, 0LL, 11);
  }
  if ( (v1 & 0x1C0F) != 0 )
    *(_QWORD *)(*(_QWORD *)(v5 + 456) + 336LL) = v5;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v9);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v11 = 0LL;
  v12 = *(_QWORD *)(v5 + 456);
  if ( !*(_QWORD *)(v12 + 336) )
    *(_QWORD *)(v12 + 336) = v5;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 456) + 336LL) == v5 )
  {
    EtwTraceWakeInputIdle(0LL, v5);
    v13 = (struct _KEVENT *)v11[2];
    if ( !v13 )
    {
LABEL_17:
      v11[2] = -1LL;
      goto LABEL_18;
    }
    if ( v13 != (struct _KEVENT *)-1LL )
    {
      KeSetEvent(v13, 1, 0);
      ObfDereferenceObject((PVOID)v11[2]);
      goto LABEL_17;
    }
  }
LABEL_18:
  v14 = *((_DWORD *)v11 + 3);
  if ( (v14 & 4) != 0 )
  {
    *((_DWORD *)v11 + 3) = v14 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  if ( (unsigned __int16)GetInputBits(*(_QWORD *)(v5 + 480), v1, v6) )
    goto LABEL_41;
  v16 = (__int64 *)PsGetCurrentThreadWin32Thread(v15);
  if ( v16 )
    v17 = *v16;
  else
    v17 = 0LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v17 + 480) + 16LL), v1 | 0x2000);
  KeClearEvent(*(PRKEVENT *)(v17 + 760));
  *(_QWORD *)(*(_QWORD *)(v5 + 512) + 8LL) = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 0x400) != 0
    && (int)CheckProcessForeground((struct tagTHREADINFO *)v5) < 0 )
  {
    return 0LL;
  }
LABEL_24:
  v19 = *(_QWORD *)(v5 + 752);
  if ( v19 )
  {
    if ( (v1 & 7) == 7 )
      goto LABEL_27;
    if ( (v1 & 6) != 0 )
    {
      v22 = (__int64 *)PsGetCurrentThreadWin32Thread(v18);
      if ( v22 )
        v4 = *v22;
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 464) + 112LL) )
LABEL_27:
        xxxUpdateInputHangInfo(0LL, 0LL);
    }
  }
  return v19;
}
