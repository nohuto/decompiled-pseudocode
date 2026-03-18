/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0
 * Callers:
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     xxxSleepThreadWithPwnd @ 0x1401B9E80 (xxxSleepThreadWithPwnd.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxDoSysExpungeIfNeeded @ 0x140024000 (xxxDoSysExpungeIfNeeded.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ClientDeliverUserApc @ 0x1401B6300 (ClientDeliverUserApc.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401F16F8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     EditionxxxComputeInputSinkInfo @ 0x1401F83B0 (EditionxxxComputeInputSinkInfo.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall xxxRealSleepThread(__int64 a1, int a2, int a3, int a4, _DWORD *Count)
{
  unsigned int v5; // edi
  NTSTATUS v6; // r15d
  int v7; // ebx
  _DWORD *v8; // r8
  unsigned int v9; // r12d
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  _DWORD *v16; // r13
  __int64 v17; // rcx
  int v18; // ebx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rax
  struct _KEVENT *v28; // rcx
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // r13
  void *v34; // rcx
  unsigned __int64 v35; // rcx
  char v36; // bl
  __int64 UserSessionState; // rax
  __int64 v38; // rcx
  union _LARGE_INTEGER *v39; // rdx
  __int64 v40; // rcx
  int v41; // ebx
  int v42; // ebx
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rbx
  struct _KEVENT *v46; // rcx
  __int64 *v47; // rax
  int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  union _LARGE_INTEGER *Timeout; // [rsp+40h] [rbp-98h]
  _DWORD v54[7]; // [rsp+48h] [rbp-90h] BYREF
  int v55; // [rsp+64h] [rbp-74h]
  __int64 v56; // [rsp+68h] [rbp-70h] BYREF
  _DWORD *v57; // [rsp+70h] [rbp-68h]
  PVOID Object[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v59; // [rsp+88h] [rbp-50h]
  __int64 v60; // [rsp+90h] [rbp-48h]
  int v61; // [rsp+E0h] [rbp+8h]
  __int32 v62; // [rsp+E8h] [rbp+10h]
  ULONG Counta; // [rsp+100h] [rbp+28h]

  v5 = 0;
  v56 = 0LL;
  v6 = 0;
  v7 = a1 & 0x8000;
  v61 = v7;
  v54[6] = 0;
  *(_OWORD *)Object = 0LL;
  v54[0] = 0;
  v8 = v54;
  if ( Count )
    v8 = Count;
  v57 = v8;
  *v8 = 0;
  v9 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v9 = a1;
  if ( a2 )
  {
    a1 = -10000LL * a2;
    v56 = a1;
    Timeout = (union _LARGE_INTEGER *)&v56;
  }
  else
  {
    Timeout = 0LL;
  }
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  v12 = v11 + 480;
  v59 = v11 + 480;
  v62 = *(_DWORD *)(*(_QWORD *)(v11 + 480) + 16LL);
  v54[5] = v62;
LABEL_10:
  v13 = 0xFFFFF78000000004uLL;
  v14 = 0xFFFFF78000000320uLL;
  while ( 1 )
  {
    if ( (v9 & *(_DWORD *)(*(_QWORD *)v12 + 4LL)) != 0 || a4 && (v9 & *(_DWORD *)(*(_QWORD *)v12 + 8LL)) != 0 )
    {
      v5 = 1;
      goto LABEL_13;
    }
    v16 = v57;
    if ( *v57 == 2 )
      goto LABEL_13;
    if ( !v7 && (*(_DWORD *)(*(_QWORD *)v12 + 8LL) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage((struct tagTHREADINFO *)v11);
      while ( (*(_DWORD *)(*(_QWORD *)v12 + 8LL) & 0x40) != 0 );
      v14 = *(_DWORD *)(*(_QWORD *)v12 + 8LL) & (unsigned int)*(unsigned __int16 *)(v11 + 912);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)v12 + 4LL), v14);
      *(_WORD *)(v11 + 912) = 0;
    }
    xxxDoSysExpungeIfNeeded(v11, v14, v13);
    v18 = 0;
    if ( !v61 )
      v18 = 64;
    v19 = (__int64 *)PsGetCurrentThreadWin32Thread(v17);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v20 + 480) + 16LL), v18 | (unsigned __int16)v9);
    KeClearEvent(*(PRKEVENT *)(v20 + 760));
    if ( v6 == 258 )
    {
      UserSetLastError(1460);
      *v16 = 1;
      goto LABEL_13;
    }
    if ( v6 == 192 )
      break;
    v21 = *(unsigned int *)(*(_QWORD *)v12 + 16LL);
    v7 = v61;
    v14 = 0xFFFFF78000000320uLL;
    v13 = 0xFFFFF78000000004uLL;
    if ( (*(_DWORD *)(*(_QWORD *)v12 + 4LL) & (unsigned int)v21) == 0 )
    {
      if ( v11 == *(_QWORD *)(W32GetUserSessionState(v21, 0xFFFFF78000000320uLL) + 68472)
        && (v9 & 0x200) != 0
        && !Timeout )
      {
        v6 = xxxDesktopThreadWaiter(0LL, v9);
        if ( v6 == -1073741790 )
          goto LABEL_13;
        goto LABEL_10;
      }
      if ( a3 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 520), 0, 0) & 0x400) != 0
          && (int)CheckProcessForeground((struct tagTHREADINFO *)v11) < 0 )
        {
          goto LABEL_13;
        }
        *(_QWORD *)(*(_QWORD *)(v11 + 512) + 8LL) = 0LL;
        if ( a3 )
        {
          if ( v11 == *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18944) )
          {
            v47 = *(__int64 **)(v11 + 496);
            v24 = *v47;
            if ( ((*(_DWORD *)(v11 + 712) | *(_DWORD *)(*v47 + 16)) & 0x1000) != 0 )
              xxxCallHook(0, 0LL, 0LL, 11);
          }
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v24);
          v26 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
            v26 = 0LL;
          v27 = *(_QWORD *)(v11 + 456);
          if ( !*(_QWORD *)(v27 + 336) )
            *(_QWORD *)(v27 + 336) = v11;
          if ( *(_QWORD *)(*(_QWORD *)(v11 + 456) + 336LL) == v11 )
          {
            EtwTraceWakeInputIdle(0LL, v11);
            v28 = (struct _KEVENT *)v26[2];
            if ( !v28 )
              goto LABEL_41;
            if ( v28 != (struct _KEVENT *)-1LL )
            {
              KeSetEvent(v28, 1, 0);
              ObfDereferenceObject((PVOID)v26[2]);
LABEL_41:
              v26[2] = -1LL;
            }
          }
          v29 = *((_DWORD *)v26 + 3);
          if ( (v29 & 4) != 0 )
          {
            *((_DWORD *)v26 + 3) = v29 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0LL);
          }
        }
      }
      Object[0] = *(PVOID *)(v11 + 1608);
      v30 = 1;
      Counta = 1;
      if ( (unsigned __int8)IsInputThread() && (v9 & 0x200) != 0 )
      {
        v33 = 1;
        Object[1] = *(PVOID *)(W32GetUserSessionState(v32, v31) + 18808);
        v30 = 2;
        Counta = 2;
      }
      else
      {
        v33 = 0;
      }
      v34 = *(void **)(v11 + 1576);
      if ( v34 && (v9 & 0xFFFF7DFF) != 0 )
      {
        Object[v30] = v34;
        Counta = v30 + 1;
      }
      if ( v33 )
        *(_DWORD *)(W32GetUserSessionState(v34, v31) + 64184) = 1;
      v55 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v35 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
            v60 = (v35 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v36 = 0;
            UserSessionState = W32GetUserSessionState(v35, v60);
            if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
            {
              v36 = 1;
              LeaveMitRitHazardCrit();
            }
            UserSessionSwitchLeaveCrit(v38);
            v6 = KeWaitForMultipleObjects(Counta, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
            EnterCrit(1LL, 0LL);
            if ( v36 )
              EnterMitRitHazardCrit();
            if ( v6
              || !(unsigned int)xxxRemoveQueueCompletion()
              || (v40 = v9 & *(_DWORD *)(*(_QWORD *)v12 + 8LL),
                  v41 = 1,
                  ((unsigned __int8)v9 & *(_BYTE *)(*(_QWORD *)v12 + 8LL) & 8) != 0) )
            {
              v41 = 0;
            }
            if ( v6 == 1 )
              break;
            if ( !v41 )
            {
              v42 = v55;
              goto LABEL_59;
            }
          }
          if ( v33 )
            break;
          *v57 = 2;
          v56 = -100000LL;
        }
        v48 = (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                               - v60) < 0x10
            ? 16
            : ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - v60;
        v40 = -10000LL * v48;
        v39 = Timeout;
        if ( v40 <= Timeout->QuadPart )
          break;
        Timeout->QuadPart -= v40;
        *(_DWORD *)(W32GetUserSessionState(v40, Timeout) + 64188) = 0;
        EditionxxxComputeInputSinkInfo();
      }
      v42 = 1;
      v6 = 258;
