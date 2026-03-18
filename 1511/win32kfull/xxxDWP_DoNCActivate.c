/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00CADC0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C013A060 (xxxEndMenuLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DwmAsyncActivationChange @ 0x1C00CAF00 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00CAF94 (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x1C00CBE8C (-AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z.c)
 *     GetWindowBorders @ 0x1C00CBEDC (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C0241E10 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  int v5; // r13d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  unsigned __int16 v12; // r15
  __int64 v13; // rsi
  __int64 DCEx; // rbp
  int WindowBorders; // r12d
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  _DWORD *v23; // rcx
  unsigned int v24; // esi
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  _DWORD *v32; // rcx

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
    v12 = AreNonClientAreasToBePainted(a1);
    if ( v12 )
    {
      v13 = UserValidateCopyRgn(a3);
      DCEx = _GetDCEx(a1, v13, 65537LL);
      if ( DCEx )
      {
        if ( (*((_BYTE *)a1 + 40) & 1) == 0 )
        {
LABEL_15:
          xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v12);
          _ReleaseDC(DCEx);
          goto LABEL_6;
        }
        WindowBorders = GetWindowBorders(*((unsigned int *)a1 + 13), *((unsigned int *)a1 + 12));
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
          {
            goto LABEL_20;
          }
        }
        else if ( !IsDPIDWMSysMet(v16)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v22 = 0)
                 : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v22) )
        {
LABEL_20:
          if ( IsDPIDWMSysMet(5uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v19 = 0)
              : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v19) )
          {
            v23 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v23 = (_DWORD *)(gpsi + 1900LL);
          }
LABEL_36:
          v24 = WindowBorders * *v23;
          if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
            {
              goto LABEL_39;
            }
          }
          else if ( !IsDPIDWMSysMet(v25)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v31 = 0)
                   : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v31) )
          {
LABEL_39:
            if ( IsDPIDWMSysMet(6uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v28 = 0)
                : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v28) )
            {
              v32 = (_DWORD *)(gpsi + 2680LL);
            }
            else
            {
              v32 = (_DWORD *)(gpsi + 1904LL);
            }
            goto LABEL_55;
          }
          v32 = (_DWORD *)(gpsi + 2292LL);
LABEL_55:
          xxxMenuBarDraw(a1, DCEx, v24, (unsigned int)(WindowBorders * *v32));
          goto LABEL_15;
        }
        v23 = (_DWORD *)(gpsi + 2288LL);
        goto LABEL_36;
      }
      GreDeleteObject(v13);
    }
  }
LABEL_6:
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
  {
    if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
    {
      v11 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
      return DwmAsyncActivationChange(v11);
    }
  }
  return result;
}
