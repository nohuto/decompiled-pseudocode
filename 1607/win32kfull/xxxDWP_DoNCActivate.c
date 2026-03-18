/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00AD2F8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0142C30 (xxxEndMenuLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DwmAsyncActivationChange @ 0x1C00AD430 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00AD4C4 (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x1C00AE9BC (-AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  int v5; // r13d
  unsigned __int16 v6; // r15
  __int64 v7; // rsi
  __int64 DCEx; // rbp
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  int WindowBorders; // r12d
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  _DWORD *v42; // rcx
  unsigned int v43; // esi
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // ecx
  _DWORD *v70; // rcx

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow() )
  {
    SetOrClrWF(1, a1, 0x40u, 1);
    v5 = 4109;
  }
  else
  {
    SetOrClrWF(0, a1, 0x40u, 1);
  }
  if ( a3 != -1 && (*((_BYTE *)a1 + 55) & 0x10) != 0 && (*((_BYTE *)a1 + 41) & 1) == 0 )
  {
    v6 = AreNonClientAreasToBePainted(a1);
    if ( v6 )
    {
      v7 = UserValidateCopyRgn(a3);
      DCEx = _GetDCEx(a1, v7, 65537LL);
      if ( DCEx )
      {
        if ( (*((_BYTE *)a1 + 40) & 1) == 0 )
        {
LABEL_11:
          xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v6);
          _ReleaseDC(DCEx);
          goto LABEL_12;
        }
        WindowBorders = GetWindowBorders(*((unsigned int *)a1 + 13), *((unsigned int *)a1 + 12));
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) != 0 )
            goto LABEL_19;
        }
        else if ( !IsDPIDWMSysMet(v17)
               || (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
                 ? (v41 = 0)
                 : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v38,
                                                                v39,
                                                                v40)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v41) )
        {
LABEL_19:
          if ( IsDPIDWMSysMet(5uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
              ? (v30 = 0)
              : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v27,
                                                             v28,
                                                             v29)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v30) )
          {
            v42 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v42 = (_DWORD *)(gpsi + 1900LL);
          }
LABEL_34:
          v43 = WindowBorders * *v42;
          if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) != 0 )
              goto LABEL_36;
          }
          else if ( !IsDPIDWMSysMet(v45)
                 || (W32GetCurrentThreadDpiAwarenessContext(v60, v59, v61, v62) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 408)
                   ? (v69 = 0)
                   : (v69 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v66,
                                                                  v67,
                                                                  v68)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v69) )
          {
LABEL_36:
            if ( IsDPIDWMSysMet(6uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v50, v51) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 408)
                ? (v58 = 0)
                : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v55,
                                                               v56,
                                                               v57)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v58) )
            {
              v70 = (_DWORD *)(gpsi + 2680LL);
            }
            else
            {
              v70 = (_DWORD *)(gpsi + 1904LL);
            }
            goto LABEL_51;
          }
          v70 = (_DWORD *)(gpsi + 2292LL);
LABEL_51:
          xxxMenuBarDraw(a1, DCEx, v43, (unsigned int)(WindowBorders * *v70));
          goto LABEL_11;
        }
        v42 = (_DWORD *)(gpsi + 2288LL);
        goto LABEL_34;
      }
      GreDeleteObject(v7);
    }
  }
LABEL_12:
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
  {
    if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
    {
      v14 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
      return DwmAsyncActivationChange(v14);
    }
  }
  return result;
}
