/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4
 * Callers:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402CADE8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x1401661C0 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1401662D4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x14024A6E0 (DwmAsyncNotifyAnimationChange.c)
 *     DwmAsyncGhostChange @ 0x140260A1C (DwmAsyncGhostChange.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  int v2; // r13d
  struct tagWND *v3; // r15
  BOOL v4; // ebx
  int v6; // r12d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r13d
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int128 v33; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = 0;
  LOBYTE(a1) = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  v6 = 99;
  if ( ((unsigned __int8)a1 & 0x20) != 0 )
    v2 = 1;
  else
    v4 = ((unsigned __int8)a1 & 1) != 0;
  v7 = *((_QWORD *)a2 + 2);
  if ( v7
    && (v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928), v9 = *(_QWORD *)(v7 + 464), v9 == v8)
    && *(struct tagWND **)(v9 + 128) == a2 )
  {
    tagTHREADINFO::SetForegroundActivate(*((_QWORD *)v3 + 2), 8LL);
  }
  else
  {
    v6 = 115;
  }
  if ( *(char *)(*((_QWORD *)a2 + 5) + 26LL) < 0 )
    SetOrClrWF(1, v3, 0xA80u, 1);
  v33 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  xxxEnableChildWindowDpiMessageX(v3, 1);
  v10 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 )
  {
    v11 = ValidateHmonitor(*(_QWORD *)(v10 + 256));
    v12 = *((_QWORD *)a2 + 5);
    v32 = v11;
    LogicalToPhysicalDPIRect(&v33, &v33, *(unsigned int *)(v12 + 288), &v32);
    if ( v4 )
      xxxSetWindowPos(v3, 0LL, (unsigned int)v33, DWORD1(v33), DWORD2(v33) - v33, HIDWORD(v33) - DWORD1(v33), 20);
    else
      v6 &= 0x7Cu;
  }
  v13 = 3;
  if ( v2 )
  {
    v14 = 1LL;
    v15 = 7LL;
  }
  else
  {
    if ( !v4 )
      goto LABEL_20;
    v14 = 17LL;
    v15 = 3LL;
  }
  xxxMinMaximize((__int64)v3, v15, v14);
  _CopyWindowCheckpoint(a2, v3);
  v6 |= 2u;
LABEL_20:
  v18 = IsWindowDesktopComposed(a2);
  if ( v18 )
  {
    v19 = (void *)ReferenceDwmApiPort(v17, v16);
    DwmAsyncGhostChange(v19);
    v22 = (void *)ReferenceDwmApiPort(v21, v20);
    DwmAsyncNotifyAnimationChange(v22);
    v25 = (void *)ReferenceDwmApiPort(v24, v23);
    DwmAsyncNotifyAnimationChange(v25);
    v13 = 3;
  }
  SetOrClrWF(0, v3, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, v3, 0x420u, 1);
    v26 = 1LL;
  }
  else
  {
    v26 = (__int64)a2;
  }
  SetVisible((__int64)a2, 0x10u);
  if ( !*(_DWORD *)(W32GetUserSessionState(v28, v27) + 70592) )
    v13 = 1;
  xxxWindowEvent(0x8003u, a2, 0, 0, v13);
  xxxSetWindowPos(v3, v26, (unsigned int)v33, DWORD1(v33), DWORD2(v33) - v33, HIDWORD(v33) - DWORD1(v33), v6);
  xxxNotifyShellOfWindowSwap(a2, v3);
  if ( v18 )
  {
    v31 = (void *)ReferenceDwmApiPort(v30, v29);
    DwmAsyncNotifyAnimationChange(v31);
  }
}
