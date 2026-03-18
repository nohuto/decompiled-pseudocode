/*
 * XREFs of ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60
 * Callers:
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x140042FEC (xxxDW_SendDestroyMessages.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x140044848 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x14014C894 (zzzInternalDestroyCaret.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x140154494 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     xxxEnableWindow @ 0x14015E320 (xxxEnableWindow.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401F1D14 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 */

void __fastcall xxxDestroyWindow_Phase2(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  char v3; // r15
  int v4; // esi
  struct tagHOTKEYSTRUCT **v7; // rax
  struct tagHOTKEYSTRUCT *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned __int8 v11; // r14
  struct tagWND *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct tagWND *v15; // rsi
  bool v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // bl
  struct tagWND *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int *v25; // rcx
  __int64 v26; // rdx
  struct tagHOTKEYSTRUCT *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 UserSessionState; // rax
  struct tagWND *i; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  ULONG_PTR v33[2]; // [rsp+60h] [rbp-38h] BYREF

  v3 = 0;
  v4 = a3;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    v7 = HotKeyHelper(a1);
    v8 = *v7;
    if ( *v7 )
    {
      v27 = *v7;
      *v7 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v8 + 2);
      HMAssignmentUnlock(v27);
      Win32FreePool(v8);
      UserSessionState = W32GetUserSessionState(v29, v28);
      --*(_DWORD *)(UserSessionState + 16304);
    }
  }
  if ( !v4 )
  {
    v9 = *((_QWORD *)a2 + 58);
    v10 = 58;
    BugCheckParameter3[1] = 0LL;
    v11 = 0;
    BugCheckParameter3[0] = -1LL;
    v12 = *(struct tagWND **)(v9 + 128);
    if ( a1 == v12 )
    {
      if ( *(char *)(*((_QWORD *)a1 + 5) + 31LL) < 0 )
      {
        v15 = (struct tagWND *)*((_QWORD *)a1 + 15);
        if ( v15 )
        {
          v11 = 1;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( v12 || *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 18928) != *((_QWORD *)a2 + 58) )
        goto LABEL_8;
      v10 = 59;
    }
    v15 = a1;
    if ( !a1 )
    {
LABEL_22:
      v4 = a3;
LABEL_8:
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
      goto LABEL_9;
    }
LABEL_23:
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v3 = 1;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = *(_QWORD *)a1;
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v19) = v16;
      LOBYTE(v20) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69152),
        4,
        2,
        10,
        (__int64)&WPP_a3a91e215f2f34cc9afac41ea0cd159c_Traceguids,
        v17);
    }
    if ( v11 )
    {
      if ( (unsigned int)IsImmersiveBand(v15) && *(char *)(*((_QWORD *)v15 + 5) + 20LL) < 0 )
      {
        for ( i = (struct tagWND *)*((_QWORD *)v15 + 15); i; i = (struct tagWND *)*((_QWORD *)i + 15) )
        {
          if ( _bittest((const signed __int32 *)a1 + 95, 8u) && *(char *)(*((_QWORD *)i + 5) + 20LL) >= 0 )
          {
            v15 = i;
            break;
          }
        }
      }
      Win32HM_LockIntoThread<0>((__int64)a2, (__int64)v15, BugCheckParameter3);
      if ( _bittest((const signed __int32 *)a1 + 95, 8u) )
        xxxEnableWindow(v15);
    }
    v21 = xxxActivateWindowWithOptions(v15, (unsigned int)v11 + 2, v10, 1LL, 0);
    if ( v11 )
      Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
    if ( v21 )
    {
      if ( v11 )
        goto LABEL_22;
    }
    else if ( !v11 )
    {
      goto LABEL_33;
    }
    if ( a1 != *(struct tagWND **)(*((_QWORD *)a2 + 58) + 128LL) )
      goto LABEL_22;
LABEL_33:
    tagQ::SetActiveWindow(*((tagQ **)a2 + 58), 0LL);
    v22 = tagQ::UnlockFocusWnd(*((tagQ **)a2 + 58));
    v25 = *(unsigned int **)(W32GetUserSessionState(v24, v23) + 19904);
    v26 = *v25;
    if ( (v26 & 4) != 0 && v22 )
    {
      Win32HM_LockIntoThread<0>((__int64)a2, (__int64)v22, v33);
      xxxFocusSetInputContext(v22, 0, 0);
      v22 = (struct tagWND *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v33);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v33);
    }
    if ( *((_QWORD *)a2 + 58) == *(_QWORD *)(W32GetUserSessionState(v25, v26) + 18928) )
    {
      if ( v22 )
        zzzInputFocusLostWindowEvent(v22, 9LL);
      xxxWindowEvent(0x8005u, 0);
      xxxWindowEvent(3u, 1);
    }
    zzzInternalDestroyCaret();
    goto LABEL_22;
  }
LABEL_9:
  v13 = *((_QWORD *)a1 + 15);
  if ( v13 )
  {
    while ( *(_QWORD *)(v13 + 120) )
      v13 = *(_QWORD *)(v13 + 120);
    v14 = v13 + 200;
    if ( a1 == *(struct tagWND **)(v13 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v13) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v14 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v14);
      }
      else
      {
        *(_OWORD *)v33 = *(_OWORD *)LockPointer(BugCheckParameter3, v14, *((_QWORD *)a1 + 15));
        HMAssignmentLock(v33, 0LL);
      }
    }
  }
  if ( !v4 )
  {
    if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages(a1);
  }
}
