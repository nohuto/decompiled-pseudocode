/*
 * XREFs of xxxSetInformationThread @ 0x1400569F0
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     NtUserSetInformationThread @ 0x1401F6070 (NtUserSetInformationThread.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetCsrssThreadDesktop @ 0x140056850 (xxxSetCsrssThreadDesktop.c)
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     W32GetThreadWin32Thread @ 0x1400574EC (W32GetThreadWin32Thread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140057630 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxBroadcastMessage @ 0x1400927F4 (xxxBroadcastMessage.c)
 *     QueueShutdownData @ 0x14018E3C0 (QueueShutdownData.c)
 *     xxxRefreshDisplayOrientation @ 0x140235370 (xxxRefreshDisplayOrientation.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14026BC80 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x14028D400 (-EndShutdown@@YAXJ@Z.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1402D1E20 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, _QWORD *a3, int a4)
{
  unsigned __int64 v7; // r15
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  NTSTATUS v10; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  _QWORD *v18; // rdi
  unsigned int v19; // esi
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int i; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  NTSTATUS v35; // eax
  PVOID v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // rcx
  char v39; // bl
  __int64 UserSessionState; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 j; // rax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r8d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  PVOID v65; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v67[4]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v68; // [rsp+60h] [rbp-59h]
  _DWORD v69[2]; // [rsp+68h] [rbp-51h] BYREF
  _WORD *v70; // [rsp+70h] [rbp-49h]
  _WORD v71[40]; // [rsp+80h] [rbp-39h] BYREF

  Object = 0LL;
  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(Object);
    if ( a2 > 10 )
    {
      if ( a2 == 12 )
      {
        v42 = ValidateHwnd(*a3);
        if ( !v42 )
          goto LABEL_69;
        v45 = *(_QWORD *)(v42 + 16);
        if ( !v45 || !*(_QWORD *)(v45 + 488) )
          goto LABEL_69;
        v46 = *a3;
        *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19160) = v46;
        PostWinlogonMessage(1031LL, 0LL);
        v47 = *(_QWORD *)(v45 + 488);
        if ( !*(_QWORD *)(*(_QWORD *)(v47 + 8) + 168LL) )
          v7 = *(_QWORD *)(v47 + 288) != 0LL;
        QueueShutdownData(0xFFFFLL, v7);
      }
      else
      {
        v24 = (unsigned int)(a2 - 13);
        if ( a2 == 13 )
        {
          v10 = -1073741790;
          v65 = 0LL;
          for ( i = 0; i < 10000; i += 100 )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v24, v12) + 63480) )
            {
              v28 = PtiCurrent(v27);
              *(_QWORD *)(W32GetUserSessionState(v30, v29) + 69032) = v28;
              W32GetUserSessionState(v32, v31);
              QueueShutdownData(*a3, 1uLL);
              v10 = 0;
              break;
            }
            v39 = 0;
            UserSessionState = W32GetUserSessionState(v27, v26);
            if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
            {
              v39 = 1;
              LeaveMitRitHazardCrit();
            }
            UserSessionSwitchLeaveCrit(v41);
            v65 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v65);
            EnterCrit(1LL, 0LL);
            if ( v39 )
              EnterMitRitHazardCrit();
          }
          if ( i > 0 )
          {
            v33 = W32GetUserSessionState(v24, v12);
            TraceLoggingBSDRRaceConditionEvent(***(_DWORD ***)(v33 + 56968), i);
          }
          goto LABEL_15;
        }
        if ( a2 == 14 )
        {
          QueueShutdownData(*a3, 0LL);
          *(_QWORD *)(W32GetUserSessionState(v49, v48) + 69032) = 0LL;
          W32GetUserSessionState(v51, v50);
          *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19160) = 0LL;
        }
        else
        {
          v57 = (unsigned int)(a2 - 15);
          if ( a2 != 15 )
          {
            v57 = (unsigned int)(a2 - 16);
            if ( a2 != 16 )
            {
              if ( a2 == 17 )
              {
                v68 = 0LL;
                *(_OWORD *)v67 = 0LL;
                v10 = xxxSetInformationThread(-2LL, 7LL, v67, 24LL);
                if ( v10 < 0 )
                  goto LABEL_15;
                PostShellHookMessagesEx((LastWokenThread *)0x37, 0LL);
                v20 = xxxSetInformationThread(-2LL, 9LL, v67, 24LL);
                goto LABEL_14;
              }
              goto LABEL_82;
            }
          }
          v58 = *(_DWORD *)a3;
          v65 = 0LL;
          v68 = 0LL;
          if ( a2 == 15 )
          {
            if ( v58 )
            {
              v59 = W32GetUserSessionState(v57, v12);
              *(_DWORD *)(*(_QWORD *)(v59 + 19904) + 2236LL) |= 8u;
            }
            else
            {
              v62 = W32GetUserSessionState(v57, v12);
              *(_DWORD *)(*(_QWORD *)(v62 + 19904) + 2236LL) &= ~8u;
            }
            RtlLoadStringOrError(629LL, v71, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v58 )
            {
              v63 = W32GetUserSessionState(v57, v12);
              *(_DWORD *)(*(_QWORD *)(v63 + 19904) + 2236LL) |= 0x10u;
            }
            else
            {
              v64 = W32GetUserSessionState(v57, v12);
              *(_DWORD *)(*(_QWORD *)(v64 + 19904) + 2236LL) &= ~0x10u;
            }
            RtlLoadStringOrError(630LL, v71, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceDockState(*(unsigned int *)a3);
          }
          v70 = v71;
          v60 = -1LL;
          do
            ++v60;
          while ( v71[v60] );
          v61 = *(_DWORD *)a3;
          v69[0] = 2 * v60;
          v67[0] = 0;
          v67[1] = 100;
          v69[1] = (2 * v60 + 2) & 0x7FFFFFFF;
          *(_QWORD *)&v67[2] = &v65;
          xxxBroadcastMessage((unsigned int)v71, 26, v61, (unsigned int)v69, 6u, (union tagBROADCASTMSG *)v67, 1);
        }
      }
    }
    else
    {
      if ( a2 == 10 )
      {
        v20 = SetCsrApiPortHandle(*a3);
        goto LABEL_14;
      }
      v13 = a2 - 1;
      if ( !v13 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 )
              _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 0x20000u);
            else
              _InterlockedAnd((volatile signed __int32 *)(ThreadWin32Thread + 520), 0xFFFDFFFF);
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_19;
      }
      v14 = v13 - 4;
      if ( !v14 )
      {
        v20 = InitiateShutdown(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            v34 = (void *)*a3;
            v65 = 0LL;
            v35 = ObReferenceObjectByHandle(v34, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v65, 0LL);
            v36 = v65;
            v10 = v35;
            if ( v35 >= 0 )
            {
              v37 = W32GetThreadWin32Thread(v65);
              if ( v37 && (v38 = *(_DWORD **)(v37 + 488)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v38, (PVOID *)a3 + 1);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v36);
            }
            goto LABEL_15;
          }
          if ( v17 == 1 )
          {
            v18 = a3 + 1;
            if ( a4 == 32 )
              v19 = *((_DWORD *)a3 + 6);
            else
              v19 = 0;
            if ( !*v18 )
            {
LABEL_13:
              v20 = xxxRestoreCsrssThreadDesktop(v18, v19);
LABEL_14:
              v10 = v20;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v54 = 0LL;
            v55 = *(_QWORD *)(W32GetUserSessionState(ThreadWin32Thread, v12) + 63512);
            if ( v55 )
            {
              while ( !v54 )
              {
                for ( j = *(_QWORD *)(v55 + 16); j; j = *(_QWORD *)(j + 32) )
                {
                  if ( j == *v18 )
                  {
                    v54 = j;
                    break;
                  }
                }
                v55 = *(_QWORD *)(v55 + 8);
                if ( !v55 )
                {
                  if ( v54 )
                    goto LABEL_13;
                  goto LABEL_69;
                }
              }
              goto LABEL_13;
            }
LABEL_69:
            v10 = -1073741823;
            goto LABEL_15;
          }
LABEL_82:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( *(_QWORD *)(W32GetUserSessionState(ThreadWin32Thread, v12) + 19176) )
        {
          v23 = W32GetUserSessionState(v22, v21);
          v20 = xxxSetCsrssThreadDesktop(*(_DWORD **)(v23 + 19176), (PVOID *)a3 + 1);
          goto LABEL_14;
        }
LABEL_19:
        v10 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v10 = 0;
    goto LABEL_15;
  }
  return result;
}
