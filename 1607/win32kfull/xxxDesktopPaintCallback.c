/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C012D500
 * Callers:
 *     NtUserPaintMonitor @ 0x1C0218370 (NtUserPaintMonitor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F67B0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, __int64 a2, const RECT *a3, __int64 a4)
{
  HDC v4; // rbp
  int v5; // esi
  __int64 StyleWindow; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagRECT *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  BOOL v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // ecx
  __int64 v78; // rdx
  struct tagRECT v79; // [rsp+30h] [rbp-28h] BYREF

  v4 = (HDC)a2;
  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    v4 = *(HDC *)(a4 + 8);
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, (__int64)a3, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12) + 408)
      ? (v10 = 0LL)
      : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v10) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != 1
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 408)
        ? (v55 = 0)
        : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v52,
                                                       v53,
                                                       v54)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v16 = (struct tagRECT *)(a1 + 108),
          !v55) )
    {
      v16 = (struct tagRECT *)(a1 + 76);
    }
  }
  else
  {
    v16 = (struct tagRECT *)(a1 + 92);
  }
  v79 = *v16;
  if ( v4 )
  {
    GreLockVisRgnShared(*gpDispInfo);
    v17 = LookupDC(v4, 0LL);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 16);
      if ( v18 && (*(_WORD *)(v18 + 66) & 0x3FFF) == 0x29D && *(PVOID *)(v18 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v17 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v18, 2848);
    }
    GreUnlockVisRgn(*gpDispInfo);
    if ( StyleWindow )
    {
      v56 = *(_DWORD *)(StyleWindow + 112);
      v57 = -*(_DWORD *)(StyleWindow + 116);
      v79.bottom -= *(_DWORD *)(StyleWindow + 116);
      v58 = -v56;
      v79.left += v58;
      v79.right += v58;
      v79.top += v57;
    }
  }
  v21 = IsDPIAbsoluteSysMet(0x43uLL);
  if ( v21 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v22, v23) & 0xF) == 0 )
    {
LABEL_52:
      v32 = (_DWORD *)(gpsi + 2536LL);
      goto LABEL_20;
    }
  }
  else if ( IsDPIDWMSysMet(v20)
         && (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v30, v31)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_52;
  }
  if ( IsDPIDWMSysMet(0x43uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v30, v31) + 408)
      ? (v63 = 0)
      : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v30, v31)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v63) )
  {
    v32 = (_DWORD *)(gpsi + 2924LL);
  }
  else
  {
    v32 = (_DWORD *)(gpsi + 2148LL);
  }
LABEL_20:
  if ( !*v32 && !v5 )
  {
    if ( gbDesktopLocked )
    {
      v35 = 0;
    }
    else
    {
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit(v49, v48);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit();
      v35 = FillRect(v4, a3, *(HBRUSH *)(gpsi + 5096LL)) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit(v51, v50);
      EnterCrit(0LL, 1LL);
    }
LABEL_27:
    if ( v21 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v32, v28, v30, v31) & 0xF) == 0 )
      {
LABEL_70:
        v47 = (_DWORD *)(gpsi + 2536LL);
LABEL_31:
        if ( *v47 )
        {
          v78 = *(_QWORD *)(gptiCurrent + 408LL);
          if ( !v78 || !*(_QWORD *)(*(_QWORD *)(v78 + 8) + 160LL) )
            PaintWatermark(v4, &v79);
        }
        return v35;
      }
    }
    else if ( IsDPIDWMSysMet(0x43uLL)
           && (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_70;
    }
    if ( IsDPIDWMSysMet(0x43uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73) + 408)
        ? (v77 = 0)
        : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v74,
                                                       v75,
                                                       v76)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v77) )
    {
      v47 = (_DWORD *)(gpsi + 2924LL);
    }
    else
    {
      v47 = (_DWORD *)(gpsi + 2148LL);
    }
    goto LABEL_31;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v34, v33);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v35 = FillRect(v4, a3, ghbrBlack) != 0;
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v37, v36);
  EnterCrit(0LL, 1LL);
  if ( !v5 )
    goto LABEL_27;
  return v35;
}
