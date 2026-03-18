/*
 * XREFs of xxxSetForegroundWindow @ 0x1C00A8FB4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000D420 (xxxSwitchToThisWindow.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxStubSetForegroundWindow @ 0x1C00AB2E0 (xxxStubSetForegroundWindow.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     _GhostWindowFromHungWindow @ 0x1C00A72F8 (_GhostWindowFromHungWindow.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     FRemoveForegroundActivate @ 0x1C00AAF94 (FRemoveForegroundActivate.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012D2CC (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01333B8 (DSW_GetTopLevelCreatorWindow.c)
 */

__int64 __fastcall xxxSetForegroundWindow(struct tagWND *a1, int a2)
{
  unsigned int v2; // esi
  struct tagWND *v4; // rbx
  int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edi
  __int64 v12; // rax
  _QWORD *v13; // rax
  int v14; // eax
  __int64 NonChildAncestor; // rax
  __int64 TopLevelCreatorWindow; // rdi
  unsigned __int16 v17; // r15
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v21[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-40h] BYREF

  v2 = 1;
  v4 = a1;
  v5 = 1;
  v6 = GhostWindowFromHungWindow((__int64)a1);
  if ( v6 )
  {
    v4 = (struct tagWND *)v6;
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v6;
    ++*(_DWORD *)(v6 + 8);
  }
  if ( v4 && *(_QWORD *)(*((_QWORD *)v4 + 2) + 384LL) == gpqForeground )
  {
    if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
    {
LABEL_34:
      v14 = xxxActivateWindow(v4);
LABEL_25:
      v10 = v14;
      goto LABEL_9;
    }
LABEL_15:
    v8 = *((_QWORD *)v4 + 2);
    v7 = *(_QWORD *)(v8 + 384);
    if ( v4 == *(struct tagWND **)(v7 + 88) )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v14 = PostEventMessageEx(v8, v7, 6u, 0LL, 0, 0LL, *(_QWORD *)v4, 0LL);
    goto LABEL_25;
  }
  if ( !(unsigned int)CheckForegroundRight(v4) )
  {
    v5 = 0;
    if ( !v4 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    if ( a2 )
    {
      NonChildAncestor = GetNonChildAncestor((__int64)v4);
      TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(NonChildAncestor);
      if ( (unsigned int)IsTrayWindow(TopLevelCreatorWindow) )
      {
        v17 = 2;
      }
      else
      {
        TopLevelCreatorWindow = (__int64)v4;
        v17 = 3;
      }
      if ( *(_DWORD *)(TopLevelCreatorWindow + 304) != 15 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(TopLevelCreatorWindow) )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x22u, *(_QWORD *)TopLevelCreatorWindow);
        }
        else
        {
          v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v22;
          v22[1] = TopLevelCreatorWindow;
          ++*(_DWORD *)(TopLevelCreatorWindow + 8);
          v18 = (_DWORD *)UPDWORDPointer(8196LL);
          xxxFlashWindow((struct tagWND *)TopLevelCreatorWindow, v17 | ((unsigned __int16)*v18 << 16) | 0xC, 0);
          ThreadUnlock1(v20, v19);
        }
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(*((_QWORD *)v4 + 2) + 384LL) )
      goto LABEL_34;
    goto LABEL_15;
  }
  FRemoveForegroundActivate(gptiCurrent);
  if ( IAMThreadAccessGranted(gptiCurrent) && v4 )
    FRemoveForegroundActivate(*((_QWORD *)v4 + 2));
  v9 = xxxSetForegroundWindow2((LARGE_INTEGER *)v4, gptiCurrent, 0, 0);
  v10 = v9;
  if ( v4 )
  {
    if ( !v9 )
    {
      v7 = grpdeskRitInput;
      if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput )
      {
        v7 = *(unsigned int *)v4;
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7 + gSharedInfo[1] + 17LL) & 1) == 0
          && !IAMThreadAccessGranted(gptiCurrent)
          && *((_DWORD *)v4 + 76) != 15
          && (unsigned int)IsImmersiveBandOrShellManaged(v4) )
        {
          v12 = GetNonChildAncestor(v8);
          v13 = (_QWORD *)DSW_GetTopLevelCreatorWindow(v12);
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x22u, *v13);
        }
      }
    }
  }
LABEL_9:
  if ( v6 )
    ThreadUnlock1(v8, v7);
  if ( !v5 || !v10 )
    return 0;
  return v2;
}
