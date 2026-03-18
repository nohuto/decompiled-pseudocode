/*
 * XREFs of xxxSBWndProc @ 0x1C0234280
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E3E80 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ConstrainWindowSIZERECT @ 0x1C00754F8 (ConstrainWindowSIZERECT.c)
 *     xxxGetScrollBarInfo @ 0x1C00776D8 (xxxGetScrollBarInfo.c)
 *     _FChildVisible @ 0x1C0079908 (_FChildVisible.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     xxxCreateCaret @ 0x1C00C6E54 (xxxCreateCaret.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     zzzDestroyCaret @ 0x1C00CA0D0 (zzzDestroyCaret.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00CAA38 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxMoveWindow @ 0x1C00F2A0C (xxxMoveWindow.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0144AAC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C0144F0C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0145088 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxEnableScrollBar @ 0x1C014D0EC (xxxEnableScrollBar.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     zzzHideCaret @ 0x1C02268A8 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C02268C8 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C023217C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0232300 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0232F4C (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0233278 (DrawSize.c)
 *     SBCtlSetup @ 0x1C023389C (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C02338D8 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0233E10 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C02499F8 (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  struct tagSCROLLINFO *v7; // rcx
  __int16 v8; // ax
  __int16 v9; // di
  int *v10; // r15
  unsigned __int64 result; // rax
  char v13; // dl
  int v14; // r11d
  int v15; // r13d
  bool v16; // zf
  int v17; // r13d
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  _DWORD *v25; // rcx
  int v26; // r13d
  int v27; // r12d
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  _DWORD *v35; // rcx
  unsigned int v36; // esi
  unsigned int v37; // r9d
  int v38; // r8d
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  _DWORD *v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  _DWORD *v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // ecx
  _DWORD *v65; // rcx
  unsigned int v66; // r12d
  unsigned __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // ecx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  _DWORD *v74; // rcx
  unsigned int v75; // edx
  unsigned __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  _DWORD *v83; // rcx
  unsigned int v84; // eax
  unsigned __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // ecx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // ecx
  _DWORD *v92; // rcx
  unsigned __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  int v96; // ecx
  __int64 v97; // rcx
  __int64 v98; // rcx
  int v99; // ecx
  _DWORD *v100; // rcx
  unsigned __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  int v104; // ecx
  __int64 v105; // rcx
  __int64 v106; // rcx
  int v107; // ecx
  _DWORD *v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rcx
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v114; // rdi
  HDC v115; // r12
  __int64 v116; // rax
  int v117; // r15d
  unsigned int v118; // r9d
  __int64 v119; // rdx
  __int64 v120; // r10
  int v121; // r8d
  struct tagWND *v122; // rcx
  unsigned __int16 v123; // r8
  int v124; // [rsp+50h] [rbp-B0h]
  unsigned int v125; // [rsp+50h] [rbp-B0h]
  unsigned int v126; // [rsp+54h] [rbp-ACh]
  unsigned int v127; // [rsp+58h] [rbp-A8h]
  unsigned int v128; // [rsp+5Ch] [rbp-A4h]
  int v129; // [rsp+60h] [rbp-A0h] BYREF
  int *v130; // [rsp+68h] [rbp-98h] BYREF
  int v131; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v132; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v133; // [rsp+7Ch] [rbp-84h]
  unsigned int v134; // [rsp+80h] [rbp-80h]
  int v135; // [rsp+84h] [rbp-7Ch]
  __int64 v136; // [rsp+88h] [rbp-78h] BYREF
  __int64 v137; // [rsp+90h] [rbp-70h]
  int v138; // [rsp+A0h] [rbp-60h] BYREF
  int v139; // [rsp+A4h] [rbp-5Ch]
  int v140; // [rsp+A8h] [rbp-58h]
  int v141; // [rsp+ACh] [rbp-54h]
  int v142; // [rsp+B4h] [rbp-4Ch]
  _QWORD v143[10]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v124 = 0;
  v7 = (struct tagSCROLLINFO *)&v138;
  v130 = &v138;
  v8 = *((_WORD *)a1 + 33);
  v9 = 1;
  v10 = a4;
  if ( v8 != 666 )
  {
    if ( v8 || *((_DWORD *)a1 + 58) + 376 < (unsigned int)*(unsigned __int16 *)(gpsi + 328LL) )
      return 0LL;
    if ( a2 != 1 )
      return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
    *((_WORD *)a1 + 33) = 666;
    v7 = (struct tagSCROLLINFO *)&v138;
  }
  v13 = *((_BYTE *)a1 + 52);
  v14 = (v13 & 0x18) != 0;
  v129 = v14;
  v15 = 3;
  if ( a2 > 0xE2 )
  {
    if ( a2 > 0xEB )
    {
      switch ( a2 )
      {
        case 0x100u:
          if ( (unsigned __int64)a3 > 0x28 )
            return 0LL;
          switch ( (_DWORD)a3 )
          {
            case '!':
              v9 = 2;
              break;
            case '"':
              v9 = 3;
              break;
            case '#':
              v9 = 7;
              break;
            case '$':
              v9 = 6;
              break;
            default:
              if ( (unsigned int)a3 <= 0x24 )
                return 0LL;
              if ( (unsigned int)a3 <= 0x26 )
                v9 = 0;
              break;
          }
          v123 = v9;
          break;
        case 0x101u:
          if ( (unsigned __int64)a3 > 0x28 || (unsigned int)((_DWORD)a3 - 33) > 7 )
            return 0LL;
          v123 = 8;
          break;
        case 0x201u:
          goto LABEL_317;
        case 0x203u:
          if ( (v13 & 0x18) == 0 )
          {
LABEL_317:
            if ( (v13 & 0x18) == 0 )
            {
              if ( (*((_BYTE *)a1 + 54) & 1) != 0 )
                xxxSetFocus(a1, 0LL);
              zzzHideCaret(a1);
              SBCtlSetup((__int64)a1);
              LOBYTE(v4) = (GetKeyState(0x10u) & 0x8000u) != 0LL;
              xxxSBTrackInit(a1, (__int64)v10, 0, v4);
              return 0LL;
            }
          }
          LODWORD(v130) = (__int16)a4;
          HIDWORD(v130) = SWORD1(a4);
          ClientToScreen(a1, &v130);
          v119 = *((_QWORD *)a1 + 11);
          v120 = (unsigned __int16)v130 | (WORD2(v130) << 16);
          v121 = 17 - (((*(unsigned __int8 *)(v119 + 50) >> 6) & 1) != ((*(unsigned __int8 *)(v119 + 49) >> 6) & 1));
          v136 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v136;
          v137 = v119;
          if ( v119 )
            ++*(_DWORD *)(v119 + 8);
          v122 = (struct tagWND *)*((_QWORD *)a1 + 11);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            v122,
            274LL,
            v118 | (unsigned __int64)(unsigned int)(v121 - 9),
            v120,
            0,
            0,
            0LL,
            1,
            1);
          goto LABEL_273;
        default:
          v16 = a2 == 792;
LABEL_305:
          if ( !v16 )
            return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
          v115 = (HDC)a3;
          if ( !a3 )
          {
            v116 = xxxBeginPaint(a1, (__int64)v143);
            v14 = v129;
            v115 = (HDC)v116;
          }
          if ( v14 )
          {
            v117 = *((_BYTE *)a1 + 54) & 4;
            if ( (*((_BYTE *)a1 + 54) & 4) == 0 )
              SetOrClrWF(1, a1, 0xE04u, 1);
            DrawSize((__int64)a1, v115, 0, 0);
            if ( !v117 )
              SetOrClrWF(0, a1, 0xE04u, 1);
          }
          else
          {
            SBCtlSetup((__int64)a1);
            xxxDrawSB2(a1, (struct tagWND *)((char *)a1 + 384), v115, *((_DWORD *)a1 + 94), *((_DWORD *)a1 + 95));
          }
          if ( !a3 )
            xxxEndPaint(a1, v143);
          return 0LL;
      }
      xxxDoScroll(a1, *((struct tagWND **)a1 + 11), v123, 0, *((_DWORD *)a1 + 94));
      return 0LL;
    }
    switch ( a2 )
    {
      case 0xEBu:
        LODWORD(result) = xxxGetScrollBarInfo((__int64)a1, -4, (__int64)a4);
        break;
      case 0xE3u:
        *a3 = *((_DWORD *)a1 + 96);
        *a4 = *((_DWORD *)a1 + 97);
        return *((unsigned __int16 *)a1 + 192) | (unsigned __int64)(*((unsigned __int16 *)a1 + 194) << 16);
      case 0xE4u:
        LODWORD(result) = xxxEnableSBCtlArrows(a1);
        break;
      case 0xE6u:
        v124 = 1;
        goto LABEL_284;
      case 0xE9u:
        v7 = (struct tagSCROLLINFO *)a4;
        LODWORD(v10) = (_DWORD)a3;
        v130 = a4;
LABEL_286:
        v131 = 1;
        if ( (unsigned int)SBSetParms((struct tagWND *)((char *)a1 + 384), v7, &v131, &v129) )
          xxxWindowEvent(0x800Eu, (__int64 *)a1, -4, 0, 1);
        if ( (_DWORD)v10 )
        {
          zzzHideCaret(a1);
          SBCtlSetup((__int64)a1);
          zzzSetSBCaretPos(a1);
          if ( (unsigned int)FChildVisible((__int64)a1) )
          {
            if ( v131 || (v130[1] & 8) == 0 )
              v15 = 0;
            xxxEnableScrollBar((__int64)a1, 2, v15);
            DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (__int64)DCEx);
            v114 = GreSelectBrush(DCEx, ColorObjects);
            DrawThumb2((__int64)a1, (_DWORD *)a1 + 96, DCEx, ColorObjects, *((_DWORD *)a1 + 94), *((_DWORD *)a1 + 95));
            GreSelectBrush(DCEx, v114);
            _ReleaseDC(DCEx);
          }
          zzzShowCaret(a1);
        }
        return v129;
      case 0xEAu:
        LODWORD(result) = SBGetParms((__int64)a1, 2, (_DWORD *)a1 + 96, a4);
        break;
      default:
        return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
    }
    return (int)result;
  }
  if ( a2 == 226 )
  {
LABEL_284:
    LODWORD(v10) = v124;
    v140 = (int)a3;
    v141 = (int)a4;
    v139 = 4097;
    goto LABEL_285;
  }
  if ( a2 <= 0x14 )
  {
    if ( a2 != 20 )
    {
      if ( a2 != 1 )
      {
        switch ( a2 )
        {
          case 5u:
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
              return 0LL;
            zzzDestroyCaret();
            break;
          case 7u:
            break;
          case 8u:
            zzzDestroyCaret();
            return 0LL;
          case 0xAu:
            _InterlockedAdd(&glSendMessage, 1u);
            return xxxSendTransformableMessageTimeout(a1, 228LL, a3 == 0LL ? 3 : 0, 0LL, 0, 0, 0LL, 1, 1);
          default:
            v16 = a2 == 15;
            goto LABEL_305;
        }
        SBCtlSetup((__int64)a1);
        if ( *((_DWORD *)a1 + 94) )
          v17 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
        else
          v17 = *((_DWORD *)a1 + 104);
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
          {
            goto LABEL_27;
          }
        }
        else if ( !IsDPIDWMSysMet(v18)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v24 = 0)
                 : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v24) )
        {
LABEL_27:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v21 = 0)
              : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v21) )
          {
            v25 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v25 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_43:
          v26 = v17 - 2 * *v25;
          if ( *((_DWORD *)a1 + 94) )
            v27 = *((_DWORD *)a1 + 104);
          else
            v27 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0 )
            {
              goto LABEL_49;
            }
          }
          else if ( !IsDPIDWMSysMet(v28)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v34 = 0)
                   : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v34) )
          {
LABEL_49:
            if ( IsDPIDWMSysMet(0x2EuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v31 = 0)
                : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v31) )
            {
              v35 = (_DWORD *)(gpsi + 2840LL);
            }
            else
            {
              v35 = (_DWORD *)(gpsi + 2064LL);
            }
            goto LABEL_65;
          }
          v35 = (_DWORD *)(gpsi + 2452LL);
LABEL_65:
          xxxCreateCaret((__int64 *)a1, (HBRUSH)1, v26, v27 - 2 * *v35);
          zzzSetSBCaretPos(a1);
          zzzShowCaret(a1);
          return 0LL;
        }
        v25 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_43;
      }
      if ( !a4 )
      {
        UserSetLastError(87);
        return 0LL;
      }
      v36 = a4[11];
      v37 = a4[10];
      v38 = v10[9];
      v39 = v10[8];
      v126 = v36;
      v127 = v37;
      if ( v36 == 0x80000000 )
      {
        if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0 )
          v36 = 0;
        else
          v36 = *((_DWORD *)a1 + 28);
        v126 = v36;
      }
      if ( v37 == 0x80000000 )
      {
        if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0 )
          v37 = 0;
        else
          v37 = *((_DWORD *)a1 + 29);
        v127 = v37;
      }
      if ( v38 == 0x80000000 )
      {
        if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0 )
          v38 = 0;
        else
          v38 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
      }
      if ( v39 == 0x80000000 )
      {
        if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0 )
          v39 = 0;
        else
          v39 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
      }
      v128 = v38 + v36;
      v125 = v39 + v37;
      if ( (*((_BYTE *)a1 + 45) & 2) == 0 )
        *((_DWORD *)a1 + 13) &= 0xFFCFFFFF;
      if ( (v13 & 0x18) == 0 )
      {
        v40 = *v10;
        *((_DWORD *)a1 + 96) = (unsigned __int16)*v10;
        *((_DWORD *)a1 + 99) = (unsigned __int16)v40;
        *((_DWORD *)a1 + 97) = HIWORD(v40);
        v41 = *((_BYTE *)a1 + 52) & 1;
        *((_DWORD *)a1 + 98) = 0;
        *((_DWORD *)a1 + 94) = v41;
      }
      if ( (*((_DWORD *)a1 + 13) & 0x8000000) != 0 )
        *((_DWORD *)a1 + 95) = 3;
      if ( (v13 & 6) == 0 )
        return 0LL;
      if ( (v13 & 0x18) != 0 )
      {
        if ( (v13 & 4) == 0 )
          goto LABEL_133;
        if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
          {
            goto LABEL_97;
          }
        }
        else if ( !IsDPIDWMSysMet(v42)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v48 = 0)
                 : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v48) )
        {
LABEL_97:
          if ( IsDPIDWMSysMet(2uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v45 = 0)
              : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v45) )
          {
            v49 = (_DWORD *)(gpsi + 2664LL);
          }
          else
          {
            v49 = (_DWORD *)(gpsi + 1888LL);
          }
LABEL_113:
          v126 = v128 - *v49;
          if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0 )
            {
              goto LABEL_116;
            }
          }
          else if ( !IsDPIDWMSysMet(v50)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v56 = 0)
                   : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v56) )
          {
LABEL_116:
            if ( IsDPIDWMSysMet(3uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v53 = 0)
                : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v53) )
            {
              v57 = (_DWORD *)(gpsi + 2668LL);
            }
            else
            {
              v57 = (_DWORD *)(gpsi + 1892LL);
            }
            goto LABEL_132;
          }
          v57 = (_DWORD *)(gpsi + 2280LL);
LABEL_132:
          v127 = v125 - *v57;
LABEL_133:
          if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0 )
            {
              goto LABEL_136;
            }
          }
          else if ( !IsDPIDWMSysMet(v58)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v64 = 0)
                   : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v64) )
          {
LABEL_136:
            if ( IsDPIDWMSysMet(2uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v61 = 0)
                : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v61) )
            {
              v65 = (_DWORD *)(gpsi + 2664LL);
            }
            else
            {
              v65 = (_DWORD *)(gpsi + 1888LL);
            }
LABEL_152:
            v66 = v126;
            v128 = v126 + *v65;
            if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) != 0 )
              {
                goto LABEL_155;
              }
            }
            else if ( !IsDPIDWMSysMet(v67)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v73 = 0)
                     : (v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v73) )
            {
LABEL_155:
              if ( IsDPIDWMSysMet(3uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v70 = 0)
                  : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v70) )
              {
                v74 = (_DWORD *)(gpsi + 2668LL);
              }
              else
              {
                v74 = (_DWORD *)(gpsi + 1892LL);
              }
              goto LABEL_171;
            }
            v74 = (_DWORD *)(gpsi + 2280LL);
LABEL_171:
            v75 = v127;
            v125 = v127 + *v74;
LABEL_257:
            v84 = v128;
            goto LABEL_258;
          }
          v65 = (_DWORD *)(gpsi + 2276LL);
          goto LABEL_152;
        }
        v49 = (_DWORD *)(gpsi + 2276LL);
        goto LABEL_113;
      }
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 2) != 0 )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0 )
            {
              goto LABEL_177;
            }
          }
          else if ( !IsDPIDWMSysMet(v76)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v82 = 0)
                   : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v82) )
          {
LABEL_177:
            if ( IsDPIDWMSysMet(2uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v79 = 0)
                : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v79) )
            {
              v83 = (_DWORD *)(gpsi + 2664LL);
            }
            else
            {
              v83 = (_DWORD *)(gpsi + 1888LL);
            }
            goto LABEL_193;
          }
          v83 = (_DWORD *)(gpsi + 2276LL);
LABEL_193:
          v66 = v126;
          v84 = v126 + *v83;
LABEL_214:
          v75 = v127;
LABEL_258:
          v132 = v66;
          v134 = v84 - v66;
          v133 = v75;
          v135 = v125 - v75;
          ConstrainWindowSIZERECT((__int64)&v132);
          xxxMoveWindow(a1, v132, v133, v134, v135, 0);
          return 0LL;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0 )
          {
            goto LABEL_197;
          }
        }
        else if ( !IsDPIDWMSysMet(v85)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v91 = 0)
                 : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v91) )
        {
LABEL_197:
          if ( IsDPIDWMSysMet(2uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v88 = 0)
              : (v88 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v88) )
          {
            v92 = (_DWORD *)(gpsi + 2664LL);
          }
          else
          {
            v92 = (_DWORD *)(gpsi + 1888LL);
          }
          goto LABEL_213;
        }
        v92 = (_DWORD *)(gpsi + 2276LL);
LABEL_213:
        v84 = v128;
        v66 = v128 - *v92;
        goto LABEL_214;
      }
      if ( (v13 & 2) != 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x4000) != 0 )
          {
            goto LABEL_219;
          }
        }
        else if ( !IsDPIDWMSysMet(v93)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v99 = 0)
                 : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v99) )
        {
LABEL_219:
          if ( IsDPIDWMSysMet(3uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v96 = 0)
              : (v96 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v96) )
          {
            v100 = (_DWORD *)(gpsi + 2668LL);
          }
          else
          {
            v100 = (_DWORD *)(gpsi + 1892LL);
          }
          goto LABEL_235;
        }
        v100 = (_DWORD *)(gpsi + 2280LL);
LABEL_235:
        v75 = v127;
        v125 = v127 + *v100;
LABEL_256:
        v66 = v126;
        goto LABEL_257;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x4000) != 0 )
        {
          goto LABEL_239;
        }
      }
      else if ( !IsDPIDWMSysMet(v101)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v106) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v107 = 0)
               : (v107 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v107) )
      {
LABEL_239:
        if ( IsDPIDWMSysMet(3uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v103) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v104 = 0)
            : (v104 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v104) )
        {
          v108 = (_DWORD *)(gpsi + 2668LL);
        }
        else
        {
          v108 = (_DWORD *)(gpsi + 1892LL);
        }
        goto LABEL_255;
      }
      v108 = (_DWORD *)(gpsi + 2280LL);
LABEL_255:
      v75 = v125 - *v108;
      goto LABEL_256;
    }
    return 1LL;
  }
  switch ( a2 )
  {
    case 0x7Bu:
      v109 = *((_QWORD *)a1 + 11);
      v136 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v136;
      v137 = v109;
      if ( v109 )
        ++*(_DWORD *)(v109 + 8);
      xxxDoScrollMenu(*((struct tagWND **)a1 + 11), a1, *((_DWORD *)a1 + 94), (unsigned __int64)a4);
LABEL_273:
      ThreadUnlock1(v111, v110);
      return 0LL;
    case 0x84u:
      if ( (v13 & 0x10) == 0 )
        return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
      return 17LL
           - (((*((unsigned __int8 *)a1 + 50) >> 6) & 1) != ((*(unsigned __int8 *)(*((_QWORD *)a1 + 11) + 49LL) >> 6) & 1));
    case 0x87u:
      return 1LL;
    case 0xE0u:
      v139 = 4100;
      v142 = (int)a3;
LABEL_285:
      v138 = 28;
      goto LABEL_286;
  }
  if ( a2 != 225 )
    return xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
  return *((int *)a1 + 99);
}
