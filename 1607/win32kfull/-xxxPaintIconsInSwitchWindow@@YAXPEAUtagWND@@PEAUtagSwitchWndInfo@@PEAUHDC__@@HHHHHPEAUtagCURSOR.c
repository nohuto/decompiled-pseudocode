/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F6B70 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F7A6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _ScrollDC @ 0x1C005CDF4 (_ScrollDC.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     _GetAsyncKeyState @ 0x1C00A98E8 (_GetAsyncKeyState.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01333B8 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F7594 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F75C8 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        HDC a3,
        int PrevTaskIndex,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagCURSOR *a9)
{
  struct tagCURSOR *v9; // r14
  struct tagCURSOR *v10; // r11
  struct tagWND *v12; // r9
  int v13; // ecx
  HDC v15; // r10
  int v16; // edi
  int v17; // esi
  __int64 DCEx; // rax
  int v19; // r8d
  LONG v20; // r12d
  int v21; // eax
  LONG v22; // eax
  int v23; // r8d
  int v24; // r13d
  int v25; // esi
  int v26; // ecx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // r12d
  __int64 v30; // r8
  __int16 KeyState; // ax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int16 AsyncKeyState; // ax
  __int64 v36; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v38; // rdi
  __int64 Prop; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  struct tagWND *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct tagSwitchWndInfo *v48; // rax
  LONG v49; // edi
  int v50; // [rsp+50h] [rbp-71h]
  LONG v51; // [rsp+50h] [rbp-71h]
  int v52; // [rsp+54h] [rbp-6Dh]
  int v53; // [rsp+58h] [rbp-69h]
  int v54; // [rsp+58h] [rbp-69h]
  int v55; // [rsp+5Ch] [rbp-65h]
  int v56; // [rsp+60h] [rbp-61h]
  HDC v57; // [rsp+68h] [rbp-59h]
  RECT v58; // [rsp+70h] [rbp-51h] BYREF
  struct tagWND *v59; // [rsp+80h] [rbp-41h]
  _QWORD v60[3]; // [rsp+88h] [rbp-39h] BYREF
  struct tagRECT v61; // [rsp+A0h] [rbp-21h] BYREF

  v9 = a9;
  LODWORD(v10) = 0;
  v59 = a1;
  v12 = a1;
  v57 = a3;
  v13 = *((_DWORD *)a2 + 29);
  v52 = v13;
  v55 = *((_DWORD *)a2 + 28);
  v15 = a3;
  v53 = v13 - v55;
  v16 = 0;
  v17 = 0;
  if ( a3 )
  {
    v56 = 0;
  }
  else
  {
    v56 = 1;
    DCEx = _GetDCEx(v12, 0LL, 0x10000LL);
    v13 = v52;
    LODWORD(v10) = 0;
    v15 = (HDC)DCEx;
    v57 = (HDC)DCEx;
  }
  v19 = *((_DWORD *)a2 + 22);
  v20 = *((_DWORD *)a2 + 21);
  v50 = v19;
  if ( a7 )
  {
    v21 = *((_DWORD *)a2 + 14) * v13;
    v61.top = *((_DWORD *)a2 + 22);
    v61.left = v20;
    v61.right = v20 + v21;
    v22 = v19 + v13 * *((_DWORD *)a2 + 15);
    v23 = v13;
    v61.bottom = v22;
    if ( a8 )
      v23 = -v13;
    ScrollDC(v15, 0, v23, &v61, &v61, 0LL, 0LL);
    LODWORD(v10) = 0;
    if ( a8 )
      v16 = *((_DWORD *)a2 + 15) - 1;
    v24 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v24 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
    v19 = v50;
  }
  else
  {
    v24 = a6;
  }
  if ( a9 )
  {
    v25 = PrevTaskIndex - *((_DWORD *)a2 + 13);
    if ( v25 < 0 )
      v25 += *((_DWORD *)a2 + 10);
    v26 = *((_DWORD *)a2 + 14);
    v16 = v25 / v26;
    if ( v25 / v26 >= *((_DWORD *)a2 + 15) )
      goto LABEL_44;
    v17 = v25 % v26;
  }
  v27 = (unsigned int)(v53 >> 31);
  v28 = v53 / 2;
  v54 = v53 / 2 + v20;
  v29 = v17 * v52 + v54;
  v30 = (unsigned int)(v28 + v16 * v52 + v19);
  v51 = v30;
  *(_QWORD *)&v61.left = *((_QWORD *)a2 + 2) + 8LL * PrevTaskIndex + 32;
  if ( v24 )
  {
    while ( 1 )
    {
      --v24;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_48;
      KeyState = GetKeyState(0x12u, v27, v30, (__int64)v12);
      LODWORD(v10) = 0;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_48:
        AsyncKeyState = GetAsyncKeyState(0x12u);
        LODWORD(v10) = 0;
        if ( AsyncKeyState >= 0 )
          break;
      }
      LOBYTE(v32) = 1;
      v36 = HMValidateHandleNoSecure(**(_QWORD **)&v61.left, v32, v33, v34);
      v10 = 0LL;
      if ( v36 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v36);
        v38 = TopLevelCreatorWindow;
        if ( v9
          || (Prop = GetProp(
                       TopLevelCreatorWindow,
                       *(unsigned __int16 *)(gpsi + 1358LL),
                       (unsigned int)((_DWORD)v10 + 1))) != 0
          && (LOBYTE(v40) = 3,
              v43 = HMValidateHandleNoRip(Prop, v40, v41, v42),
              v10 = 0LL,
              (v9 = (struct tagCURSOR *)v43) != 0LL)
          || (v9 = *(struct tagCURSOR **)(*(_QWORD *)(v38 + 152) + 112LL)) != 0LL )
        {
LABEL_42:
          v49 = v51;
          DrawIconEx(v57, v29, v51, (__int64)v9, v55, v55, (int)v10, *(_QWORD *)(gpsi + 5208LL), 3);
          goto LABEL_36;
        }
        if ( (*(_BYTE *)(v38 + 45) & 2) == 0 )
        {
          v44 = v59;
          v60[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v60;
          LODWORD(v45) = (_DWORD)v10;
          v60[1] = v38;
          ++*(_DWORD *)(v38 + 8);
          if ( v44 )
            v45 = *(_QWORD *)v44;
          xxxSendMessageCallback(
            (struct tagWND *)v38,
            0x37u,
            0LL,
            0LL,
            (__int64)DrawIconCallBack,
            (unsigned int)v45,
            (int)v10,
            (int)v10,
            1);
          ThreadUnlock1(v47, v46);
          v48 = Getpswi(v44);
          v10 = 0LL;
          if ( v48 != a2 || v24 > *((_DWORD *)a2 + 14) )
            break;
          goto LABEL_34;
        }
        v9 = (struct tagCURSOR *)qword_1C0321A08;
      }
      if ( v9 )
        goto LABEL_42;
LABEL_34:
      v49 = v51;
      if ( a7 == (_DWORD)v10 )
        goto LABEL_37;
      v58.left = v29;
      v58.top = v51;
      v58.right = v29 + v55;
      v58.bottom = v51 + v55;
      FillRect(v57, &v58, *(HBRUSH *)(gpsi + 5208LL));
LABEL_36:
      v10 = 0LL;
LABEL_37:
      if ( v24 <= 0 )
        break;
      v9 = v10;
      ++v17;
      *(_QWORD *)&v61.left = NextPrevPhwnd(a2, *(HWND **)&v61.left, 1);
      if ( v17 < *((_DWORD *)a2 + 14) )
      {
        v29 += v52;
      }
      else
      {
        v29 = v54;
        v51 = v52 + v49;
        v17 = (int)v10;
      }
    }
  }
LABEL_44:
  if ( v56 != (_DWORD)v10 )
    _ReleaseDC(v57);
}
