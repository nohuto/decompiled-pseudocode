/*
 * XREFs of xxxSetForegroundWindow @ 0x1C00450B0
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxStubSetForegroundWindow @ 0x1C0044440 (xxxStubSetForegroundWindow.c)
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxSwitchToThisWindow @ 0x1C0100900 (xxxSwitchToThisWindow.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     FRemoveForegroundActivate @ 0x1C0044FE4 (FRemoveForegroundActivate.c)
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     _GhostWindowFromHungWindow @ 0x1C00873C0 (_GhostWindowFromHungWindow.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00FFE6C (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0100DE8 (DSW_GetTopLevelCreatorWindow.c)
 */

__int64 __fastcall xxxSetForegroundWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // edi
  struct tagWND *v6; // rbx
  int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edi
  int v14; // eax
  __int64 NonChildAncestor; // rax
  __int64 TopLevelCreatorWindow; // rdi
  unsigned __int16 v17; // r15
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD v23[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 1;
  v5 = a2;
  v6 = a1;
  v7 = 1;
  v8 = GhostWindowFromHungWindow(a1, a2, a3, a4);
  if ( v8 )
  {
    v6 = (struct tagWND *)v8;
    v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v23;
    v23[1] = v8;
    ++*(_DWORD *)(v8 + 8);
  }
  if ( v6 )
  {
    v9 = *((_QWORD *)v6 + 2);
    v10 = *(_QWORD *)(v9 + 392);
    if ( v10 == gpqForeground )
    {
      if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
      {
LABEL_24:
        v14 = xxxActivateWindow(v6, 1LL);
LABEL_25:
        v12 = v14;
        goto LABEL_9;
      }
LABEL_15:
      if ( v6 == *(struct tagWND **)(v10 + 80) )
      {
        v12 = 1;
        goto LABEL_9;
      }
      v14 = PostEventMessageEx(v9, v10, 6, 0, 0, 0LL, *(_QWORD *)v6, 0LL);
      goto LABEL_25;
    }
  }
  if ( !(unsigned int)CheckForegroundRight(v6) )
  {
    v7 = 0;
    if ( !v6 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    if ( v5 )
    {
      NonChildAncestor = GetNonChildAncestor(v6);
      TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(NonChildAncestor);
      if ( (unsigned int)IsTrayWindow(TopLevelCreatorWindow) )
      {
        v17 = 2;
      }
      else
      {
        TopLevelCreatorWindow = (__int64)v6;
        v17 = 3;
      }
      if ( *(_DWORD *)(TopLevelCreatorWindow + 304) != 15 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(TopLevelCreatorWindow) )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 34LL, *(_QWORD *)TopLevelCreatorWindow);
        }
        else
        {
          v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v24;
          v24[1] = TopLevelCreatorWindow;
          ++*(_DWORD *)(TopLevelCreatorWindow + 8);
          v18 = (_DWORD *)UPDWORDPointer(8196LL);
          xxxFlashWindow(TopLevelCreatorWindow, v17 | ((unsigned __int16)*v18 << 16) | 0xCu, 0LL);
          ThreadUnlock1(v20, v19);
        }
      }
    }
    v9 = *((_QWORD *)v6 + 2);
    v10 = *(_QWORD *)(v9 + 392);
    if ( *(_QWORD *)(gptiCurrent + 392LL) == v10 )
      goto LABEL_24;
    goto LABEL_15;
  }
  FRemoveForegroundActivate(gptiCurrent);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) && v6 )
    FRemoveForegroundActivate(*((_QWORD *)v6 + 2));
  v11 = xxxSetForegroundWindow2(v6);
  v12 = v11;
  if ( v6 )
  {
    if ( !v11 )
    {
      v10 = grpdeskRitInput;
      if ( *(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput )
      {
        v10 = *(unsigned int *)v6;
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v10 + gSharedInfo[1] + 17LL) & 1) == 0
          && !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
          && *((_DWORD *)v6 + 76) != 15
          && (unsigned int)IsImmersiveBandOrShellManaged(v6) )
        {
          v21 = GetNonChildAncestor(v9);
          v22 = (_QWORD *)DSW_GetTopLevelCreatorWindow(v21);
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 34LL, *v22);
        }
      }
    }
  }
LABEL_9:
  if ( v8 )
    ThreadUnlock1(v9, v10);
  if ( !v7 || !v12 )
    return 0;
  return v4;
}
