/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0142840 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F7580 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     GetMonitorFlagsFromWindow @ 0x1C007BE54 (GetMonitorFlagsFromWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00C93DC (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0143000 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C014306C (DwmAsyncGhostChange.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F70C4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // al
  int v3; // r15d
  BOOL v4; // r14d
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r15d
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rax
  int v27; // r14d
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // [rsp+40h] [rbp-48h] BYREF
  __int128 v36; // [rsp+48h] [rbp-40h] BYREF

  v2 = *((_BYTE *)a2 + 55);
  v3 = 0;
  v4 = 0;
  v7 = 99;
  if ( (v2 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v2 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 384), v9 == gpqForeground) && *(struct tagWND **)(v9 + 80) == a2 )
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 440LL) |= 0x20u;
  else
    v7 = 115;
  if ( *((char *)a2 + 50) < 0 )
  {
    SetOrClrWF(1, a1, 0xA80u, 1);
    v7 |= 0x20u;
  }
  v36 = *((_OWORD *)a2 + 7);
  xxxEnableChildWindowDpiMessageX(a1, 1);
  if ( v3 )
  {
    v34 = 7;
LABEL_26:
    xxxMinMaximizeEx(a1, v34, 1u, 0LL, 0LL);
    _CopyWindowCheckpoint(a2, a1);
    v7 |= 2u;
    goto LABEL_12;
  }
  if ( v4 )
  {
    v34 = 3;
    goto LABEL_26;
  }
  if ( *((_DWORD *)a2 + 86) != 2 )
  {
    v35 = ValidateHmonitor(*((_QWORD *)a2 + 44));
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a2);
    LogicalToPhysicalDPIRect(&v36, &v36, MonitorFlagsFromWindow, &v35);
    v7 &= 0xFFFFFFFC;
  }
LABEL_12:
  v15 = IsWindowDesktopComposed(a2);
  if ( v15 )
  {
    v16 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
    DwmAsyncGhostChange(v16);
    v21 = (void *)ReferenceDwmApiPort(v18, v17, v19, v20);
    DwmAsyncNotifyAnimationChange(v21, 0, *(_QWORD *)a2);
    v26 = (void *)ReferenceDwmApiPort(v23, v22, v24, v25);
    DwmAsyncNotifyAnimationChange(v26, 0, *(_QWORD *)a1);
  }
  SetOrClrWF(0, a1, 0xE01u, 1);
  if ( (*((_BYTE *)a2 + 44) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, a1, 0x420u, 1);
    v27 = 1;
  }
  else
  {
    v27 = (int)a2;
  }
  SetVisible((__int64)a2, 16);
  v28 = 1;
  if ( gdwDeferWinEvent )
    v28 = 3;
  xxxWindowEvent(0x8003u, (__int64 *)a2, 0, 0, v28);
  xxxSetWindowPosAndBand(a1, v27, v36, SDWORD1(v36), DWORD2(v36) - v36, HIDWORD(v36) - DWORD1(v36), v7, 0);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v15 )
  {
    v33 = (void *)ReferenceDwmApiPort(v30, v29, v31, v32);
    DwmAsyncNotifyAnimationChange(v33, 1, *(_QWORD *)a1);
  }
}
