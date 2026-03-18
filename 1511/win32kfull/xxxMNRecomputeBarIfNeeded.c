/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C023B3B4
 * Callers:
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxGetMenuItemRect @ 0x1C0143B88 (xxxGetMenuItemRect.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C023B734 (xxxMenuItemFromPoint.c)
 *     xxxHiliteMenuItem @ 0x1C0244814 (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C0013EA8 (xxxMenuBarCompute.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetCaptionHeight @ 0x1C00757A8 (GetCaptionHeight.c)
 *     GetWindowBordersForDpi @ 0x1C00761EC (GetWindowBordersForDpi.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // eax
  int WindowBordersForDpi; // ebp
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  _DWORD *v16; // rcx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  _DWORD *v25; // rcx
  int v26; // ebx
  int CaptionHeight; // eax

  result = *(unsigned int *)(a2 + 40);
  if ( (result & 0x80u) == 0LL && (*(_QWORD *)(a2 + 72) != a1 || !*(_DWORD *)(a2 + 56) || !*(_DWORD *)(a2 + 60)) )
  {
    if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 360);
    }
    else if ( *(_DWORD *)(a1 + 344) )
    {
      v7 = *(unsigned __int16 *)(gpsi + 7286LL);
    }
    else
    {
      v7 = 96;
    }
    WindowBordersForDpi = GetWindowBordersForDpi(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), a3, a4, v7);
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
      {
        goto LABEL_13;
      }
    }
    else if ( !IsDPIDWMSysMet(v9)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v15 = 0)
             : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v15) )
    {
LABEL_13:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v12 = 0)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v12) )
      {
        v16 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v16 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_29:
      v17 = WindowBordersForDpi * *v16;
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
        {
          goto LABEL_32;
        }
      }
      else if ( !IsDPIDWMSysMet(v18)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v24 = 0)
               : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v24) )
      {
LABEL_32:
        if ( IsDPIDWMSysMet(6uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v21 = 0)
            : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v21) )
        {
          v25 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v25 = (_DWORD *)(gpsi + 1904LL);
        }
        goto LABEL_48;
      }
      v25 = (_DWORD *)(gpsi + 2292LL);
LABEL_48:
      v26 = WindowBordersForDpi * *v25;
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               (struct tagMENU *)a2,
               a1,
               (unsigned int)(CaptionHeight + v26),
               v17,
               *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - 2 * v17);
    }
    v16 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_29;
  }
  return result;
}
