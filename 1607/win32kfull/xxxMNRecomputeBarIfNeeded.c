/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C0232EDC
 * Callers:
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxGetMenuItemRect @ 0x1C014A408 (xxxGetMenuItemRect.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C02331F4 (xxxMenuItemFromPoint.c)
 *     xxxHiliteMenuItem @ 0x1C023A75C (xxxHiliteMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 *     GetCaptionHeight @ 0x1C011CE48 (GetCaptionHeight.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  int WindowBordersForDpi; // ebp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  _DWORD *v36; // rcx
  unsigned int v37; // r14d
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // ecx
  _DWORD *v64; // rcx
  int v65; // ebx
  int CaptionHeight; // eax

  result = *(unsigned int *)(a2 + 40);
  if ( (result & 0x80u) == 0LL && (*(_QWORD *)(a2 + 72) != a1 || !*(_DWORD *)(a2 + 56) || !*(_DWORD *)(a2 + 60)) )
  {
    if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 356);
    }
    else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 244LL) & 1) != 0 )
    {
      v7 = 96;
    }
    else
    {
      v7 = *(unsigned __int16 *)(gpsi + 8678LL);
    }
    WindowBordersForDpi = GetWindowBordersForDpi(*(unsigned int *)(a1 + 52), *(unsigned int *)(a1 + 48), a3, a4, v7);
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) != 0 )
        goto LABEL_14;
    }
    else if ( !IsDPIDWMSysMet(v11)
           || (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
             ? (v35 = 0)
             : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v32,
                                                            v33,
                                                            v34)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v35) )
    {
LABEL_14:
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
          ? (v24 = 0)
          : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v21,
                                                         v22,
                                                         v23)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v24) )
      {
        v36 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v36 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_29:
      v37 = WindowBordersForDpi * *v36;
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) != 0 )
          goto LABEL_31;
      }
      else if ( !IsDPIDWMSysMet(v39)
             || (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
               ? (v63 = 0)
               : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v60,
                                                              v61,
                                                              v62)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v63) )
      {
LABEL_31:
        if ( IsDPIDWMSysMet(6uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
            ? (v52 = 0)
            : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v49,
                                                           v50,
                                                           v51)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v52) )
        {
          v64 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v64 = (_DWORD *)(gpsi + 1904LL);
        }
        goto LABEL_46;
      }
      v64 = (_DWORD *)(gpsi + 2292LL);
LABEL_46:
      v65 = WindowBordersForDpi * *v64;
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               (struct tagMENU *)a2,
               a1,
               (unsigned int)(CaptionHeight + v65),
               v37,
               *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - 2 * v37);
    }
    v36 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_29;
  }
  return result;
}
