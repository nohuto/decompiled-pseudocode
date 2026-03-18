/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01FEFE0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetAsyncKeyState @ 0x1C00411FC (_GetAsyncKeyState.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxSendMessageCallback @ 0x1C004DF0C (xxxSendMessageCallback.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     _ScrollDC @ 0x1C008D9BC (_ScrollDC.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0100DE8 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01FF988 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01FF9BC (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagCURSOR *a9)
{
  struct tagCURSOR *v9; // r15
  struct tagCURSOR *v10; // r11
  HDC DCEx; // r10
  int v14; // ebx
  int v15; // r12d
  int v16; // r13d
  LONG v17; // esi
  int v18; // eax
  int v19; // r9d
  int PrevTaskIndex; // eax
  int v21; // r12d
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rbx
  HDC v25; // rdi
  LONG v26; // esi
  LONG v27; // r13d
  HWND *v28; // rbx
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v31; // rax
  __int64 TopLevelCreatorWindow; // rax
  int v33; // r11d
  __int64 v34; // rbx
  __int64 Prop; // rax
  __int64 v36; // rax
  struct tagWND *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagSwitchWndInfo *v41; // rax
  int v42; // ebx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int *v48; // rbx
  __int64 v49; // rcx
  int v50; // ecx
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v54; // r11d
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 ThreadWin32Thread; // rax
  int v58; // ecx
  __int64 v59; // rax
  int *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // ecx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  _DWORD *v69; // rcx
  __int64 v70; // rcx
  int v71; // ecx
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v79; // r8
  _DWORD *v80; // rax
  HBRUSH v81; // r8
  int v82; // [rsp+50h] [rbp-61h]
  int v83; // [rsp+50h] [rbp-61h]
  int v84; // [rsp+54h] [rbp-5Dh]
  RECT v85; // [rsp+58h] [rbp-59h] BYREF
  LONG v86; // [rsp+68h] [rbp-49h]
  HWND *PrevPhwnd; // [rsp+70h] [rbp-41h]
  struct tagWND *v88; // [rsp+78h] [rbp-39h]
  _QWORD v89[3]; // [rsp+80h] [rbp-31h] BYREF
  struct tagRECT v90; // [rsp+98h] [rbp-19h] BYREF

  v9 = a9;
  LODWORD(v10) = 0;
  *(_QWORD *)&v85.left = a3;
  v88 = a1;
  DCEx = a3;
  v14 = 0;
  v15 = 0;
  if ( a3 )
  {
    v84 = 0;
  }
  else
  {
    v84 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
    *(_QWORD *)&v85.left = DCEx;
    LODWORD(v10) = 0;
  }
  v16 = *((_DWORD *)a2 + 21);
  v17 = *((_DWORD *)a2 + 22);
  if ( a7 )
  {
    v18 = 43 * *((_DWORD *)a2 + 14);
    v90.left = *((_DWORD *)a2 + 21);
    v90.top = v17;
    v90.right = v16 + v18;
    v90.bottom = v17 + 43 * *((_DWORD *)a2 + 15);
    ScrollDC(DCEx, 0, a8 != 0 ? -43 : 43, &v90, &v90, 0LL, 0LL);
    LODWORD(v10) = 0;
    if ( a8 )
      v14 = *((_DWORD *)a2 + 15) - 1;
    v19 = *((_DWORD *)a2 + 14);
    v82 = v19;
    if ( a8 )
    {
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v19 * (*((_DWORD *)a2 + 15) - 1), 1);
      v19 = v82;
      a4 = PrevTaskIndex;
    }
    else
    {
      a4 = *((_DWORD *)a2 + 13);
    }
  }
  else
  {
    v19 = a6;
  }
  if ( a9 )
  {
    v21 = a4 - *((_DWORD *)a2 + 13);
    if ( v21 < 0 )
      v21 += *((_DWORD *)a2 + 10);
    v22 = *((_DWORD *)a2 + 14);
    v14 = v21 / v22;
    if ( v21 / v22 >= *((_DWORD *)a2 + 15) )
    {
      v25 = *(HDC *)&v85.left;
      goto LABEL_125;
    }
    v15 = v21 % v22;
  }
  v23 = 43 * v14;
  v24 = a4;
  v25 = *(HDC *)&v85.left;
  v86 = v16 + 5;
  v26 = v23 + v17 + 5;
  v27 = 43 * v15 + v16 + 5;
  v28 = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v24);
  PrevPhwnd = v28;
  if ( v19 )
  {
    while ( 1 )
    {
      v83 = v19 - 1;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_129;
      KeyState = GetKeyState(0x12u);
      LODWORD(v10) = 0;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_129:
        AsyncKeyState = GetAsyncKeyState(0x12u);
        LODWORD(v10) = 0;
        if ( AsyncKeyState >= 0 )
          break;
      }
      v31 = HMValidateHandleNoSecure((unsigned __int64)*v28, 1);
      v10 = 0LL;
      if ( v31 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v31);
        v34 = TopLevelCreatorWindow;
        if ( v9 )
          goto LABEL_34;
        Prop = GetProp(TopLevelCreatorWindow, *(unsigned __int16 *)(gpsi + 1358LL), (unsigned int)(v33 + 1));
        if ( Prop )
        {
          v36 = HMValidateHandleNoRip(Prop, 3);
          v10 = 0LL;
          v9 = (struct tagCURSOR *)v36;
          if ( v36 )
            goto LABEL_34;
        }
        v9 = *(struct tagCURSOR **)(*(_QWORD *)(v34 + 152) + 112LL);
        if ( v9 )
          goto LABEL_34;
        if ( (*(_BYTE *)(v34 + 45) & 2) == 0 )
        {
          v37 = v88;
          v89[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v89;
          LODWORD(v38) = (_DWORD)v10;
          v89[1] = v34;
          ++*(_DWORD *)(v34 + 8);
          if ( v37 )
            v38 = *(_QWORD *)v37;
          xxxSendMessageCallback(
            (struct tagWND *)v34,
            0x37u,
            0LL,
            0LL,
            (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))DrawIconCallBack,
            (unsigned int)v38,
            (int)v10,
            (int)v10,
            1);
          ThreadUnlock1(v40, v39);
          v41 = Getpswi(v37);
          v10 = 0LL;
          if ( v41 != a2 )
            break;
          v42 = v83;
          if ( v83 > *((_DWORD *)a2 + 14) )
            break;
LABEL_77:
          if ( a7 == (_DWORD)v10 )
            goto LABEL_119;
          v85.left = v27;
          v85.top = v26;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
            {
LABEL_90:
              if ( IsDPIDWMSysMet(0xBuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v71 = 0)
                  : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v71) )
              {
                v69 = (_DWORD *)(gpsi + 2700LL);
              }
              else
              {
                v69 = (_DWORD *)(gpsi + 1924LL);
              }
LABEL_98:
              v85.right = v27 + *v69;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0xCuLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0 )
                {
LABEL_101:
                  if ( IsDPIDWMSysMet(0xCuLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                      ? (v75 = 0)
                      : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL) & 1),
                        v75) )
                  {
                    v79 = gpsi;
                    v80 = (_DWORD *)(gpsi + 2704LL);
                  }
                  else
                  {
                    v79 = gpsi;
                    v80 = (_DWORD *)(gpsi + 1928LL);
                  }
                  goto LABEL_117;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v72)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_101;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1) )
                {
                  goto LABEL_101;
                }
              }
              v79 = gpsi;
              v80 = (_DWORD *)(gpsi + 2316LL);
