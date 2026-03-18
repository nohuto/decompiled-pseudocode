/*
 * XREFs of xxxKeyEvent @ 0x1C008345C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00FC7C0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00FEF90 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     xxxSimulateShiftF10 @ 0x1C01D8414 (xxxSimulateShiftF10.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01DDA70 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01DDD34 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02288C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A10 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228C00 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228DE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0229030 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0229140 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C022A544 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C022A5C4 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0082E7C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     IsUninterceptable @ 0x1C00830CC (IsUninterceptable.c)
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C0083434 (-VKTOMODIFIERS@@YAIE@Z.c)
 *     UpdateAsyncKeyState @ 0x1C0083C5C (UpdateAsyncKeyState.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 *     IsSAS @ 0x1C008438C (IsSAS.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 *     GetKeyEventInputSource @ 0x1C00844F0 (GetKeyEventInputSource.c)
 *     GetActiveHKL @ 0x1C0084850 (GetActiveHKL.c)
 *     ValidatePtiKbd @ 0x1C008488C (ValidatePtiKbd.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     SetNewForegroundQueue @ 0x1C008E570 (SetNewForegroundQueue.c)
 *     UpdateKeyLights @ 0x1C009D668 (UpdateKeyLights.c)
 *     GetMouseKeyFlags @ 0x1C00C6920 (GetMouseKeyFlags.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01D86A4 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C02014FC (xxxCancelCoolSwitch.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxKeyEvent(
        unsigned __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  unsigned __int16 v9; // di
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rbx
  unsigned __int16 v15; // ax
  int v16; // r12d
  __int64 v17; // rcx
  unsigned __int8 v18; // r11^1
  __int64 Valid; // r13
  _QWORD *v20; // rsi
  unsigned __int8 v21; // di^1
  __int64 v22; // rax
  char v23; // r8^1
  unsigned int v24; // r9d
  char v25; // r11^1
  __int64 v26; // r14
  __int64 v27; // r10
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned int v31; // edi
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  struct _KEYBOARD_INPUT_DATA *v41; // rax
  unsigned int v42; // edi
  __int64 result; // rax
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rcx
  unsigned __int16 v48; // ax
  int v49; // esi
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // r14
  unsigned int v53; // eax
  int v54; // eax
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int16 ActiveHKL; // ax
  int v62; // ecx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int16 v65; // cx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  void *v70; // rcx
  struct tagWND *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v89; // [rsp+62h] [rbp-9Eh]
  unsigned __int16 v91; // [rsp+68h] [rbp-98h]
  unsigned int v92; // [rsp+6Ch] [rbp-94h]
  unsigned int v93; // [rsp+70h] [rbp-90h]
  unsigned int v94; // [rsp+74h] [rbp-8Ch] BYREF
  int v95; // [rsp+78h] [rbp-88h]
  __int64 v96; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v97; // [rsp+88h] [rbp-78h]
  int v98; // [rsp+8Ch] [rbp-74h]
  char v99[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v100; // [rsp+98h] [rbp-68h]
  void *v101; // [rsp+A0h] [rbp-60h]
  __int64 v102; // [rsp+A8h] [rbp-58h]
  _QWORD v103[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v104; // [rsp+C8h] [rbp-38h] BYREF
  int v105; // [rsp+D0h] [rbp-30h]
  int v106; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v107; // [rsp+DCh] [rbp-24h]
  int v108; // [rsp+E0h] [rbp-20h]
  int v109; // [rsp+E4h] [rbp-1Ch]
  __int64 v110; // [rsp+E8h] [rbp-18h]

  v9 = a2;
  v10 = a1;
  v101 = a5;
  v102 = a6;
  v100 = a4;
  v95 = a3;
  v11 = gptiCurrent;
  v96 = gptiCurrent;
  v98 = 0;
  v93 = 0;
  v104 = -1LL;
  if ( a7 )
  {
    if ( a9 )
    {
      v14 = *(_QWORD *)a9;
      v53 = *(_DWORD *)(a9 + 8);
      v104 = *(_QWORD *)a9;
      v93 = v53;
    }
    else
    {
      v12 = *(_QWORD *)(gptiCurrent + 376LL);
      v13 = *(_DWORD *)(v12 + 12);
      v14 = *(_QWORD *)(v12 + 832);
      v93 = v13 >> 31;
      v9 = a2;
      v104 = v14;
    }
  }
  else
  {
    v14 = v104;
  }
  GetKeyEventInputSource(a7, a9, v99);
  v92 = v10 & 0x8000;
  *gpsi |= 0x40u;
  if ( (v10 & 0x8000) != 0 )
    v15 = 257;
  else
    v15 = 256;
  v16 = v15;
  v91 = v15;
  v97 = v15;
  if ( (byte_1C0322AA4 & 0x10) != 0 && (byte_1C0322AA4 & 4) == 0 )
    v97 = v15 + 4;
  v89 = v10 & 0x100;
  if ( (unsigned __int8)(v10 + 96) <= 5u )
  {
    v10 = ((unsigned __int8)v10 - 160) / 2;
    LOBYTE(v10) = v10 + 16;
  }
  if ( (!a7 || gProtocolType && gptiCurrent == gptiRit) && (v9 & 0x200) == 0 )
  {
    v54 = VKTOMODIFIERS(v10);
    if ( v55 )
      gfsSASModifiersDown &= ~v54;
    else
      gfsSASModifiersDown |= v54;
  }
  Valid = PhkFirstValid(gptiCurrent, 13LL);
  if ( !Valid || a8 )
    goto LABEL_93;
  v20 = (_QWORD *)gpqForeground;
  v21 = v18;
  v22 = ValidatePtiKbd(gpqForeground, 0LL, 0x2000LL);
  if ( v22 )
  {
    v26 = *(_QWORD *)(v22 + 376);
    if ( v26 != *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL) || (PVOID)grpdeskRitInput == grpdeskLogon )
    {
      v11 = v96;
    }
    else
    {
      if ( (unsigned int)HasHidTable(v22) )
      {
        v56 = *(_QWORD *)(v26 + 784);
        v11 = v96;
        v17 = *(unsigned int *)(v56 + 100);
        if ( (v17 & 0x10) != 0 )
          goto LABEL_94;
      }
      else
      {
        v11 = v96;
      }
      v25 = HIBYTE(v89);
      v23 = 32;
      v24 = v92;
    }
  }
  v27 = v97;
  if ( v16 != v97 )
    v21 = v23 | v25;
  v107 = a2;
  v106 = (unsigned __int8)a1;
  v28 = v21;
  v29 = *(_QWORD *)(v11 + 1192);
  v110 = v100;
  v108 = (v24 != 0 ? 0x80 : 0) | v28 | ((unsigned __int16)(a7 != 0 ? 0x1000 : 0) >> 8);
  v109 = v95;
  if ( !a7 || v93 )
  {
    *(_DWORD *)(v11 + 1192) = -1;
    *(_DWORD *)(v11 + 1196) = -1;
  }
  else
  {
    *(_QWORD *)(v11 + 1192) = v14;
  }
  v30 = *(_QWORD *)(v11 + 1208);
  *(_QWORD *)(v11 + 1208) = &v106;
  if ( xxxCallHook2(Valid, 0, v27, &v106, (__int64)&v94) )
  {
    LOBYTE(v17) = a1;
    *(_QWORD *)(v11 + 1192) = v29;
    if ( !(unsigned int)IsSAS(v17, &v96) )
    {
      result = IsUninterceptable();
      if ( !result )
      {
        *(_QWORD *)(v11 + 1208) = v30;
        return result;
      }
    }
  }
  *(_QWORD *)(v11 + 1192) = v29;
  *(_QWORD *)(v11 + 1208) = v30;
  if ( !a7 )
  {
LABEL_93:
    v20 = (_QWORD *)gpqForeground;
LABEL_94:
    v31 = v104;
    goto LABEL_28;
  }
  v20 = (_QWORD *)gpqForeground;
  v31 = v104;
  v32 = gpqForeground;
  if ( gpqForeground )
  {
    v17 = gbEnforceUIPI;
    v33 = *(_QWORD *)(gpqForeground + 372LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v104 <= (unsigned int)v33 )
      {
        if ( (_DWORD)v104 != (_DWORD)v33
          || (v17 = HIDWORD(v104), v34 = HIDWORD(v33), HIDWORD(v104) != (_DWORD)v34)
          && (_DWORD)v34 != -1
          && HIDWORD(v104) != -1 )
        {
          if ( !v93 )
            return EtwTraceUIPIInputError(v11, 0LL, v32, *(_QWORD *)(v32 + 372), 1);
        }
      }
    }
  }
LABEL_28:
  if ( gptiBlockInput && gptiBlockInput != v11 )
  {
    LOBYTE(v17) = a1;
    result = IsSAS(v17, &v96);
    if ( !(_DWORD)result )
      return result;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v10 != (_BYTE)a1
    && (!v92
     || ((unsigned __int8)(1 << (2 * ((a1 ^ 1) & 3))) & gafAsyncKeyState[(unsigned __int64)((unsigned __int8)a1 ^ 1u) >> 2]) == 0)
    && (!gptiBlockInput || gptiBlockInput == v11) )
  {
    UpdateAsyncKeyState(*v20, (unsigned __int8)v10, v92);
    v20 = (_QWORD *)gpqForeground;
  }
  UpdateAsyncKeyState(*v20, (unsigned __int8)a1, v92);
  if ( gfEnableHexNumpad && gpqForeground )
  {
    v57 = *(_QWORD *)(gpqForeground + 80LL);
    v58 = v57 ? *(_QWORD *)(v57 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( !(unsigned int)HasHidTable(v58)
      || ((v59 = *(_QWORD *)(gpqForeground + 80LL)) == 0
        ? (v60 = *(_QWORD *)(gpqForeground + 56LL))
        : (v60 = *(_QWORD *)(v59 + 16)),
          v36 = *(_QWORD *)(*(_QWORD *)(v60 + 376) + 784LL),
          (*(_DWORD *)(v36 + 100) & 0x20) == 0) )
    {
      LowLevelHexNumpad(a2, v10, v92, v89);
    }
  }
  if ( !v92 )
  {
    if ( (_BYTE)v10 == 20
      || (unsigned __int8)(v10 + 112) <= 1u
      || (_BYTE)v10 == 21 && (ActiveHKL = GetActiveHKL(v36), (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a7, v35);
      xxxWindowEvent(0x80000006, 0LL, (unsigned __int8)v10, 0, 0);
    }
  }
  if ( gptiForeground )
    v37 = *(_DWORD *)(gptiForeground + 756LL);
  else
    LOBYTE(v37) = 0;
  if ( gspwndAltTab )
  {
    if ( !v92 )
    {
      if ( (unsigned __int8)v10 > 0x12u || (v62 = 328192, !_bittest(&v62, v10)) )
      {
        xxxCancelCoolSwitch();
        if ( a7 )
        {
          v32 = gpqForeground;
          if ( gpqForeground )
          {
            v63 = *(_QWORD *)(gpqForeground + 372LL);
            if ( gbEnforceUIPI )
            {
              if ( v31 <= (unsigned int)v63 )
              {
                if ( v31 != (_DWORD)v63
                  || (v64 = HIDWORD(v63), HIDWORD(v104) != (_DWORD)v64) && HIDWORD(v104) != -1 && (_DWORD)v64 != -1 )
                {
                  if ( !v93 )
                    return EtwTraceUIPIInputError(v11, 0LL, v32, *(_QWORD *)(v32 + 372), 1);
                }
              }
            }
          }
        }
        if ( (_BYTE)v10 == 27 )
        {
          result = 2LL;
          if ( (v37 & 2) == 0 )
            return result;
        }
      }
    }
  }
  v94 = (unsigned __int8)v10;
  if ( (unsigned int)xxxDoHotKeyStuff((struct tagHOTKEY *)(unsigned __int8)v10) )
  {
    LOBYTE(v38) = a1;
    result = IsSAS(v38, &v96);
    if ( !(_DWORD)result )
      return result;
    v98 = 1;
  }
  if ( a7 )
  {
    v32 = gpqForeground;
    if ( gpqForeground )
    {
      v39 = *(_QWORD *)(gpqForeground + 372LL);
      if ( gbEnforceUIPI )
      {
        if ( v31 <= (unsigned int)v39 )
        {
          if ( v31 != (_DWORD)v39
            || (v40 = HIDWORD(v39), HIDWORD(v104) != (_DWORD)v40) && (_DWORD)v40 != -1 && HIDWORD(v104) != -1 )
          {
            if ( !v93 )
              return EtwTraceUIPIInputError(v11, 0LL, v32, *(_QWORD *)(v32 + 372), 1);
          }
        }
      }
    }
  }
  v106 = v95;
  v109 = a8;
  LODWORD(v110) = (_BYTE)a1 == 0;
  v107 = v97;
  v104 = 0LL;
  v105 = 0;
  v41 = (struct _KEYBOARD_INPUT_DATA *)v102;
  LOWORD(v108) = (unsigned __int8)v10;
  if ( v102 )
  {
    v42 = v92;
    HIDWORD(v110) = 0;
  }
  else
  {
    v65 = 2;
    WORD1(v104) = a2;
    HIDWORD(v110) = 1;
    if ( !v89 )
      v65 = 0;
    v42 = v92;
    v41 = (struct _KEYBOARD_INPUT_DATA *)&v104;
    WORD2(v104) = (v92 != 0) | v65;
  }
  result = HandleRawInput(v101, v41, (__int64)&v106);
  if ( (_DWORD)result != 1 && !v98 )
  {
    if ( (gafAsyncKeyState[4] & 0x14) == 0x10 && (_BYTE)v10 != 23 )
    {
      v89 |= 0x2000u;
      v91 += 4;
      if ( (_BYTE)v10 != 18 )
      {
        dword_1C0323D38 = 0;
        goto LABEL_48;
      }
      dword_1C0323D38 = 1;
      if ( !v42 )
        goto LABEL_106;
      goto LABEL_48;
    }
    if ( (_BYTE)v10 != 18 )
      goto LABEL_48;
    if ( !v42 )
    {
LABEL_106:
      gppiLockSFW = 0LL;
      goto LABEL_48;
    }
    v52 = v91;
    if ( dword_1C0323D38 )
    {
      v52 = v91 + 4;
      v91 += 4;
    }
    if ( !gspwndAltTab )
    {
LABEL_48:
      result = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(result + 48) && !*(_QWORD *)(result + 40) && !v42 )
      {
        result = *(_QWORD *)gafAsyncKeyState;
        if ( (gafAsyncKeyState[4] & 0x14) == 0x10 )
        {
          if ( (_BYTE)v10 == 9 && (v37 & 1) == 0 || (_BYTE)v10 == 27 && (result = 2LL, (v37 & 2) == 0) )
          {
            v74 = gpqForeground;
            if ( !gpqForeground )
              v74 = *(_QWORD *)(gptiRit + 384LL);
            return xxxNextWindow(v74, (unsigned __int8)v10);
          }
        }
      }
      v44 = (__int64 *)gpqForeground;
      if ( !gpqForeground )
        return result;
      v45 = *(_QWORD *)(gpqForeground + 80LL);
      v46 = *(_QWORD *)(gpqForeground + 8LL);
      v47 = v45 ? *(_QWORD *)(v45 + 16) : *(_QWORD *)(gpqForeground + 56LL);
      if ( (unsigned int)HasHidTable(v47) )
      {
        v50 = *(_QWORD *)(gpqForeground + 80LL);
        v51 = v50 ? *(_QWORD *)(v50 + 16) : *(_QWORD *)(gpqForeground + 56LL);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 376) + 784LL) + 100LL) & 0x20) != 0 )
        {
          v75 = *(_QWORD *)(gpqForeground + 80LL);
          v76 = v75 ? *(_QWORD *)(v75 + 16) : *(_QWORD *)(gpqForeground + 56LL);
          result = HasHidTable(v76);
          if ( !(_DWORD)result )
            return result;
          v77 = *(_QWORD *)(gpqForeground + 80LL);
          v78 = v77 ? *(_QWORD *)(v77 + 16) : *(_QWORD *)(gpqForeground + 56LL);
          result = *(_QWORD *)(v78 + 376);
          if ( (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x400) == 0 )
            return result;
          result = (unsigned int)(v10 + 90);
          if ( (unsigned __int8)(v10 + 90) > 0x11u )
            return result;
        }
      }
      if ( (_BYTE)v10 == 0xE7 && (a1 & 0x1000) != 0 )
      {
        v48 = 0;
        v94 = (a2 << 16) | (unsigned __int8)v10;
      }
      else
      {
        v48 = a2;
      }
      v49 = ((v89 | v48) << 16) | 1;
      if ( v46
        && *(_DWORD *)(v46 + 24) == v91
        && ((v91 - 256) & 0xFFFB) == 0
        && *(_QWORD *)(v46 + 32) == v94
        && *(_WORD *)(v46 + 42) == HIWORD(v49) )
      {
        *(_QWORD *)(v46 + 40) = (HIWORD(v49) << 16) | (unsigned __int16)(*(_WORD *)(v46 + 40) + 1);
        return WakeSomeone(gpqForeground, 0LL, v91, v46);
      }
      if ( (unsigned __int8)(v10 + 90) > 0x11u )
      {
LABEL_60:
        if ( (*(_DWORD *)(*v44 + 332) & 0x20) != 0 )
        {
          PostMoveToPwnd(*v44, 0LL, 0);
          v44 = (__int64 *)gpqForeground;
        }
        LODWORD(v87) = v95;
        return PostInputMessage(*v44, 0LL, v91, v94, v49, v87, 0LL, v100, 0, v99, v101, 0LL);
      }
      if ( !v92 )
      {
        if ( (unsigned __int8)(v10 + 83) > 2u )
        {
          PostEventMessageEx(
            *(_QWORD *)(gpqForeground + 56LL),
            gpqForeground,
            0xFu,
            0LL,
            0,
            0LL,
            (unsigned __int8)v10,
            (__int64)v99);
LABEL_208:
          v44 = (__int64 *)gpqForeground;
          goto LABEL_209;
        }
        v79 = *(_QWORD *)(gpqForeground + 72LL);
        if ( v79 || (v79 = *(_QWORD *)(gpqForeground + 80LL)) != 0 )
        {
          v80 = *(_QWORD *)(*(_QWORD *)(v79 + 16) + 384LL);
          if ( v80 )
          {
            MouseKeyFlags = GetMouseKeyFlags(v80);
            PostShellHookMessagesEx(
              0xCu,
              ((unsigned __int16)((unsigned __int8)v10 - 165) << 16) | (unsigned __int64)MouseKeyFlags,
              0LL);
            goto LABEL_208;
          }
        }
      }
LABEL_209:
      v82 = *v44;
      v83 = *(_QWORD *)(*v44 + 80);
      if ( v83 )
        v84 = *(_QWORD *)(v83 + 16);
      else
        v84 = *(_QWORD *)(v82 + 56);
      if ( (unsigned int)HasHidTable(v84) )
      {
        v85 = *(_QWORD *)(v82 + 80);
        v86 = v85 ? *(_QWORD *)(v85 + 16) : *(_QWORD *)(v82 + 56);
        result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v86 + 376) + 784LL) + 100LL);
        if ( (result & 0x20) != 0 )
          return result;
      }
      goto LABEL_60;
    }
    if ( gpqForeground )
    {
      v66 = *(_QWORD *)(gpqForeground + 80LL);
      v67 = v66 ? *(_QWORD *)(v66 + 16) : *(_QWORD *)(gpqForeground + 56LL);
      if ( !(unsigned int)HasHidTable(v67)
        || ((v68 = *(_QWORD *)(gpqForeground + 80LL)) == 0
          ? (v69 = *(_QWORD *)(gpqForeground + 56LL))
          : (v69 = *(_QWORD *)(v68 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 376) + 784LL) + 100LL) & 0x20) == 0) )
      {
        v70 = v101;
        *(_DWORD *)(gpqForeground + 332LL) |= 0x80u;
        PostInputMessage(gpqForeground, 0LL, v52, 18LL, ((a2 | v89) << 16) | 1, v95, 0LL, v100, 0, v99, v70, 0LL);
      }
    }
    result = xxxCancelCoolSwitch();
    v71 = gspwndActivate;
    if ( gspwndActivate )
    {
      if ( gpqForeground == *(_QWORD *)(*((_QWORD *)gspwndActivate + 2) + 384LL) )
        SetNewForegroundQueue(0LL);
      SetLastInputWoken(*((_QWORD *)v71 + 2), 0LL);
      v103[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v103;
      v103[1] = v71;
      ++*((_DWORD *)v71 + 2);
      xxxSetForegroundWindow2(v71);
      if ( (*((_BYTE *)v71 + 55) & 0x40) != 0 )
        xxxSetWindowPos(v71, 0, 0, 0, 0, 0, 16387);
      ThreadUnlock1(v73, v72);
      return HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
