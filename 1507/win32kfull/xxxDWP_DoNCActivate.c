/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C004EB68
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C010E5F0 (xxxEndMenuLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     DwmAsyncActivationChange @ 0x1C004ECCC (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C004ED60 (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C004F1E0 (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(__int64 a1, char a2, __int64 a3)
{
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  void *v9; // rax
  unsigned __int16 v10; // bp
  __int64 v11; // rsi
  __int64 DCEx; // r14
  int WindowBorders; // r15d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  _DWORD *v21; // rcx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  _DWORD *v30; // rcx

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow() )
  {
    SetOrClrWF(1LL, a1, 64LL, 1LL);
    v5 = 4109;
  }
  else
  {
    SetOrClrWF(0LL, a1, 64LL, 1LL);
  }
  if ( a3 != -1 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 55);
    if ( (v6 & 0x10) != 0 && (*(_BYTE *)(a1 + 41) & 1) == 0 )
    {
      v10 = 0;
      if ( *(_DWORD *)(gpsi + 3576LL) != *(_DWORD *)(gpsi + 3580LL)
        || *(_DWORD *)(gpsi + 3604LL) != *(_DWORD *)(gpsi + 3644LL) )
      {
        v10 = 4108;
      }
      if ( (v6 & 0x20) == 0
        && (*(_BYTE *)(a1 + 54) & 4) != 0
        && *(_DWORD *)(gpsi + 3608LL) != *(_DWORD *)(gpsi + 3612LL) )
      {
        v10 |= 0x8000u;
      }
      if ( v10 )
      {
        v11 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v11, 65537LL);
        if ( DCEx )
        {
          if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
          {
LABEL_20:
            xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v10);
            _ReleaseDC(DCEx);
            goto LABEL_6;
          }
          WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 52), *(unsigned int *)(a1 + 48));
          if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
            {
              goto LABEL_28;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(v14)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v20 = 0)
                   : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v20) )
          {
LABEL_28:
            if ( (unsigned int)IsDPIDWMSysMet(5LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v17 = 0)
                : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v17) )
            {
              v21 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v21 = (_DWORD *)(gpsi + 1900LL);
            }
LABEL_44:
            v22 = WindowBorders * *v21;
            if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0 )
              {
                goto LABEL_47;
              }
            }
            else if ( !(unsigned int)IsDPIDWMSysMet(v23)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v29 = 0)
                     : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                       !v29) )
            {
LABEL_47:
              if ( (unsigned int)IsDPIDWMSysMet(6LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v26 = 0)
                  : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v26) )
              {
                v30 = (_DWORD *)(gpsi + 2680LL);
              }
              else
              {
                v30 = (_DWORD *)(gpsi + 1904LL);
              }
              goto LABEL_63;
            }
            v30 = (_DWORD *)(gpsi + 2292LL);
LABEL_63:
            xxxMenuBarDraw(a1, DCEx, v22, (unsigned int)(WindowBorders * *v30));
            goto LABEL_20;
          }
          v21 = (_DWORD *)(gpsi + 2288LL);
          goto LABEL_44;
        }
        GreDeleteObject(v11);
      }
    }
  }
LABEL_6:
  result = IsToplevelWindowDesktopComposed(a1, v6, v7);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a1 + 50) & 8) != 0 )
    {
      v9 = (void *)ReferenceDwmApiPort();
      return DwmAsyncActivationChange(v9);
    }
  }
  return result;
}