LABEL_59:
      if ( v33 )
      {
        *(_DWORD *)(W32GetUserSessionState(v40, v39) + 64184) = 0;
        if ( *(_DWORD *)(W32GetUserSessionState(v50, v49) + 64188) )
        {
          WakeMIT(2LL);
          if ( !v42 )
          {
            v52 = W32GetUserSessionState(v40, v51);
            KeClearEvent(*(PRKEVENT *)(v52 + 18808));
          }
        }
      }
      v43 = *(_QWORD *)(v11 + 456);
      if ( !*(_QWORD *)(v43 + 336) )
        *(_QWORD *)(v43 + 336) = v11;
      v7 = v61;
      v14 = 0xFFFFF78000000320uLL;
      v13 = 0xFFFFF78000000004uLL;
      if ( *(_QWORD *)(*(_QWORD *)(v11 + 456) + 336LL) == v11 )
      {
        v44 = (_QWORD *)PsGetCurrentProcessWin32Process(v40);
        v45 = v44;
        if ( v44 && !*v44 )
          v45 = 0LL;
        EtwTraceSleepInputIdle(0LL, v11);
        v46 = (struct _KEVENT *)v45[2];
        if ( v46 == (struct _KEVENT *)-1LL )
        {
          v45[2] = 0LL;
          v7 = v61;
          goto LABEL_10;
        }
        v7 = v61;
        v14 = 0xFFFFF78000000320uLL;
        v13 = 0xFFFFF78000000004uLL;
        if ( v46 )
        {
          KeClearEvent(v46);
          goto LABEL_10;
        }
      }
    }
  }
  ClientDeliverUserApc();
LABEL_13:
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v12 + 16LL), v62);
  if ( v5 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)v12 + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v5;
}
