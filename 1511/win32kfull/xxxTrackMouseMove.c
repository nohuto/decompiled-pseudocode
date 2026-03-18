/*
 * XREFs of xxxTrackMouseMove @ 0x1C00C6FC4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C7308 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C7394 (xxxCancelMouseMoveTracking.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C00C748C (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C75B4 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00C76BC (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     _SetSystemTimer @ 0x1C00CA594 (_SetSystemTimer.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014A3C8 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01D8164 (xxxNotifyShellWindowBorderEnter.c)
 *     GetActiveTrackPwnd @ 0x1C01E23E0 (GetActiveTrackPwnd.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, int a2, int a3)
{
  unsigned int v3; // esi
  struct tagWND *v6; // rbx
  __int64 v7; // r11
  __int64 v8; // rdi
  unsigned int v9; // ecx
  __int64 *v10; // r13
  __int64 v11; // r9
  BOOL v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int16 *v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  struct tagWND *v28; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 ActiveTrackPwnd; // rax
  int v32; // ebx
  _DWORD *v33; // rax
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h]
  _QWORD v36[3]; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v6 = a1;
  v7 = gptiCurrent;
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a1) )
    {
      if ( (*((_BYTE *)v6 + 291) & 4) == 0 && *((_QWORD *)v6 + 11) == GetMessageWindow((__int64)v6) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v28);
        if ( CompositionInputWindowUIOwner )
          v6 = CompositionInputWindowUIOwner;
      }
    }
  }
  v9 = *(_DWORD *)(v8 + 32);
  v10 = (__int64 *)(v8 + 176);
  v11 = *(_QWORD *)(v8 + 176);
  v12 = v11 != (_QWORD)v6;
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v16 = *(_QWORD *)(v11 + 16);
    v17 = *(_QWORD *)(v16 + 384);
    if ( *(_QWORD *)(v7 + 384) == v17 )
    {
      v3 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx(v16, v17, 0xBu, v11, v9, *(int *)(v8 + 184), 1024LL, 0LL);
      *(_DWORD *)(v8 + 32) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || a3 != 512 )
      v3 |= 0x100u;
    if ( v12 || (*(_DWORD *)(v8 + 184) == 1) != (a2 == 1) )
      v3 |= 0xC0u;
    PushW32ThreadLock(v8, v36, UserDereferenceObject);
    ObfReferenceObject((PVOID)v8);
    v18 = *v10;
    v34 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v34;
    v35 = v18;
    ++*(_DWORD *)(v18 + 8);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v8 + 32), *v10, *(unsigned int *)(v8 + 184), v3);
    ThreadUnlock1(v20, v19);
    *(_DWORD *)(v8 + 32) &= ~v3;
  }
  else
  {
    PushW32ThreadLock(v8, v36, UserDereferenceObject);
    ObfReferenceObject((PVOID)v8);
  }
  if ( a2 != 1 && a3 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (_WORD)a2 == 69 && (unsigned int)xxxHotTrackMenu(v6, HIWORD(a2), 1) )
      *(_DWORD *)(v8 + 32) |= 0x400u;
    v21 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v8 + 104));
    if ( v21 )
    {
      v22 = IsTooltipHittest(v6, (unsigned __int16)a2);
      if ( v22 )
      {
        v34 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v34;
        v35 = v21;
        ++*(_DWORD *)(v21 + 8);
        v23 = (*(_BYTE *)(v21 + 55) & 0x10) == 0;
        *(_QWORD *)(v21 + 416) = v22;
        if ( v23 )
        {
          SetTooltipTimer((struct tagTOOLTIPWND *)v21, 1u, *(_DWORD *)(v21 + 376));
          v26 = 1;
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v21, 0, 0, 0, 0, 0, 1175);
          v26 = xxxShowTooltip((struct tagTOOLTIPWND *)v21);
        }
        if ( v26 )
          *(_DWORD *)(v8 + 32) |= 0x300u;
      }
      else
      {
        v34 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v34;
        v35 = v21;
        ++*(_DWORD *)(v21 + 8);
        xxxResetTooltip((struct tagWND *)v21);
      }
      ThreadUnlock1(v25, v24);
    }
  }
  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v8, 64) )
    goto LABEL_12;
  if ( v12 )
  {
    if ( *v10 )
      xxxNotifyShellWindowBorderExitIfEntered(*v10, v13, v14);
    if ( (unsigned int)(a2 - 10) > 1 || (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)v6 + 3), 8) )
      goto LABEL_12;
  }
  else
  {
    if ( *(_DWORD *)(v8 + 184) == a2 )
      goto LABEL_8;
    xxxNotifyShellWindowBorderExitIfEntered(v6, v13, v14);
    if ( (unsigned int)(a2 - 10) > 1 )
      goto LABEL_8;
    if ( (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)v6 + 3), 8) )
      goto LABEL_8;
  }
  xxxNotifyShellWindowBorderEnter(v6);
LABEL_12:
  if ( v12 )
  {
    HMAssignmentLock(v8 + 176, v6);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v6, 0LL);
        v32 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v33 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v32, 65527, *v33, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) |= 0x200000u;
      }
    }
  }
LABEL_8:
  *(_DWORD *)(v8 + 184) = a2;
  return PopAndFreeW32ThreadLock((__int64)v36);
}
