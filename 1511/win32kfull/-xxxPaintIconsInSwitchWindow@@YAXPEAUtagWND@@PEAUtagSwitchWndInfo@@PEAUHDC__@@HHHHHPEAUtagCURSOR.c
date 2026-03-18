/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200428
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01FF3E0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C0200250 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C0200D50 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _ScrollDC @ 0x1C006A430 (_ScrollDC.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     _GetAsyncKeyState @ 0x1C00EB660 (_GetAsyncKeyState.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01123E8 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C0200038 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
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
  HDC DCEx; // r10
  int v13; // ebx
  int v14; // r12d
  int v15; // r13d
  LONG v16; // esi
  int v17; // eax
  int v18; // r8d
  int v19; // eax
  int v20; // r12d
  int v21; // ecx
  int v22; // r13d
  unsigned int v23; // ecx
  HDC v24; // rsi
  __int64 v25; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v27; // rbx
  __int64 Prop; // rax
  struct tagWND *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int *v45; // rbx
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v53; // rax
  int *v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  _DWORD *v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  __int64 v67; // r8
  _DWORD *v68; // rax
  HBRUSH v69; // r8
  int v70; // eax
  __int64 v71; // [rsp+38h] [rbp-89h]
  unsigned int v72; // [rsp+50h] [rbp-71h]
  HDC v73; // [rsp+58h] [rbp-69h]
  int v74; // [rsp+58h] [rbp-69h]
  int v75; // [rsp+60h] [rbp-61h]
  HWND *PrevPhwnd; // [rsp+68h] [rbp-59h]
  int v77; // [rsp+70h] [rbp-51h]
  RECT v78; // [rsp+78h] [rbp-49h] BYREF
  struct tagWND *v79; // [rsp+88h] [rbp-39h]
  _QWORD v80[3]; // [rsp+90h] [rbp-31h] BYREF
  struct tagRECT v81; // [rsp+A8h] [rbp-19h] BYREF

  v9 = a9;
  v79 = a1;
  v73 = a3;
  DCEx = a3;
  v13 = 0;
  v14 = 0;
  if ( a3 )
  {
    v75 = 0;
  }
  else
  {
    v75 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
    v73 = DCEx;
  }
  v15 = *((_DWORD *)a2 + 21);
  v16 = *((_DWORD *)a2 + 22);
  if ( a7 )
  {
    v17 = 43 * *((_DWORD *)a2 + 14);
    v81.left = *((_DWORD *)a2 + 21);
    v81.top = v16;
    v81.right = v15 + v17;
    v81.bottom = v16 + 43 * *((_DWORD *)a2 + 15);
    ScrollDC(DCEx, 0, a8 != 0 ? -43 : 43, &v81, &v81, 0LL, 0LL);
    if ( a8 )
      v13 = *((_DWORD *)a2 + 15) - 1;
    v18 = *((_DWORD *)a2 + 14);
    a4 = *((_DWORD *)a2 + 13);
    if ( a8 )
    {
      a4 += v18 * (*((_DWORD *)a2 + 15) - 1);
      v19 = *((_DWORD *)a2 + 10);
      if ( a4 >= v19 )
        a4 -= v19;
    }
  }
  else
  {
    v18 = a6;
  }
  if ( a9 )
  {
    v20 = a4 - *((_DWORD *)a2 + 13);
    if ( v20 < 0 )
      v20 += *((_DWORD *)a2 + 10);
    v21 = *((_DWORD *)a2 + 14);
    v13 = v20 / v21;
    if ( v20 / v21 >= *((_DWORD *)a2 + 15) )
    {
      v24 = v73;
      goto LABEL_120;
    }
    v14 = v20 % v21;
  }
  v77 = v15 + 5;
  v22 = 43 * v14 + v15 + 5;
  v23 = v16 + 43 * v13 + 5;
  v24 = v73;
  v72 = v23;
  PrevPhwnd = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8LL * a4);
  if ( v18 )
  {
    while ( 1 )
    {
      v74 = v18 - 1;
      if ( !*((_DWORD *)a2 + 27) )
        goto LABEL_20;
      if ( (GetKeyState(0x12u) & 0x8000u) == 0LL )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_20:
        if ( (GetAsyncKeyState(0x12u) & 0x8000u) == 0LL )
          break;
      }
      v25 = HMValidateHandleNoSecure((unsigned __int64)*PrevPhwnd, 1);
      if ( v25 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v25);
        v27 = TopLevelCreatorWindow;
        if ( v9
          || (Prop = GetProp(TopLevelCreatorWindow, *(unsigned __int16 *)(gpsi + 1358LL), 1LL)) != 0
          && (v9 = (struct tagCURSOR *)HMValidateHandleNoRip(Prop, 3)) != 0LL
          || (v9 = *(struct tagCURSOR **)(*(_QWORD *)(v27 + 152) + 112LL)) != 0LL )
        {
LABEL_41:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0xCuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0 )
            {
LABEL_44:
              if ( IsDPIDWMSysMet(0xCuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v41 = 0)
                  : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v41) )
              {
                v45 = (int *)(gpsi + 2704LL);
              }
              else
              {
                v45 = (int *)(gpsi + 1928LL);
              }
LABEL_60:
              if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0 )
                {
LABEL_63:
                  if ( IsDPIDWMSysMet(0xBuLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      ? (v49 = 0)
                      : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                        v49) )
                  {
                    v53 = gpsi;
                    v54 = (int *)(gpsi + 2700LL);
                  }
                  else
                  {
                    v53 = gpsi;
                    v54 = (int *)(gpsi + 1924LL);
                  }
                  goto LABEL_79;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v46)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_63;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1) )
                {
                  goto LABEL_63;
                }
              }
              v53 = gpsi;
              v54 = (int *)(gpsi + 2312LL);
