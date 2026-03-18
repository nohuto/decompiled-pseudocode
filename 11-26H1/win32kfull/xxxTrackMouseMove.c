/*
 * XREFs of xxxTrackMouseMove @ 0x14027D0C8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _SetSystemTimer @ 0x1401DA8CC (_SetSystemTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x1401EC124 (xxxCancelMouseMoveTracking.c)
 *     SetRITTimer @ 0x1401F74F0 (SetRITTimer.c)
 *     xxxHotTrack @ 0x14020D1B8 (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YA_NPEAUtagWND@@I@Z @ 0x140214008 (-IsTooltipHittest@@YA_NPEAUtagWND@@I@Z.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x140251798 (-ManualLock@-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x140257A58 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x14025DBE4 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     GetActiveTrackPwnd @ 0x140296108 (GetActiveTrackPwnd.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1402EF498 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     Feature_TouchpadHapticsFollowUps__private_IsEnabledDeviceUsageNoInline @ 0x1402EF60C (Feature_TouchpadHapticsFollowUps__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagDESKTOP *a1, struct tagWND *a2, int a3, __int64 a4)
{
  unsigned int v5; // esi
  const struct tagWND *v6; // rdi
  int v7; // r14d
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v12; // r15
  const struct tagWND *v13; // r13
  struct tagTHREADINFO *v14; // r15
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  struct tagQ *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 ActiveTrackPwnd; // rdi
  unsigned int *v30; // rax
  struct tagTHREADINFO *v31; // rax
  __int64 result; // rax
  ULONG_PTR v33; // [rsp+48h] [rbp-19h] BYREF
  struct tagWND *v34; // [rsp+50h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+58h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v37; // [rsp+88h] [rbp+27h]

  v37 = -1LL;
  BugCheckParameter3[2] = 0LL;
  v5 = (unsigned int)a2;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v6 = a1;
  v7 = 0;
  v8 = *((_QWORD *)PtiCurrent((__int64)a1) + 61);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v33, (__int64)v6);
  if ( a3 == 512 )
  {
    v10 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 66796);
    if ( (v10 & 1) != 0 )
    {
      if ( (unsigned int)IsIndependentInputWindow(v6) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v10);
        if ( CompositionInputWindowUIOwner )
        {
          v12 = v34;
          v34 = CompositionInputWindowUIOwner;
          v6 = CompositionInputWindowUIOwner;
          HMLockObject(CompositionInputWindowUIOwner);
          if ( v12 )
            HMUnlockObject(v12);
        }
      }
    }
  }
  v13 = *(const struct tagWND **)(v8 + 192);
  if ( (*(_DWORD *)(v8 + 48) & 0x3C0) != 0 && v13 )
  {
    v14 = (struct tagTHREADINFO *)*((_QWORD *)v13 + 2);
    v15 = PtiCurrent(v10);
    v17 = (struct tagQ *)*((_QWORD *)v14 + 58);
    if ( *((struct tagQ **)v15 + 58) == v17 )
    {
      v7 = 512;
      if ( v14 != PtiCurrent(v16) && (*(_DWORD *)(v8 + 48) & 0x100) != 0 )
      {
        PostEventMessageWindow(*(struct tagTHREADINFO ***)(v8 + 192), 0x1Au, *(int *)(v8 + 200), 1LL);
        *(_DWORD *)(v8 + 48) &= ~0x100u;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v8 + 48);
      if ( (v18 & 0x200) != 0 )
      {
        PostEventMessageEx(v14, v17, 0xBu, *(struct tagWND **)(v8 + 192), v18, *(int *)(v8 + 200), 512LL, 0LL);
        *(_DWORD *)(v8 + 48) &= ~0x200u;
      }
    }
    if ( v5 == 1 || a3 != 512 )
      v7 |= 0x100u;
    if ( v13 != v6 || (v5 == 1) != (*(_DWORD *)(v8 + 200) == 1) )
      v7 |= 0xC0u;
    Win32RawLockedNtObject<tagDESKTOP>::ManualLock(BugCheckParameter2, v8);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(v8 + 192));
    xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 192), *(_DWORD *)(v8 + 200), v7);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    *(_DWORD *)(v8 + 48) &= ~v7;
  }
  else
  {
    Win32RawLockedNtObject<tagDESKTOP>::ManualLock(BugCheckParameter2, v8);
  }
  if ( v5 != 1 && a3 == 512 && (*(_DWORD *)(W32GetUserSessionState(v20, v19) + 66796) & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(v6, v5, 1) )
      *(_DWORD *)(v8 + 48) |= 0x200u;
    if ( IsTooltipHittest(v6, (unsigned __int16)v5) )
    {
      if ( (*(_DWORD *)(v8 + 48) & 0x100) != 0 )
      {
        xxxTooltipCallback(0, 0LL, 0LL);
        xxxCreateTooltip((struct tagDESKTOP *)v8, v6, v5);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v22, v21);
        *(_QWORD *)(v8 + 120) = SetRITTimer(
                                  *(_QWORD *)(v8 + 120),
                                  3 * *(_DWORD *)(UserSessionState + 14712),
                                  (__int64)TooltipRitShowTimerCallback,
                                  1);
      }
    }
    else
    {
      v24 = *(_QWORD *)(v8 + 120);
      if ( v24 )
      {
        FindTimer(0LL, v24, 4u, 1, 0LL);
        *(_QWORD *)(v8 + 120) = 0LL;
      }
      v25 = *(_DWORD *)(v8 + 48);
      if ( (v25 & 0x100) != 0 )
      {
        *(_DWORD *)(v8 + 48) = v25 & 0xFFFFFEFF;
        xxxTooltipCallback(0, 0LL, 0LL);
      }
    }
  }
  NotifyShell::HitTestPartUpdate((NotifyShell *)v8, v6, (struct tagWND *)v5, a4);
  if ( !(unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_45;
  if ( !(unsigned int)Feature_TouchpadHapticsFollowUps__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 != 20 )
      goto LABEL_45;
    if ( *(_DWORD *)(v8 + 200) == 20 && v13 == v6 )
      goto LABEL_52;
LABEL_44:
    InputHapticsTrigger(2LL);
    goto LABEL_45;
  }
  if ( v5 == 20 && *(_DWORD *)(v8 + 200) != 20 )
    goto LABEL_44;
LABEL_45:
  if ( v13 != v6 )
  {
    BugCheckParameter3[1] = (ULONG_PTR)v6;
    BugCheckParameter3[0] = v8 + 192;
    HMAssignmentLock(BugCheckParameter3, 1LL);
    if ( a3 == 512 && (*(_DWORD *)(W32GetUserSessionState(v27, v26) + 66796) & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v6);
        if ( ActiveTrackPwnd )
        {
          v30 = (unsigned int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527LL, *v30, (__int64)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        v31 = PtiCurrent(v28);
        *(_DWORD *)(*((_QWORD *)v31 + 58) + 436LL) |= 0x200000u;
      }
    }
  }
LABEL_52:
  *(_DWORD *)(v8 + 200) = v5;
  result = Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&v33);
  if ( v37 != -1 )
    return PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return result;
}
