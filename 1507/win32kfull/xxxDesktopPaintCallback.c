/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C0151610
 * Callers:
 *     NtUserPaintMonitor @ 0x1C021E920 (NtUserPaintMonitor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FEC24 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // esi
  __int64 StyleWindow; // rdi
  __int64 v9; // rcx
  struct tagRECT *v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v25; // rcx
  BOOL v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  _DWORD *v41; // rcx
  __int64 v42; // rdx
  struct tagRECT v44; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v9 = 0LL)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1),
        !(_DWORD)v9) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v11 = 0)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v10 = (struct tagRECT *)(a1 + 108),
          !v11) )
    {
      v10 = (struct tagRECT *)(a1 + 76);
    }
  }
  else
  {
    v10 = (struct tagRECT *)(a1 + 92);
  }
  v44 = *v10;
  if ( a2 )
  {
    GreLockVisRgnShared(*gpDispInfo);
    v12 = LookupDC(a2, 0LL);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      if ( v13 && (*(_WORD *)(v13 + 66) & 0x3FFF) == 0x29D && *(PVOID *)(v13 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v12 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v13, 2848);
    }
    GreUnlockVisRgn(*gpDispInfo);
    if ( StyleWindow )
    {
      v14 = *(_DWORD *)(StyleWindow + 112);
      v15 = -*(_DWORD *)(StyleWindow + 116);
      v44.bottom -= *(_DWORD *)(StyleWindow + 116);
      v16 = -v14;
      v44.left += v16;
      v44.right += v16;
      v44.top += v15;
    }
  }
  v18 = IsDPIAbsoluteSysMet(0x43uLL);
  if ( v18 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
    {
      goto LABEL_29;
    }
LABEL_40:
    v25 = (_DWORD *)(gpsi + 2536LL);
    goto LABEL_45;
  }
  if ( IsDPIDWMSysMet(v17)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_40;
  }
LABEL_29:
  if ( IsDPIDWMSysMet(0x43uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v21 = 0)
      : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v21) )
  {
    v25 = (_DWORD *)(gpsi + 2924LL);
  }
  else
  {
    v25 = (_DWORD *)(gpsi + 2148LL);
  }
LABEL_45:
  if ( *v25 || v5 )
  {
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v32, v31);
    EnterSharedCrit(1LL);
    EnterSharedRenderCrit();
    v26 = FillRect(a2, a3, ghbrBlack) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v34, v33);
    EnterCrit(1LL);
    if ( v5 )
      return v26;
  }
  else if ( gbDesktopLocked )
  {
    v26 = 0;
  }
  else
  {
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v28, v27);
    EnterSharedCrit(1LL);
    EnterSharedRenderCrit();
    v26 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 3704LL)) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v30, v29);
    EnterCrit(1LL);
  }
  if ( v18 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
    {
      goto LABEL_54;
    }
  }
  else if ( !IsDPIDWMSysMet(0x43uLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v40 = 0)
           : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v40) )
  {
LABEL_54:
    if ( IsDPIDWMSysMet(0x43uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v37 = 0)
        : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v37) )
    {
      v41 = (_DWORD *)(gpsi + 2924LL);
    }
    else
    {
      v41 = (_DWORD *)(gpsi + 2148LL);
    }
    goto LABEL_70;
  }
  v41 = (_DWORD *)(gpsi + 2536LL);
LABEL_70:
  if ( *v41 )
  {
    v42 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( !v42 || !*(_QWORD *)(*(_QWORD *)(v42 + 8) + 160LL) )
      PaintWatermark(a2, &v44);
  }
  return v26;
}
