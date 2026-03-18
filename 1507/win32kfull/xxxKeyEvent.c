/*
 * XREFs of xxxKeyEvent @ 0x1C00485C0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00F6C00 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00F9C30 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     xxxSimulateShiftF10 @ 0x1C01D69A4 (xxxSimulateShiftF10.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01DD3D8 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01DD69C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02285C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228710 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228900 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228AE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228D30 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228E40 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C022A244 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C022A2C4 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     SetNewForegroundQueue @ 0x1C0047320 (SetNewForegroundQueue.c)
 *     ValidatePtiKbd @ 0x1C004929C (ValidatePtiKbd.c)
 *     UpdateAsyncKeyState @ 0x1C00492B8 (UpdateAsyncKeyState.c)
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     IsSAS @ 0x1C00499E8 (IsSAS.c)
 *     PhkFirstValid @ 0x1C004A274 (PhkFirstValid.c)
 *     GetKeyEventInputSource @ 0x1C004A394 (GetKeyEventInputSource.c)
 *     GetActiveHKL @ 0x1C004A700 (GetActiveHKL.c)
 *     ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C004A73C (-RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C004A774 (-PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     GetMouseKeyFlags @ 0x1C00779CC (GetMouseKeyFlags.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01D7888 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C01D8F1C (-VKTOMODIFIERS@@YAIE@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall xxxKeyEvent(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        struct _KEYBOARD_INPUT_DATA *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  int v9; // r15d
  unsigned __int16 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned int v14; // edi
  unsigned int v15; // r14d
  __int16 v16; // r11
  unsigned __int8 v17; // di^1
  unsigned int v18; // eax
  _QWORD *v19; // rsi
  __int64 v20; // r9
  __int64 Valid; // r10
  unsigned __int16 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 result; // rax
  unsigned int v31; // edi
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ebx
  int v42; // ecx
  unsigned int v43; // esi
  __int64 v44; // rcx
  _QWORD *v45; // r14
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  struct _KEYBOARD_INPUT_DATA *v49; // rsi
  unsigned __int64 v50; // rbx
  unsigned __int16 v51; // r13
  unsigned int v52; // edx
  struct tagWND *v53; // rsi
  unsigned __int16 v54; // di
  int v55; // eax
  int v56; // edi
  unsigned int v57; // edx
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  void *v64; // rcx
  struct tagWND *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r13d
  unsigned __int16 v79; // ax
  int v80; // edi
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v90; // [rsp+64h] [rbp-8Dh]
  unsigned int v91; // [rsp+68h] [rbp-89h]
  unsigned __int16 v92; // [rsp+6Ch] [rbp-85h]
  unsigned __int16 v93; // [rsp+70h] [rbp-81h]
  __int64 v94; // [rsp+78h] [rbp-79h]
  unsigned int v97; // [rsp+88h] [rbp-69h] BYREF
  int v98; // [rsp+8Ch] [rbp-65h]
  __int64 v99; // [rsp+90h] [rbp-61h] BYREF
  char v100[8]; // [rsp+98h] [rbp-59h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-51h]
  void *v102; // [rsp+A8h] [rbp-49h]
  struct _KEYBOARD_INPUT_DATA *v103; // [rsp+B0h] [rbp-41h]
  _QWORD v104[3]; // [rsp+B8h] [rbp-39h] BYREF
  _DWORD v105[4]; // [rsp+D0h] [rbp-21h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-11h]

  v9 = 0;
  v102 = a5;
  v11 = a1;
  v103 = a6;
  v101 = a4;
  v98 = 0;
  v90 = 0;
  v94 = -1LL;
  if ( a7 )
  {
    if ( a9 )
    {
      v12 = *(_QWORD *)a9;
      v90 = *(_DWORD *)(a9 + 8);
    }
    else
    {
      v13 = *(_QWORD *)(gptiCurrent + 384LL);
      v14 = *(_DWORD *)(v13 + 12);
      v12 = *(_QWORD *)(v13 + 832);
      v90 = v14 >> 31;
    }
    v94 = v12;
  }
  else
  {
    v12 = -1LL;
  }
  GetKeyEventInputSource(a7, a9, v100);
  v15 = v11 & 0x8000;
  v91 = v15;
  *gpsi |= 0x40u;
  if ( (v11 & 0x8000) != 0 )
    v16 = 257;
  else
    v16 = 256;
  v93 = v16;
  v17 = HIBYTE(v11) & 1;
  v92 = v11 & 0x100;
  if ( (unsigned __int8)(v11 + 96) > 5u )
  {
    LOBYTE(v9) = v11;
  }
  else
  {
    v9 = ((unsigned __int8)v11 - 160) / 2;
    LOBYTE(v9) = v9 + 16;
  }
  if ( (!a7 || gProtocolType && gptiCurrent == gptiRit) && (a2 & 0x200) == 0 )
  {
    v18 = VKTOMODIFIERS(v9);
    if ( (v11 & 0x8000) != 0 )
      gfsSASModifiersDown &= ~v18;
    else
      gfsSASModifiersDown |= v18;
  }
  v19 = (_QWORD *)gpqForeground;
  ValidatePtiKbd(gpqForeground);
  Valid = PhkFirstValid(gptiCurrent, 13LL);
  v99 = Valid;
  v23 = 4LL;
  if ( !Valid || a8 )
  {
    v31 = v94;
    goto LABEL_53;
  }
  v11 = v22;
  if ( v20 )
  {
    v24 = *(_QWORD *)(v20 + 384);
    if ( v24 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 384LL) && (PVOID)grpdeskRitInput != grpdeskLogon )
    {
      if ( (unsigned int)HasHidTable(v20) )
      {
        v25 = *(_QWORD *)(v24 + 784);
        v15 = v91;
        v23 = *(unsigned int *)(v25 + 100);
        if ( (v23 & 0x10) != 0 )
        {
          v31 = v94;
          LOBYTE(v11) = a1;
          goto LABEL_53;
        }
        LODWORD(Valid) = v99;
        v22 = v93;
        goto LABEL_30;
      }
      LODWORD(Valid) = v99;
      v22 = v93;
    }
    v15 = v91;
  }
LABEL_30:
  if ( (byte_1C03230D4 & 0x10) != 0 && (byte_1C03230D4 & 4) == 0 )
  {
    v11 = v22 + 4;
    v17 = HIBYTE(v92) | 0x20;
  }
  v105[0] = (unsigned __int8)a1;
  v105[1] = a2;
  v26 = v17;
  v27 = *(_QWORD *)(gptiCurrent + 1200LL);
  v105[3] = a3;
  v106 = v101;
  v105[2] = (v15 != 0 ? 0x80 : 0) | v26 | ((unsigned __int16)(a7 != 0 ? 0x1000 : 0) >> 8);
  if ( !a7 || v90 )
  {
    *(_DWORD *)(gptiCurrent + 1200LL) = -1;
    *(_DWORD *)(gptiCurrent + 1204LL) = -1;
  }
  else
  {
    *(_QWORD *)(gptiCurrent + 1200LL) = v12;
  }
  v28 = *(_QWORD *)(gptiCurrent + 1216LL);
  *(_QWORD *)(gptiCurrent + 1216LL) = v105;
  v29 = xxxCallHook2(Valid, 0, v11, (unsigned int)v105, (__int64)&v97);
  LOBYTE(v11) = a1;
  if ( v29 )
  {
    *(_QWORD *)(gptiCurrent + 1200LL) = v27;
    LOBYTE(v23) = a1;
    result = IsSAS(v23, &v99);
    if ( !(_DWORD)result )
    {
      *(_QWORD *)(gptiCurrent + 1216LL) = v28;
      return result;
    }
  }
  v19 = (_QWORD *)gpqForeground;
  *(_QWORD *)(gptiCurrent + 1200LL) = v27;
  v31 = v94;
  *(_QWORD *)(gptiCurrent + 1216LL) = v28;
  if ( a7 )
  {
    v32 = gpqForeground;
    if ( gpqForeground )
    {
      v23 = gbEnforceUIPI;
      v33 = *(_QWORD *)(gpqForeground + 372LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v94 <= (unsigned int)v33 )
        {
          if ( (_DWORD)v94 != (_DWORD)v33
            || (v23 = HIDWORD(v94), v34 = HIDWORD(v33), HIDWORD(v94) != (_DWORD)v34)
            && HIDWORD(v94) != -1
            && (_DWORD)v34 != -1 )
          {
            if ( !v90 )
              return EtwTraceUIPIInputError(gptiCurrent, 0LL, v32, *(_QWORD *)(v32 + 372), 1);
          }
        }
      }
    }
  }
  v15 = v91;
LABEL_53:
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    LOBYTE(v23) = v11;
    result = IsSAS(v23, &v99);
    if ( !(_DWORD)result )
      return result;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v9 != (_BYTE)a1
    && (!v15
     || ((unsigned __int8)(1 << (2 * ((a1 ^ 1) & 3))) & *((_BYTE *)gafAsyncKeyState
                                                        + ((unsigned __int64)((unsigned __int8)a1 ^ 1u) >> 2))) == 0)
    && (!gptiBlockInput || gptiBlockInput == gptiCurrent) )
  {
    UpdateAsyncKeyState(*v19, (unsigned __int8)v9, v15);
    v19 = (_QWORD *)gpqForeground;
  }
  UpdateAsyncKeyState(*v19, (unsigned __int8)a1, v15);
  if ( gfEnableHexNumpad && gpqForeground )
  {
    v37 = *(_QWORD *)(gpqForeground + 80LL);
    v38 = v37 ? *(_QWORD *)(v37 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( !(unsigned int)HasHidTable(v38)
      || ((v39 = *(_QWORD *)(gpqForeground + 80LL)) == 0
        ? (v40 = *(_QWORD *)(gpqForeground + 56LL))
        : (v40 = *(_QWORD *)(v39 + 16)),
          v36 = *(_QWORD *)(*(_QWORD *)(v40 + 384) + 784LL),
          (*(_DWORD *)(v36 + 100) & 0x20) == 0) )
    {
      LowLevelHexNumpad(a2, v9, v15, v92);
    }
  }
  if ( !v15
    && ((_BYTE)v9 == 20 || (unsigned __int8)(v9 + 112) <= 1u || (_BYTE)v9 == 21 && (GetActiveHKL(v36) & 0x3FF) == 0x11) )
  {
    UpdateKeyLights(a7, v35);
    xxxWindowEvent(-2147483642, 0, (unsigned __int8)v9, 0, 0);
  }
  if ( gptiForeground )
    v41 = *(_DWORD *)(gptiForeground + 764LL);
  else
    v41 = 0;
  v97 = v41;
  if ( !gspwndAltTab || v15 || (unsigned __int8)v9 <= 0x12u && (v42 = 328192, _bittest(&v42, v9)) )
  {
    v43 = v90;
  }
  else
  {
    result = xxxCancelCoolSwitch();
    if ( !a7
      || (result = gpqForeground, (v32 = gpqForeground) == 0)
      || (result = *(_QWORD *)(gpqForeground + 372LL), !gbEnforceUIPI)
      || v31 > (unsigned int)result
      || v31 == (_DWORD)result
      && ((result >>= 32, HIDWORD(v94) == (_DWORD)result) || HIDWORD(v94) == -1 || (_DWORD)result == -1) )
    {
      v43 = v90;
    }
    else
    {
      v43 = v90;
      if ( !v90 )
        return EtwTraceUIPIInputError(gptiCurrent, 0LL, v32, *(_QWORD *)(v32 + 372), 1);
    }
    if ( (_BYTE)v9 == 27 && (v41 & 2) == 0 )
      return result;
  }
  if ( (unsigned int)xxxDoHotKeyStuff((struct tagHOTKEY *)(unsigned __int8)v9) )
  {
    LOBYTE(v44) = a1;
    result = IsSAS(v44, &v99);
    if ( !(_DWORD)result )
      return result;
    v98 = 1;
  }
  v45 = (_QWORD *)gpqForeground;
  if ( a7 )
  {
    v32 = gpqForeground;
    if ( gpqForeground )
    {
      v46 = *(_QWORD *)(gpqForeground + 372LL);
      if ( gbEnforceUIPI )
      {
        if ( v31 <= (unsigned int)v46 )
        {
          if ( v31 != (_DWORD)v46
            || (v47 = HIDWORD(v46), HIDWORD(v94) != (_DWORD)v47) && HIDWORD(v94) != -1 && (_DWORD)v47 != -1 )
          {
            if ( !v43 )
              return EtwTraceUIPIInputError(gptiCurrent, 0LL, v32, *(_QWORD *)(v32 + 372), 1);
          }
        }
      }
    }
  }
  result = ValidatePtiKbd(gpqForeground);
  v49 = v103;
  v50 = result;
  if ( v103 )
  {
    result = RawInputRequestedForKeyboard((struct tagTHREADINFO *)result);
    v51 = v93;
    v48 = 0LL;
    if ( (_DWORD)result )
    {
      v52 = v93;
      if ( (byte_1C03230D4 & 0x10) != 0 && (byte_1C03230D4 & 4) == 0 )
        v52 = v93 + 4;
      result = PostRawKeyboardInput(gpqForeground, a3, v102, v49, v52, (unsigned __int8)v9);
      v48 = 0LL;
      if ( a8 )
        return result;
      v45 = (_QWORD *)gpqForeground;
    }
  }
  else
  {
    v51 = v93;
  }
  if ( v98 != (_DWORD)v48 )
    return result;
  v53 = gspwndAltTab;
  v54 = a1;
  if ( v50 )
  {
    if ( !(_BYTE)a1 )
      return result;
    v55 = HasHidTable(v50);
    v48 = 0LL;
    if ( v55 )
    {
      v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 384) + 784LL) + 100LL);
      if ( (v56 & 0x20) != 0 && (_BYTE)v9 != 18 && (_BYTE)v9 != 9 && !v53 )
      {
        result = HasHidTable(v50);
        v48 = 0LL;
        if ( !(_DWORD)result )
          return result;
        if ( (v56 & 0x400) == 0 )
          return result;
        result = (unsigned int)(v9 + 90);
        if ( (unsigned __int8)(v9 + 90) > 0x11u )
          return result;
      }
      v54 = a1;
    }
  }
  if ( (BYTE4(gafAsyncKeyState[0]) & 0x14) != 0x10 || (_BYTE)v9 == 23 )
  {
    v57 = v91;
    if ( (_BYTE)v9 == 18 )
    {
      if ( v91 )
      {
        if ( dword_1C0323018 != (_DWORD)v48 )
        {
          v51 += 4;
          v93 = v51;
        }
        if ( v53 )
        {
          v59 = *v45;
          if ( *v45 )
          {
            v60 = *(_QWORD *)(v59 + 80);
            v61 = v60 ? *(_QWORD *)(v60 + 16) : *(_QWORD *)(v59 + 56);
            if ( !(unsigned int)HasHidTable(v61)
              || ((v62 = *(_QWORD *)(v59 + 80)) == 0 ? (v63 = *(_QWORD *)(v59 + 56)) : (v63 = *(_QWORD *)(v62 + 16)),
                  (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 384) + 784LL) + 100LL) & 0x20) == 0) )
            {
              v64 = v102;
              *(_DWORD *)(v59 + 332) |= 0x80u;
              PostInputMessage(*v45, 0LL, v51, 18LL, ((a2 | v92) << 16) | 1, a3, 0LL, v101, 0, v100, v64, 0LL);
            }
          }
          result = xxxCancelCoolSwitch();
          v65 = gspwndActivate;
          if ( gspwndActivate )
          {
            if ( gpqForeground == *(_QWORD *)(*((_QWORD *)gspwndActivate + 2) + 392LL) )
              SetNewForegroundQueue(0LL);
            SetLastInputWoken(*((_QWORD *)v65 + 2), 0LL);
            v104[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v104;
            v104[1] = v65;
            ++*((_DWORD *)v65 + 2);
            xxxSetForegroundWindow2(v65, 0LL, 18LL, 0);
            if ( (*((_BYTE *)v65 + 55) & 0x40) != 0 )
              xxxSetWindowPos((_DWORD)v65, 0, 0, 0, 0, 0, 3);
            ThreadUnlock1(v67, v66);
            return HMAssignmentUnlock(&gspwndActivate);
          }
          return result;
        }
        goto LABEL_139;
      }
LABEL_138:
      gppiLockSFW = v48;
    }
  }
  else
  {
    v57 = v91;
    v93 = v51 + 4;
    v92 |= 0x2000u;
    if ( (_BYTE)v9 == 18 )
    {
      dword_1C0323018 = 1;
      if ( v91 )
        goto LABEL_139;
      goto LABEL_138;
    }
    dword_1C0323018 = v48;
  }
LABEL_139:
  result = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(result + 48) == v48 && *(_QWORD *)(result + 40) == v48 && !v57 )
  {
    result = *(_QWORD *)&gafAsyncKeyState[0];
    if ( (BYTE4(gafAsyncKeyState[0]) & 0x14) == 0x10 )
    {
      if ( (result = v97, (_BYTE)v9 == 9) && (v97 & 1) == 0 || (_BYTE)v9 == 27 && (v97 & 2) == 0 )
      {
        v58 = *v45;
        if ( !*v45 )
          v58 = *(_QWORD *)(gptiRit + 392LL);
        ++*(_DWORD *)(v58 + 340);
        PushW32ThreadLock(v58, v105, UnlockQueue);
        xxxNextWindow(v58, (unsigned __int8)v9);
        return PopAndFreeAlwaysW32ThreadLock(v105);
      }
    }
  }
  v68 = (_QWORD *)*v45;
  if ( *v45 )
  {
    v69 = v68[10];
    v70 = v68[1];
    v71 = v69 ? *(_QWORD *)(v69 + 16) : v68[7];
    if ( !(unsigned int)HasHidTable(v71) )
      goto LABEL_190;
    v72 = v68[10];
    v73 = v72 ? *(_QWORD *)(v72 + 16) : v68[7];
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 384) + 784LL) + 100LL) & 0x20) == 0
      || ((v74 = v68[10]) == 0 ? (v75 = v68[7]) : (v75 = *(_QWORD *)(v74 + 16)),
          (result = HasHidTable(v75), (_DWORD)result)
       && ((v76 = v68[10]) == 0 ? (v77 = v68[7]) : (v77 = *(_QWORD *)(v76 + 16)),
           (result = *(_QWORD *)(v77 + 384), (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x400) != 0)
        && (result = (unsigned int)(v9 + 90), (unsigned __int8)(v9 + 90) <= 0x11u))) )
    {
LABEL_190:
      v78 = (unsigned __int8)v9;
      if ( (_BYTE)v9 == 0xE7 && (v54 & 0x1000) != 0 )
      {
        v78 = (a2 << 16) | (unsigned __int8)v9;
        v79 = 0;
      }
      else
      {
        v79 = a2;
      }
      v80 = ((v92 | v79) << 16) | 1;
      if ( v70
        && *(_DWORD *)(v70 + 24) == v93
        && ((v93 - 256) & 0xFFFB) == 0
        && *(_QWORD *)(v70 + 32) == v78
        && *(_WORD *)(v70 + 42) == HIWORD(v80) )
      {
        *(_QWORD *)(v70 + 40) = (HIWORD(v80) << 16) | (unsigned __int16)(*(_WORD *)(v70 + 40) + 1);
        return WakeSomeone(*v45, 0LL, v93, v70);
      }
      if ( (unsigned __int8)(v9 + 90) > 0x11u )
      {
LABEL_217:
        if ( (*(_DWORD *)(*v45 + 332LL) & 0x20) != 0 )
        {
          PostMoveToPwnd(*v45, 0LL, 0LL);
          v45 = (_QWORD *)gpqForeground;
        }
        return PostInputMessage(*v45, 0LL, v93, v78, v80, a3, 0LL, v101, 0, v100, v102, 0LL);
      }
      if ( !v91 )
      {
        if ( (unsigned __int8)(v9 + 83) > 2u )
        {
          PostEventMessageEx(v68[7], (_DWORD)v68, 15, 0, 0, 0LL, (unsigned __int8)v9, (__int64)v100);
LABEL_208:
          v45 = (_QWORD *)gpqForeground;
          goto LABEL_209;
        }
        v81 = v68[9];
        if ( v81 || (v81 = v68[10]) != 0 )
        {
          v82 = *(_QWORD *)(*(_QWORD *)(v81 + 16) + 392LL);
          if ( v82 )
          {
            MouseKeyFlags = GetMouseKeyFlags(v82);
            PostShellHookMessagesEx(
              0xCuLL,
              ((unsigned __int16)((unsigned __int8)v9 - 165) << 16) | (unsigned __int64)MouseKeyFlags,
              0LL);
            goto LABEL_208;
          }
        }
      }
LABEL_209:
      v84 = *v45;
      v85 = *(_QWORD *)(*v45 + 80LL);
      if ( v85 )
        v86 = *(_QWORD *)(v85 + 16);
      else
        v86 = *(_QWORD *)(v84 + 56);
      if ( (unsigned int)HasHidTable(v86) )
      {
        v87 = *(_QWORD *)(v84 + 80);
        v88 = v87 ? *(_QWORD *)(v87 + 16) : *(_QWORD *)(v84 + 56);
        result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v88 + 384) + 784LL) + 100LL);
        if ( (result & 0x20) != 0 )
          return result;
      }
      goto LABEL_217;
    }
  }
  return result;
}