LABEL_117:
              v81 = *(HBRUSH *)(v79 + 3816);
              v85.bottom = v26 + *v80;
              FillRect(v25, &v85, v81);
              goto LABEL_118;
            }
          }
          else
          {
            if ( !IsDPIDWMSysMet(v64)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0 )
            {
              goto LABEL_90;
            }
            if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1) )
            {
              goto LABEL_90;
            }
          }
          v69 = (_DWORD *)(gpsi + 2312LL);
          goto LABEL_98;
        }
        v9 = (struct tagCURSOR *)qword_1C031EA98;
      }
      if ( !v9 )
      {
        v42 = v83;
        goto LABEL_77;
      }
LABEL_34:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0xCuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) == 0 )
        {
          goto LABEL_45;
        }
      }
      else if ( IsDPIDWMSysMet(v43)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
LABEL_45:
        v48 = (int *)(gpsi + 2316LL);
        goto LABEL_54;
      }
      if ( IsDPIDWMSysMet(0xCuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v50 = 0)
          : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v50) )
      {
        v48 = (int *)(gpsi + 2704LL);
      }
      else
      {
        v48 = (int *)(gpsi + 1928LL);
      }
LABEL_54:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) == 0 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v52);
          v54 = 0;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x4000) == 0 )
            goto LABEL_65;
        }
      }
      else if ( IsDPIDWMSysMet(v51)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v54 = 0;
        if ( *(_QWORD *)(ThreadWin32Thread + 416) )
        {
          v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1;
          v54 = 0;
        }
        else
        {
          v58 = 0;
        }
        if ( v58 )
        {
LABEL_65:
          v59 = gpsi;
          v60 = (int *)(gpsi + 2312LL);
          goto LABEL_75;
        }
      }
      if ( !IsDPIDWMSysMet(0xBuLL) )
        goto LABEL_74;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) == 0 )
      {
        v54 = 0;
LABEL_74:
        v59 = gpsi;
        v60 = (int *)(gpsi + 1924LL);
        goto LABEL_75;
      }
      v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v54 = 0;
      if ( *(_QWORD *)(v62 + 416) )
      {
        v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1;
        v54 = 0;
      }
      else
      {
        v63 = 0;
      }
      if ( !v63 )
        goto LABEL_74;
      v59 = gpsi;
      v60 = (int *)(gpsi + 2700LL);
LABEL_75:
      DrawIconEx(v25, v27, v26, (__int64)v9, *v60, *v48, v54, *(_QWORD *)(v59 + 3816), 3);
      v42 = v83;
LABEL_118:
      v10 = 0LL;
LABEL_119:
      if ( v42 <= 0 )
        break;
      v9 = v10;
      ++v15;
      PrevPhwnd = NextPrevPhwnd(a2, PrevPhwnd, 1);
      v28 = PrevPhwnd;
      if ( v15 < *((_DWORD *)a2 + 14) )
      {
        v27 += 43;
      }
      else
      {
        v27 = v86;
        v15 = (int)v10;
        v26 += 43;
      }
      v19 = v83;
    }
  }
LABEL_125:
  if ( v84 != (_DWORD)v10 )
    _ReleaseDC(v25);
}
