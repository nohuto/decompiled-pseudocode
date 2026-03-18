/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01EE750 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00B2504 (xxxEnableChildWindowDpiMessageX.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00B2D9C (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0148DA4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C0148E10 (DwmAsyncGhostChange.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01EE254 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // al
  int v3; // r12d
  BOOL v4; // r15d
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
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
  int v27; // r15d
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // [rsp+40h] [rbp-20h] BYREF
  __int128 v36; // [rsp+48h] [rbp-18h] BYREF

  v2 = *((_BYTE *)a2 + 55);
  v3 = 0;
  v4 = 0;
  v7 = 99;
  if ( (v2 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v2 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 384), v9 == gpqForeground) && *(struct tagWND **)(v9 + 88) == a2 )
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 440LL) |= 0x20u;
  else
    v7 = 115;
  if ( *((char *)a2 + 50) < 0 )
  {
    SetOrClrWF(1, a1, 0xA80u, 1);
    v7 |= 0x20u;
  }
  v36 = *((_OWORD *)a2 + 7);
  xxxEnableChildWindowDpiMessageX(a1);
  if ( (*((_DWORD *)a2 + 88) & 0xF) != 2 )
  {
    v35 = ValidateHmonitor(*((_QWORD *)a2 + 43));
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a2);
    LogicalToPhysicalDPIRect(&v36, &v36, MonitorFlagsFromWindow, &v35);
    if ( v4 )
      xxxSetWindowPosAndBand(a1, 0, v36, SDWORD1(v36), DWORD2(v36) - v36, HIDWORD(v36) - DWORD1(v36), 20, 0);
    else
      v7 &= 0xFFFFFFFC;
  }
  if ( v3 )
  {
    v34 = 7;
  }
  else
  {
    if ( !v4 )
      goto LABEL_14;
    v34 = 3;
  }
  xxxMinMaximizeEx(a1, v34, 1, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v7 |= 2u;
LABEL_14:
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
  SetVisible(a2, 16);
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
