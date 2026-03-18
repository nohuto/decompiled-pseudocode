/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0117594 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0124440 (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C003FB28 (DwmAsyncNotifyAnimationChange.c)
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0118004 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F6C08 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, LARGE_INTEGER *a2)
{
  int v3; // r12d
  BOOL v4; // r15d
  int v6; // r14d
  char v7; // al
  int v8; // r13d
  LARGE_INTEGER v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  void *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // r10d
  int v22; // ebx
  int v23; // r12d
  int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rbx
  void *v33; // rax
  unsigned int v34; // edx
  char *v35; // rax
  __int64 QuadPart; // rbx
  __int64 v37; // rax
  int v38; // ecx
  int v39[2]; // [rsp+28h] [rbp-51h]
  int v40; // [rsp+60h] [rbp-19h]
  int v41; // [rsp+64h] [rbp-15h]
  _DWORD v42[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v43[3]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v44; // [rsp+88h] [rbp+Fh] BYREF

  v3 = 0;
  v4 = 0;
  v41 = 0;
  v6 = 49185;
  v7 = *((_BYTE *)a1 + 55);
  v8 = *(_BYTE *)(gptiCurrent + 448LL) & 1;
  v40 = v8;
  if ( (v7 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v7 & 1) != 0;
  v9 = a2[2];
  v42[0] = gspwndMouseOwner == a1;
  v10 = *((_QWORD *)a1 + 2);
  if ( v9.QuadPart && v10 )
  {
    v11 = *(_QWORD *)(v10 + 392);
    if ( v11 == gpqForeground && *(struct tagWND **)(v11 + 80) == a1
      || gpqForeground && (v12 = *(_QWORD *)(gpqForeground + 80LL)) != 0 && *(struct tagWND **)(v12 + 104) == a1 )
    {
      *(_DWORD *)(v9.QuadPart + 448) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v44 = *((_OWORD *)a1 + 7);
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v41 = IsWindowDesktopComposed(a2);
    if ( v41 )
    {
      v17 = *(_QWORD *)a1;
      v18 = (void *)ReferenceDwmApiPort(v14, v13, v15, v16);
      DwmAsyncNotifyAnimationChange(v18, 0, v17);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v19 = *((_QWORD *)a1 + 2);
    if ( v19 )
    {
      xxxWindowEvent(0x8003u, (__int64 *)a1, 0, 0, 3);
      PostEventMessageEx(v19, *(_QWORD *)(v19 + 392), 8u, 0LL, 0, *(LARGE_INTEGER *)a1, 0LL, 0LL);
    }
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a2) || !(unsigned int)IsTopLevelWindow(v20) )
  {
    v24 = v44;
    v23 = 0;
    goto LABEL_27;
  }
  v22 = v8 != 0 ? 0x20000 : 0;
  if ( v3 )
  {
    v23 = 0;
    if ( (a2[6].QuadPart & 0x2000000000000000LL) != 0 )
    {
LABEL_56:
      _CopyWindowCheckpoint(a1, (struct tagWND *)a2);
LABEL_22:
      v6 |= 2u;
      goto LABEL_23;
    }
    v34 = 7;
LABEL_55:
    xxxMinMaximizeEx((struct tagWND *)a2, v34, v22 | 1, 0LL, 0LL);
    goto LABEL_56;
  }
  v23 = 0;
  if ( v4 )
  {
    if ( (a2[6].QuadPart & 0x100000000000000LL) != 0 )
      goto LABEL_56;
    v34 = v21;
    goto LABEL_55;
  }
  if ( (a2[6].QuadPart & 0x2100000000000000LL) != 0 )
  {
    v35 = CkptRestore((__int64)a2, &v44);
    if ( v35 )
      *(_OWORD *)v35 = v44;
    xxxMinMaximizeEx((struct tagWND *)a2, 9u, v22 | 1, 0LL, 0LL);
    goto LABEL_22;
  }
LABEL_23:
  if ( (a2[6].LowPart & 0x800) != 0 )
    v6 |= 0x40u;
  v24 = v44;
  if ( (_QWORD)v44 == a2[14].QuadPart )
    v6 |= 2u;
LABEL_27:
  if ( v40
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v25) && (v6 & 0x40) != 0 )
  {
    SetVisible((__int64)a1, 0);
  }
  else
  {
    xxxShowWindow(a1, 0);
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a2) )
  {
    PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 18, *(_QWORD *)a1);
    if ( (a2[6].LowPart & 0x800) != 0 )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 18, a2->QuadPart);
  }
  else
  {
    if ( (unsigned int)IsTopLevelWindow(v26) )
    {
      if ( (*((_BYTE *)a1 + 44) & 0x20) != 0 )
      {
        SetOrClrWF(0, a1, 0x420u, 1);
        SetOrClrWF(1, a2, 0x420u, 1);
        v31 = 1LL;
      }
      else
      {
        v31 = *((_QWORD *)a1 + 10);
        if ( v31 )
        {
          if ( (LARGE_INTEGER *)v31 == a2 )
          {
            v31 = 0LL;
            v6 |= 4u;
          }
          else
          {
            v23 = 1;
            v43[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v43;
            v43[1] = v31;
            ++*(_DWORD *)(v31 + 8);
          }
        }
      }
      if ( (v6 & 0x40) != 0 )
        SetVisible((__int64)a2, 1);
      xxxSetWindowPosAndBand((struct tagWND *)a2, v31, v24, SDWORD1(v44), 0, 0, v6, 0);
      if ( v23 )
        ThreadUnlock1(v28, v27);
      if ( (v6 & 0x40) != 0 )
        xxxRedrawWindow((struct tagWND *)a2, 0LL, 0LL, 1157);
      if ( (v6 & 0x10) == 0 && !v40 )
        xxxActivateWindow((struct tagWND *)a2, 1LL);
      if ( v42[0] )
      {
        QuadPart = a2[2].QuadPart;
        if ( QuadPart )
        {
          HMAssignmentLock(&gspwndMouseOwner, a2);
          v42[0] = 0;
          v42[1] = 4;
          v37 = LogicalCursorPos(QuadPart);
          v39[0] = 0;
          PostInputMessage(
            *(_QWORD *)(QuadPart + 392),
            a2,
            0x201u,
            0LL,
            (WORD2(v37) << 16) | (unsigned __int16)v37,
            *(_QWORD *)v39,
            0LL,
            0LL,
            0,
            v42,
            0LL,
            0LL);
        }
      }
    }
    else if ( (a2[6].LowPart & 0x800) != 0 )
    {
      SetVisible((__int64)a2, 17);
      v38 = 1;
      if ( gdwDeferWinEvent )
        v38 = 3;
      xxxWindowEvent(0x8002u, (__int64 *)a2, 0, 0, v38);
      xxxRedrawWindow((struct tagWND *)a2, 0LL, 0LL, 1157);
    }
    if ( v41 )
    {
      v32 = a2->QuadPart;
      v33 = (void *)ReferenceDwmApiPort(v28, v27, v29, v30);
      DwmAsyncNotifyAnimationChange(v33, 1, v32);
    }
    xxxNotifyShellOfWindowSwap(a1, (struct tagWND *)a2);
  }
}
