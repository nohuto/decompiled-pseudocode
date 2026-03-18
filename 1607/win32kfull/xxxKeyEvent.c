/*
 * XREFs of xxxKeyEvent @ 0x1C00A2818
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00A3F10 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00A3F90 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     xxxSimulateShiftF10 @ 0x1C01CF48C (xxxSimulateShiftF10.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01D52EC (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01D55B0 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02281C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228310 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228500 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02286E0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228930 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A40 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C0229868 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C02298E8 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     GetMouseKeyFlags @ 0x1C00948F4 (GetMouseKeyFlags.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     IsUninterceptable @ 0x1C00A2484 (IsUninterceptable.c)
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C00A27F0 (-VKTOMODIFIERS@@YAIE@Z.c)
 *     UpdateAsyncKeyState @ 0x1C00A3520 (UpdateAsyncKeyState.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     IsSAS @ 0x1C00A3C30 (IsSAS.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     GetKeyEventInputSource @ 0x1C00A3DD0 (GetKeyEventInputSource.c)
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 *     ValidatePtiKbd @ 0x1C00A41F0 (ValidatePtiKbd.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00A420C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     IsProcessedByInputService @ 0x1C00DB84C (IsProcessedByInputService.c)
 *     SetNewForegroundQueue @ 0x1C00DC330 (SetNewForegroundQueue.c)
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01D0210 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxKeyEvent(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned __int16 v9; // di
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned __int16 v16; // ax
  int v17; // r12d
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int8 v21; // r10^1
  int v22; // r11d
  __int64 Valid; // r13
  _QWORD *v24; // rsi
  unsigned __int8 v25; // di^1
  __int64 v26; // rax
  char v27; // dh
  unsigned int v28; // r9d
  char v29; // r10^1
  int v30; // r11d
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned int v38; // r13d
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int v42; // edi
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // esi
  int v49; // ebx
  int v50; // ecx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 *v56; // rax
  __int16 v57; // cx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  struct tagWND *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // ecx
  unsigned __int16 v82; // ax
  int v83; // r14d
  __int64 v84; // r8
  __int64 v85; // rax
  _BYTE *v86; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v94; // [rsp+60h] [rbp-A0h]
  unsigned int v96; // [rsp+64h] [rbp-9Ch]
  unsigned int v97; // [rsp+68h] [rbp-98h]
  unsigned __int16 v99; // [rsp+70h] [rbp-90h]
  unsigned int v100; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v101; // [rsp+78h] [rbp-88h]
  __int64 v102; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v103; // [rsp+88h] [rbp-78h]
  int v104; // [rsp+8Ch] [rbp-74h]
  _BYTE v105[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v106; // [rsp+98h] [rbp-68h]
  __int64 v107; // [rsp+A0h] [rbp-60h]
  __int64 v108; // [rsp+A8h] [rbp-58h]
  _QWORD v109[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-38h] BYREF
  int v111; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v112; // [rsp+D8h] [rbp-28h] BYREF
  int v113; // [rsp+E0h] [rbp-20h]
  unsigned int v114; // [rsp+E4h] [rbp-1Ch]
  __int64 v115; // [rsp+E8h] [rbp-18h]

  v9 = a2;
  v10 = a1;
  v106 = a5;
  v108 = a6;
  v107 = a4;
  v101 = a3;
  v11 = gptiCurrent;
  v102 = gptiCurrent;
  v104 = 0;
  v96 = 0;
  v110 = -1LL;
  if ( a7 )
  {
    if ( a9 )
    {
      v12 = *(_QWORD *)a9;
      v13 = *(_DWORD *)(a9 + 8);
      v110 = *(_QWORD *)a9;
      v96 = v13;
    }
    else
    {
      v14 = *(_QWORD *)(gptiCurrent + 376LL);
      v15 = *(_DWORD *)(v14 + 12);
      v12 = *(_QWORD *)(v14 + 824);
      v96 = v15 >> 31;
      v9 = a2;
      v110 = v12;
    }
  }
  else
  {
    v12 = v110;
  }
  GetKeyEventInputSource(a7, a9, v105);
  v97 = v10 & 0x8000;
  *gpsi |= 0x40u;
  if ( (v10 & 0x8000) != 0 )
    v16 = 257;
  else
    v16 = 256;
  v17 = v16;
  v99 = v16;
  v103 = v16;
  if ( (byte_1C0327724 & 0x10) != 0 && (byte_1C0327724 & 4) == 0 )
    v103 = v16 + 4;
  v94 = v10 & 0x100;
  if ( (unsigned __int8)(v10 + 96) <= 5u )
  {
    v10 = ((unsigned __int8)v10 - 160) / 2;
    LOBYTE(v10) = v10 + 16;
  }
  if ( (!a7 || gProtocolType && gptiCurrent == gptiRit) && (v9 & 0x200) == 0 )
  {
    v18 = VKTOMODIFIERS(v10);
    if ( v19 )
      gfsSASModifiersDown &= ~v18;
    else
      gfsSASModifiersDown |= v18;
  }
  Valid = PhkFirstValid(gptiCurrent, 13LL);
  if ( !Valid || a8 != v22 )
    goto LABEL_54;
  v24 = (_QWORD *)gpqForeground;
  v25 = v21;
  v26 = ValidatePtiKbd(gpqForeground, 0x2000LL);
  if ( v26 )
  {
    v31 = *(_QWORD *)(v26 + 376);
    if ( v31 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL) )
    {
      if ( (PVOID)grpdeskRitInput == grpdeskLogon )
      {
        v11 = v102;
      }
      else
      {
        v32 = HasHidTable(v26);
        v30 = 0;
        if ( v32 )
        {
          v33 = *(_QWORD *)(v31 + 776);
          v11 = v102;
          v20 = *(unsigned int *)(v33 + 100);
          if ( (v20 & 0x10) != 0 )
          {
LABEL_55:
            v38 = v110;
LABEL_56:
            v42 = v96;
            goto LABEL_57;
          }
        }
        else
        {
          v11 = v102;
        }
        v29 = HIBYTE(v94);
        v28 = v97;
      }
      v27 = 32;
    }
    else
    {
      v11 = v102;
    }
  }
  v34 = v103;
  if ( v17 != v103 )
    v25 = v27 | v29;
  HIDWORD(v112) = a2;
  LODWORD(v112) = (unsigned __int8)a1;
  v35 = v25;
  v36 = *(_QWORD *)(v11 + 1216);
  v115 = v107;
  v113 = (v28 != 0 ? 0x80 : 0) | v35 | ((unsigned __int16)(a7 != 0 ? 0x1000 : 0) >> 8);
  v114 = v101;
  if ( a7 && v96 == v30 )
  {
    *(_QWORD *)(v11 + 1216) = v12;
  }
  else
  {
    *(_DWORD *)(v11 + 1216) = -1;
    *(_DWORD *)(v11 + 1220) = -1;
  }
  v37 = *(_QWORD *)(v11 + 1232);
  *(_QWORD *)(v11 + 1232) = &v112;
  if ( xxxCallHook2(Valid, 0, v34, (int *)&v112, &v100, v30) )
  {
    LOBYTE(v20) = a1;
    *(_QWORD *)(v11 + 1216) = v36;
    if ( !(unsigned int)IsSAS(v20, &v102) && !IsUninterceptable() )
    {
      *(_QWORD *)(v11 + 1232) = v37;
      return;
    }
  }
  *(_QWORD *)(v11 + 1216) = v36;
  *(_QWORD *)(v11 + 1232) = v37;
  if ( !a7 )
  {
LABEL_54:
    v24 = (_QWORD *)gpqForeground;
    goto LABEL_55;
  }
  v24 = (_QWORD *)gpqForeground;
  v38 = v110;
  v39 = gpqForeground;
  if ( !gpqForeground )
    goto LABEL_56;
  v20 = gbEnforceUIPI;
  v40 = *(_QWORD *)(gpqForeground + 380LL);
  if ( !gbEnforceUIPI )
    goto LABEL_56;
  if ( (unsigned int)v110 > (unsigned int)v40 )
    goto LABEL_56;
  if ( (_DWORD)v110 == (_DWORD)v40 )
  {
    v20 = HIDWORD(v110);
    v41 = HIDWORD(v40);
    if ( HIDWORD(v110) == (_DWORD)v41 || HIDWORD(v110) == -1 || (_DWORD)v41 == -1 )
      goto LABEL_56;
  }
  v42 = v96;
  if ( !v96 )
  {
LABEL_53:
    EtwTraceUIPIInputError(v11, 0LL, v39, *(_QWORD *)(v39 + 380), 1);
    return;
  }
LABEL_57:
  if ( gptiBlockInput && gptiBlockInput != v11 )
  {
    LOBYTE(v20) = a1;
    if ( !(unsigned int)IsSAS(v20, &v102) )
      return;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v10 == (_BYTE)a1 )
    goto LABEL_68;
  v43 = v97;
  if ( v97 )
  {
    if ( ((unsigned __int8)(1 << (2 * ((a1 ^ 1) & 3))) & *((_BYTE *)gafAsyncKeyState
                                                         + ((unsigned __int64)((unsigned __int8)a1 ^ 1u) >> 2))) != 0 )
      goto LABEL_68;
    v43 = v97;
  }
  if ( !gptiBlockInput || gptiBlockInput == v11 )
  {
    UpdateAsyncKeyState(*v24, (unsigned __int8)v10, v43);
    v24 = (_QWORD *)gpqForeground;
  }
LABEL_68:
  UpdateAsyncKeyState(*v24, (unsigned __int8)a1, v97);
  if ( !gfEnableHexNumpad
    || !gpqForeground
    || ((v44 = *(_QWORD *)(gpqForeground + 88LL)) == 0
      ? (v45 = *(_QWORD *)(gpqForeground + 64LL))
      : (v45 = *(_QWORD *)(v44 + 16)),
        (unsigned int)HasHidTable(v45)
     && ((v46 = *(_QWORD *)(gpqForeground + 88LL)) == 0
       ? (v47 = *(_QWORD *)(gpqForeground + 64LL))
       : (v47 = *(_QWORD *)(v46 + 16)),
         (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 376) + 776LL) + 100LL) & 0x20) != 0)) )
  {
    v48 = v97;
  }
  else
  {
    v48 = v97;
    LowLevelHexNumpad(a2, v10, v97, v94);
  }
  if ( !v48
    && ((_BYTE)v10 == 20 || (unsigned __int8)(v10 + 112) <= 1u || (_BYTE)v10 == 21 && (GetActiveHKL() & 0x3FF) == 0x11) )
  {
    UpdateKeyLights(a7);
    xxxWindowEvent(0x80000006, 0LL, (unsigned __int8)v10, 0, 0);
  }
  if ( gptiForeground )
    v49 = *(_DWORD *)(gptiForeground + 764LL);
  else
    LOBYTE(v49) = 0;
  if ( !gspwndAltTab )
    goto LABEL_122;
  if ( v48 )
    goto LABEL_122;
  if ( (unsigned __int8)v10 <= 0x12u )
  {
    v50 = 328192;
    if ( _bittest(&v50, v10) )
      goto LABEL_122;
  }
  xxxCancelCoolSwitch();
  if ( a7 )
  {
    v39 = gpqForeground;
    if ( gpqForeground )
    {
      v51 = *(_QWORD *)(gpqForeground + 380LL);
      if ( gbEnforceUIPI )
      {
        if ( v38 <= (unsigned int)v51 )
        {
          if ( v38 != (_DWORD)v51
            || (v52 = HIDWORD(v51), HIDWORD(v110) != (_DWORD)v52) && HIDWORD(v110) != -1 && (_DWORD)v52 != -1 )
          {
            if ( !v42 )
              goto LABEL_53;
          }
        }
      }
    }
  }
  if ( (_BYTE)v10 != 27 || (v49 & 2) != 0 )
  {
LABEL_122:
    v100 = (unsigned __int8)v10;
    if ( (unsigned int)xxxDoHotKeyStuff((struct tagHOTKEY *)(unsigned __int8)v10) )
    {
      LOBYTE(v53) = a1;
      if ( !(unsigned int)IsSAS(v53, &v102) )
        return;
      v104 = 1;
    }
    if ( a7 )
    {
      v39 = gpqForeground;
      if ( gpqForeground )
      {
        v54 = *(_QWORD *)(gpqForeground + 380LL);
        if ( gbEnforceUIPI )
        {
          if ( v38 <= (unsigned int)v54 )
          {
            if ( v38 != (_DWORD)v54
              || (v55 = HIDWORD(v54), HIDWORD(v110) != (_DWORD)v55) && HIDWORD(v110) != -1 && (_DWORD)v55 != -1 )
            {
              if ( !v96 )
                goto LABEL_53;
            }
          }
        }
      }
    }
    v112 = __PAIR64__(v103, v101);
    v114 = a8;
    LODWORD(v115) = (_BYTE)a1 == 0;
    v110 = 0LL;
    v111 = 0;
    v56 = (__int64 *)v108;
    LOWORD(v113) = (unsigned __int8)v10;
    if ( v108 )
    {
      HIDWORD(v115) = 0;
    }
    else
    {
      v57 = 2;
      WORD1(v110) = a2;
      HIDWORD(v115) = 1;
      if ( !v94 )
        v57 = 0;
      v56 = &v110;
      WORD2(v110) = (v48 != 0) | v57;
    }
    if ( (unsigned int)HandleRawInput(v106, v56, &v112) != 1 && !v104 )
    {
      if ( (BYTE4(gafAsyncKeyState[0]) & 0x14) != 0x10 || (_BYTE)v10 == 23 )
      {
        if ( (_BYTE)v10 == 18 )
        {
          if ( v48 )
          {
            if ( dword_1C0329438 )
              v99 += 4;
            if ( gspwndAltTab )
            {
              if ( gpqForeground )
              {
                v58 = *(_QWORD *)(gpqForeground + 88LL);
                v59 = v58 ? *(_QWORD *)(v58 + 16) : *(_QWORD *)(gpqForeground + 64LL);
                if ( !(unsigned int)HasHidTable(v59)
                  || ((v60 = *(_QWORD *)(gpqForeground + 88LL)) == 0
                    ? (v61 = *(_QWORD *)(gpqForeground + 64LL))
                    : (v61 = *(_QWORD *)(v60 + 16)),
                      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 376) + 776LL) + 100LL) & 0x20) == 0) )
                {
                  v62 = v106;
                  *(_DWORD *)(gpqForeground + 340LL) |= 0x80u;
                  LODWORD(v93) = v101;
                  PostInputMessage(
                    gpqForeground,
                    0LL,
                    v99,
                    18LL,
                    ((a2 | v94) << 16) | 1,
                    v93,
                    0LL,
                    v107,
                    0,
                    v105,
                    v62,
                    0LL);
                }
              }
              xxxCancelCoolSwitch();
              v63 = gspwndActivate;
              if ( gspwndActivate )
              {
                if ( gpqForeground == *(_QWORD *)(*((_QWORD *)gspwndActivate + 2) + 384LL) )
                  SetNewForegroundQueue(0LL);
                SetLastInputWoken(*((_QWORD *)v63 + 2), 0LL);
                v109[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v109;
                v109[1] = v63;
                ++*((_DWORD *)v63 + 2);
                xxxSetForegroundWindow2((LARGE_INTEGER *)v63, 0LL, 0x12u, 0);
                if ( (*((_BYTE *)v63 + 55) & 0x40) != 0 )
                  xxxSetWindowPos((_DWORD)v63, 0, 0, 0, 0, 0, 3);
                ThreadUnlock1(v65, v64);
                HMAssignmentUnlock(&gspwndActivate);
              }
              return;
            }
          }
          else
          {
            gppiLockSFW = 0LL;
          }
        }
      }
      else
      {
        v99 += 4;
        v94 |= 0x2000u;
        if ( (_BYTE)v10 == 18 )
        {
          dword_1C0329438 = 1;
          if ( !v48 )
            gppiLockSFW = 0LL;
        }
        else
        {
          dword_1C0329438 = 0;
        }
      }
      v66 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(v66 + 48)
        && !*(_QWORD *)(v66 + 40)
        && !v48
        && (BYTE4(gafAsyncKeyState[0]) & 0x14) == 0x10
        && ((_BYTE)v10 == 9 && (v49 & 1) == 0 || (_BYTE)v10 == 27 && (v49 & 2) == 0) )
      {
        v67 = gpqForeground;
        if ( !gpqForeground )
          v67 = *(_QWORD *)(gptiRit + 384LL);
        ++*(_DWORD *)(v67 + 348);
        PushW32ThreadLock(v67, &v112, UnlockQueue, 0x2000LL);
        xxxNextWindow(v67, (unsigned __int8)v10);
        PopAndFreeAlwaysW32ThreadLock((__int64)&v112, v68, v69, v70);
        return;
      }
      v71 = (__int64 *)gpqForeground;
      if ( gpqForeground )
      {
        v72 = *(_QWORD *)(gpqForeground + 88LL);
        v73 = *(_QWORD *)(gpqForeground + 8LL);
        if ( v72 )
          v74 = *(_QWORD *)(v72 + 16);
        else
          v74 = *(_QWORD *)(gpqForeground + 64LL);
        if ( (unsigned int)HasHidTable(v74) )
        {
          v75 = *(_QWORD *)(gpqForeground + 88LL);
          v76 = v75 ? *(_QWORD *)(v75 + 16) : *(_QWORD *)(gpqForeground + 64LL);
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 376) + 776LL) + 100LL) & 0x20) != 0 )
          {
            v77 = *(_QWORD *)(gpqForeground + 88LL);
            v78 = v77 ? *(_QWORD *)(v77 + 16) : *(_QWORD *)(gpqForeground + 64LL);
            if ( !(unsigned int)HasHidTable(v78) )
              return;
            v79 = *(_QWORD *)(gpqForeground + 88LL);
            v80 = v79 ? *(_QWORD *)(v79 + 16) : *(_QWORD *)(gpqForeground + 64LL);
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 376) + 776LL) + 100LL) & 0x400) == 0
              || (unsigned __int8)(v10 + 90) > 0x11u )
            {
              return;
            }
          }
        }
        v81 = v100;
        if ( (_BYTE)v10 == 0xE7 && (a1 & 0x1000) != 0 )
        {
          v81 = (a2 << 16) | v100;
          v82 = 0;
          v100 = v81;
        }
        else
        {
          v82 = a2;
        }
        v83 = ((v94 | v82) << 16) | 1;
        if ( v73
          && *(_DWORD *)(v73 + 24) == v99
          && ((v99 - 256) & 0xFFFB) == 0
          && *(_QWORD *)(v73 + 32) == v81
          && !(unsigned int)IsProcessedByInputService(v73)
          && *(_WORD *)(v73 + 42) == HIWORD(v83) )
        {
          *(_QWORD *)(v73 + 40) = (unsigned __int16)(*(_WORD *)(v73 + 40) + 1) | (HIWORD(v83) << 16);
          WakeSomeone(gpqForeground, 0LL, v84, v73);
          return;
        }
        if ( (unsigned __int8)(v10 + 90) > 0x11u )
          goto LABEL_208;
        if ( !v97 )
        {
          if ( (unsigned __int8)(v10 + 83) > 2u )
          {
            PostEventMessageEx(
              *(_QWORD *)(gpqForeground + 64LL),
              gpqForeground,
              0xFu,
              0LL,
              0,
              0LL,
              (unsigned __int8)v10,
              (__int64)v105);
LABEL_199:
            v71 = (__int64 *)gpqForeground;
            goto LABEL_200;
          }
          v85 = *(_QWORD *)(gpqForeground + 80LL);
          if ( v85 || (v85 = *(_QWORD *)(gpqForeground + 88LL)) != 0 )
          {
            v86 = *(_BYTE **)(*(_QWORD *)(v85 + 16) + 384LL);
            if ( v86 )
            {
              MouseKeyFlags = GetMouseKeyFlags(v86);
              PostShellHookMessagesEx(
                0xCu,
                ((unsigned __int16)((unsigned __int8)v10 - 165) << 16) | (unsigned __int64)MouseKeyFlags,
                0LL);
              goto LABEL_199;
            }
          }
        }
LABEL_200:
        v88 = *v71;
        v89 = *(_QWORD *)(*v71 + 88);
        if ( v89 )
          v90 = *(_QWORD *)(v89 + 16);
        else
          v90 = *(_QWORD *)(v88 + 64);
        if ( (unsigned int)HasHidTable(v90) )
        {
          v91 = *(_QWORD *)(v88 + 88);
          v92 = v91 ? *(_QWORD *)(v91 + 16) : *(_QWORD *)(v88 + 64);
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v92 + 376) + 776LL) + 100LL) & 0x20) != 0 )
            return;
        }
LABEL_208:
        if ( (*(_DWORD *)(*v71 + 340) & 0x20) != 0 )
        {
          PostMoveToPwnd(*v71, 0LL, 0);
          v71 = (__int64 *)gpqForeground;
        }
        LODWORD(v93) = v101;
        PostInputMessage(*v71, 0LL, v99, v100, v83, v93, 0LL, v107, 0, v105, v106, 0LL);
        return;
      }
      if ( ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(v10 + 83) <= 2u )
        PostShellHookMessagesEx(0xCu, (unsigned __int16)((unsigned __int8)v10 - 165) << 16, 0LL);
    }
  }
}
