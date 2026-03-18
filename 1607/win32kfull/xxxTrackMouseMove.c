/*
 * XREFs of xxxTrackMouseMove @ 0x1C009DDCC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     ThreadLockExchangeAlways @ 0x1C005E968 (ThreadLockExchangeAlways.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C011F72C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011F924 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C0121224 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0133CEC (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014FAB0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01CF1DC (xxxNotifyShellWindowBorderEnter.c)
 *     GetActiveTrackPwnd @ 0x1C01D8540 (GetActiveTrackPwnd.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // r15
  unsigned int v4; // esi
  struct tagWND *v6; // rbx
  __int64 v7; // rdi
  struct tagWND *v8; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  unsigned int v10; // ecx
  __int64 *v11; // r13
  __int64 v12; // r9
  BOOL v13; // r12d
  int v14; // r15d
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned __int16 *v21; // rax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 ActiveTrackPwnd; // rax
  int v30; // ebx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v35; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+50h] [rbp-11h]
  _QWORD v37[3]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v38[32]; // [rsp+78h] [rbp+17h] BYREF

  v3 = gptiCurrent;
  v4 = 0;
  v6 = a1;
  v7 = *(_QWORD *)(gptiCurrent + 408LL);
  v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v37;
  ++*((_DWORD *)a1 + 2);
  v37[1] = a1;
  if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a1) )
    {
      if ( (*((_BYTE *)v6 + 291) & 4) == 0 && *((_QWORD *)v6 + 11) == GetMessageWindow((__int64)v6) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v8);
        if ( CompositionInputWindowUIOwner )
        {
          v6 = CompositionInputWindowUIOwner;
          ThreadLockExchangeAlways((__int64)CompositionInputWindowUIOwner, (__int64)v37);
          v3 = gptiCurrent;
        }
      }
    }
  }
  v10 = *(_DWORD *)(v7 + 32);
  v11 = (__int64 *)(v7 + 176);
  v12 = *(_QWORD *)(v7 + 176);
  v13 = v12 != (_QWORD)v6;
  if ( (v10 & 0x5C0) != 0 && v12 )
  {
    v15 = *(_QWORD *)(v12 + 16);
    v16 = *(_QWORD *)(v15 + 384);
    if ( *(_QWORD *)(*(_QWORD *)v3 + 384LL) == v16 )
    {
      v4 = 1024;
    }
    else if ( (v10 & 0x500) != 0 )
    {
      PostEventMessageEx(v15, v16, 0xBu, v12, v10, *(int *)(v7 + 184), 1024LL, 0LL);
      *(_DWORD *)(v7 + 32) &= 0xFFFFFAFF;
    }
    v14 = a3;
    if ( a2 == 1 || a3 != 512 )
      v4 |= 0x100u;
    if ( v13 || (*(_DWORD *)(v7 + 184) == 1) != (a2 == 1) )
      v4 |= 0xC0u;
    PushW32ThreadLock(v7, v38, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v17 = *v11;
    v35 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v35;
    v36 = v17;
    ++*(_DWORD *)(v17 + 8);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 32), *v11, *(unsigned int *)(v7 + 184), v4);
    ThreadUnlock1(v19, v18);
    *(_DWORD *)(v7 + 32) &= ~v4;
  }
  else
  {
    PushW32ThreadLock(v7, v38, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v14 = a3;
  }
  if ( a2 != 1 && v14 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (_WORD)a2 == 69 && (unsigned int)xxxHotTrackMenu(v6, HIWORD(a2), 1) )
      *(_DWORD *)(v7 + 32) |= 0x400u;
    v20 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 104));
    if ( v20 )
    {
      v21 = IsTooltipHittest(v6, (unsigned __int16)a2);
      if ( v21 )
      {
        v35 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v35;
        v36 = v20;
        ++*(_DWORD *)(v20 + 8);
        v22 = (*(_BYTE *)(v20 + 55) & 0x10) == 0;
        *(_QWORD *)(v20 + 400) = v21;
        if ( v22 )
        {
          SetTooltipTimer((struct tagTOOLTIPWND *)v20, 1u, *(_DWORD *)(v20 + 360));
          v23 = 1;
        }
        else
        {
          xxxSetWindowPos(v20, 0, 0, 0, 0, 0, 151);
          v23 = xxxShowTooltip((struct tagTOOLTIPWND *)v20);
        }
        if ( v23 )
          *(_DWORD *)(v7 + 32) |= 0x300u;
      }
      else
      {
        v35 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v35;
        v36 = v20;
        ++*(_DWORD *)(v20 + 8);
        xxxResetTooltip((struct tagWND *)v20);
      }
      ThreadUnlock1(v25, v24);
    }
  }
  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64LL) )
    goto LABEL_48;
  if ( v13 )
  {
    if ( *v11 )
      xxxNotifyShellWindowBorderExitIfEntered(*v11);
    if ( (unsigned int)(a2 - 10) > 1 || (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)v6 + 3), 8LL) )
      goto LABEL_48;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 184) == a2 )
      goto LABEL_55;
    xxxNotifyShellWindowBorderExitIfEntered(v6);
    if ( (unsigned int)(a2 - 10) > 1 || (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)v6 + 3), 8LL) )
      goto LABEL_55;
  }
  xxxNotifyShellWindowBorderEnter(v6);
LABEL_48:
  if ( v13 )
  {
    HMAssignmentLock(v7 + 176, v6);
    if ( v14 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v6, 0LL);
        v30 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v31 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v30, 65527, *v31, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) |= 0x200000u;
      }
    }
  }
LABEL_55:
  *(_DWORD *)(v7 + 184) = a2;
  PopAndFreeW32ThreadLock((__int64)v38, v26, v27, v28);
  return ThreadUnlock1(v33, v32);
}
