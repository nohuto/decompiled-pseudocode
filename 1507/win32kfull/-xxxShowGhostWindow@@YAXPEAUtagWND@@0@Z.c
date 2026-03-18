/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C003FB28 (DwmAsyncNotifyAnimationChange.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0118004 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C0118070 (DwmAsyncGhostChange.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F6C08 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // al
  int v3; // r15d
  BOOL v4; // r14d
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r15d
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rax
  __int64 v26; // r14
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rax
  unsigned int v33; // edx

  v2 = *((_BYTE *)a2 + 55);
  v3 = 0;
  v4 = 0;
  v7 = 99;
  if ( (v2 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v2 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 392), v9 == gpqForeground) && *(struct tagWND **)(v9 + 80) == a2 )
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 448LL) |= 0x20u;
  else
    v7 = 115;
  if ( *((char *)a2 + 50) < 0 )
  {
    SetOrClrWF(1, a1, 0xA80u, 1);
    v7 |= 0x20u;
  }
  *((_DWORD *)a1 + 72) ^= (*((_DWORD *)a1 + 72) ^ *((_DWORD *)a2 + 72)) & 0x80;
  *((_DWORD *)a1 + 86) = *((_DWORD *)a2 + 86);
  xxxInheritWindowMonitor(a1, (__int64)a2, 1);
  if ( v3 )
  {
    v33 = 7;
  }
  else
  {
    if ( !v4 )
      goto LABEL_10;
    v33 = 3;
  }
  xxxMinMaximizeEx(a1, v33, 1, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v7 |= 2u;
LABEL_10:
  v14 = IsWindowDesktopComposed(a2);
  if ( v14 )
  {
    v15 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
    DwmAsyncGhostChange(v15);
    v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
    DwmAsyncNotifyAnimationChange(v20, 0, *(_QWORD *)a2);
    v25 = (void *)ReferenceDwmApiPort(v22, v21, v23, v24);
    DwmAsyncNotifyAnimationChange(v25, 0, *(_QWORD *)a1);
  }
  SetOrClrWF(0, a1, 0xE01u, 1);
  if ( (*((_BYTE *)a2 + 44) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, a1, 0x420u, 1);
    v26 = 1LL;
  }
  else
  {
    v26 = (__int64)a2;
  }
  SetVisible((__int64)a2, 16);
  v27 = 1;
  if ( gdwDeferWinEvent )
    v27 = 3;
  xxxWindowEvent(0x8003u, (__int64 *)a2, 0, 0, v27);
  xxxSetWindowPosAndBand(a1, v26, 0, 0, 0, 0, v7, 0);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v14 )
  {
    v32 = (void *)ReferenceDwmApiPort(v29, v28, v30, v31);
    DwmAsyncNotifyAnimationChange(v32, 1, *(_QWORD *)a1);
  }
}