LABEL_79:
              v71 = *(_QWORD *)(v53 + 3816);
              v55 = *v45;
              v33 = v72;
              DrawIconEx(v24, v22, v72, (__int64)v9, *v54, v55, 0, v71, 3);
              v9 = 0LL;
              goto LABEL_112;
            }
          }
          else
          {
            if ( !IsDPIDWMSysMet(v38)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
            {
              goto LABEL_44;
            }
            if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1) )
            {
              goto LABEL_44;
            }
          }
          v45 = (int *)(gpsi + 2316LL);
          goto LABEL_60;
        }
        if ( (*(_BYTE *)(v27 + 45) & 2) == 0 )
        {
          v80[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v80;
          v29 = v79;
          v80[1] = v27;
          ++*(_DWORD *)(v27 + 8);
          if ( v29 )
            v30 = *(_QWORD *)v29;
          else
            LODWORD(v30) = 0;
          xxxSendMessageCallback(
            (struct tagWND *)v27,
            0x37u,
            0LL,
            0LL,
            (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))DrawIconCallBack,
            (unsigned int)v30,
            0,
            0);
          ThreadUnlock1(v32, v31);
          goto LABEL_33;
        }
        v9 = (struct tagCURSOR *)qword_1C031B908;
      }
      if ( v9 )
        goto LABEL_41;
LABEL_33:
      v33 = v72;
      if ( a7 == (_DWORD)v9 )
        goto LABEL_112;
      v78.left = v22;
      v78.top = v72;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) == 0 )
        {
          goto LABEL_87;
        }
      }
      else if ( IsDPIDWMSysMet(v34)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) == 0 )
      {
        if ( *(struct tagCURSOR **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) == v9
           ? (_DWORD)v9
           : *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 244LL) & 1 )
        {
LABEL_87:
          v59 = (_DWORD *)(gpsi + 2312LL);
          goto LABEL_92;
        }
      }
      if ( IsDPIDWMSysMet(0xBuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
        && (*(struct tagCURSOR **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) == v9
          ? (v37 = (int)v9)
          : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v37) )
      {
        v59 = (_DWORD *)(gpsi + 2700LL);
      }
      else
      {
        v59 = (_DWORD *)(gpsi + 1924LL);
      }
LABEL_92:
      v78.right = v22 + *v59;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0xCuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
        {
          goto LABEL_95;
        }
      }
      else if ( !IsDPIDWMSysMet(v60)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
             || (*(struct tagCURSOR **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) == v9
               ? (v66 = (int)v9)
               : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v66) )
      {
LABEL_95:
        if ( IsDPIDWMSysMet(0xCuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
          && (*(struct tagCURSOR **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) == v9
            ? (v63 = (int)v9)
            : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v63) )
        {
          v67 = gpsi;
          v68 = (_DWORD *)(gpsi + 2704LL);
        }
        else
        {
          v67 = gpsi;
          v68 = (_DWORD *)(gpsi + 1928LL);
        }
        goto LABEL_111;
      }
      v67 = gpsi;
      v68 = (_DWORD *)(gpsi + 2316LL);
LABEL_111:
      v69 = *(HBRUSH *)(v67 + 3816);
      v78.bottom = v72 + *v68;
      FillRect(v24, &v78, v69);
LABEL_112:
      if ( v74 <= (int)v9 )
        break;
      ++v14;
      PrevPhwnd = NextPrevPhwnd(a2, PrevPhwnd, 1);
      if ( v14 < *((_DWORD *)a2 + 14) )
      {
        v22 += 43;
      }
      else
      {
        v22 = v77;
        v14 = 0;
        v72 = v33 + 43;
      }
      v70 = *((_DWORD *)a2 + 10);
      if ( ++a4 >= v70 )
        a4 -= v70;
      v18 = v74;
    }
  }
LABEL_120:
  if ( v75 )
    _ReleaseDC(v24);
}
