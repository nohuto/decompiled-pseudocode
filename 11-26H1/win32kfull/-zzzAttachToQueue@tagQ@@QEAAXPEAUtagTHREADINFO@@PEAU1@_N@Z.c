/*
 * XREFs of ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC
 * Callers:
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockCaptureWindow @ 0x1400547AC (LockCaptureWindow.c)
 *     UnlockCaptureWindow @ 0x140054860 (UnlockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z @ 0x1401CACC8 (-CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z.c)
 *     ClearDelegationCapture @ 0x1401CAD60 (ClearDelegationCapture.c)
 *     LockQCursor @ 0x1401CAD90 (LockQCursor.c)
 *     IsInsideMenuLoop @ 0x1401CB018 (IsInsideMenuLoop.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A04C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall tagQ::zzzAttachToQueue(tagQ *this, struct tagTHREADINFO *a2, struct tagQ *a3)
{
  int v6; // eax
  char v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  struct MOVESIZEDATA *v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  struct tagQ *v15; // rax
  struct tagQ *v16; // rbx
  struct tagQMSG *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  bool v20; // r12
  __int64 v21; // rsi
  unsigned __int8 v22; // al
  __int64 v23; // rdi
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // edx
  _QWORD v34[2]; // [rsp+60h] [rbp-38h] BYREF

  v6 = tagQ::CheckTransferState(this, a2, 128LL) - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      tagQ::SetActiveWindow(this, *(struct tagWND **)(*((_QWORD *)a2 + 58) + 128LL));
      tagQ::SetActiveWindow(*((tagQ **)a2 + 58), 0LL);
      v18 = *((_QWORD *)a2 + 58);
      v19 = *(_QWORD *)(v18 + 344);
      if ( v19 )
      {
        if ( *(struct tagTHREADINFO **)(v19 + 16) == a2 && !*((_QWORD *)this + 43) )
        {
          *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v18 + 344);
          *(_OWORD *)((char *)this + 360) = *(_OWORD *)(v18 + 360);
          *(_OWORD *)((char *)this + 376) = *(_OWORD *)(v18 + 376);
          *(_OWORD *)((char *)this + 392) = *(_OWORD *)(v18 + 392);
          *(_OWORD *)((char *)this + 408) = *(_OWORD *)(v18 + 408);
          *(_QWORD *)(*((_QWORD *)a2 + 58) + 344LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState(a2, 0);
  }
  v7 = 1;
  v8 = tagQ::CheckTransferState(this, a2, 120LL) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      tagQ::LockFocusWnd(this, *(_QWORD *)(*((_QWORD *)a2 + 58) + 120LL), 0LL);
      tagQ::UnlockFocusWnd(*((tagQ **)a2 + 58));
    }
  }
  else
  {
    CancelInputState(a2, 1u);
  }
  ClearDelegationCapture(*((_QWORD *)a2 + 58));
  ClearDelegationCapture(this);
  v9 = tagQ::CheckTransferState(this, a2, 112LL) - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      LockCaptureWindow(this, *(struct tagWND **)(*((_QWORD *)a2 + 58) + 112LL));
      UnlockCaptureWindow(*((_QWORD *)a2 + 58), v31);
      EditionUpdateRawMouseMode((__int64)this, v32);
      v33 = *((_DWORD *)this + 109);
      *((_DWORD *)this + 39) = *(_DWORD *)(*((_QWORD *)a2 + 58) + 156LL);
      *((_DWORD *)this + 109) = v33 ^ (*(_DWORD *)(*((_QWORD *)a2 + 58) + 436LL) ^ v33) & 0x100000;
    }
  }
  else
  {
    CancelInputState(a2, 2u);
  }
  v10 = tagQ::CheckTransferState(this, a2, 136LL) - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_11;
    v34[0] = (char *)this + 136;
    v30 = *(_QWORD *)(*((_QWORD *)a2 + 58) + 136LL);
    goto LABEL_34;
  }
  v11 = *((_QWORD *)this + 16);
  if ( v11 )
  {
    if ( *((_QWORD *)this + 17) )
    {
      v30 = *(_QWORD *)(*((_QWORD *)a2 + 58) + 136LL);
      if ( v30 )
      {
        if ( *(_QWORD *)(v11 + 88) == v30 )
        {
          v34[0] = (char *)this + 136;
LABEL_34:
          v34[1] = v30;
          HMAssignmentLock(v34, 0LL);
          HMAssignmentUnlock(*((_QWORD *)a2 + 58) + 136LL);
        }
      }
    }
  }
LABEL_11:
  v12 = (struct MOVESIZEDATA *)*((_QWORD *)a2 + 58);
  if ( a2 == *((struct tagTHREADINFO **)v12 + 9) )
  {
    *((_DWORD *)this + 109) ^= (*((_DWORD *)v12 + 109) ^ *((_DWORD *)this + 109)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a2) )
    {
      v11 = (unsigned int)v11 & 0xFFFFFFBF;
      *((_DWORD *)this + 109) = v11;
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v7 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = *(_QWORD *)(*((_QWORD *)a2 + 58) + 72LL);
      v22 = (unsigned __int8)PtiCurrent((__int64)WPP_GLOBAL_Control);
      v23 = *((_QWORD *)a2 + 58);
      v24 = v22;
      UserSessionState = W32GetUserSessionState(v26, v25);
      LOBYTE(v28) = v20;
      LOBYTE(v29) = v7;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        18,
        43,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v23,
        v24,
        v21);
    }
    *(_QWORD *)(*((_QWORD *)a2 + 58) + 72LL) = 0LL;
  }
  v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 36288);
  if ( v13 && a2 == *(struct tagTHREADINFO **)(v13 + 16) )
    LockQCursor(this, *(struct tagCURSOR **)(*((_QWORD *)a2 + 58) + 424LL));
  *((_DWORD *)this + 108) += *((_DWORD *)a2 + 196);
  *((_QWORD *)this + 12) = a2;
  *((_QWORD *)this + 13) = a2;
  v14 = *(_DWORD *)(*((_QWORD *)a2 + 57) + 864LL);
  if ( *((_DWORD *)this + 118) < v14 )
  {
    *((_DWORD *)this + 118) = v14;
    *(_QWORD *)((char *)this + 476) = 0LL;
  }
  v15 = tagTHREADINFO::AssignQueue(a2, this);
  v16 = v15;
  if ( v15 != a3 )
  {
    v17 = (struct tagQMSG *)*((_QWORD *)v15 + 3);
    *((_QWORD *)v15 + 3) = 0LL;
    *((_QWORD *)v15 + 4) = 0LL;
    *((_QWORD *)v15 + 7) = 0LL;
    *((_DWORD *)v15 + 10) = 0;
    RedistributeInput(v17, v15, 0LL);
    zzzDestroyQueue(v16, a2);
  }
}
