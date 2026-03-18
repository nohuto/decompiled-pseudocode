/*
 * XREFs of xxxButtonEvent @ 0x1C0085B2C
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C009D96C (xxxRemoteStopScreenUpdates.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE850 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     DCESpeedHitTest @ 0x1C0066310 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0066B3C (IsPointerPromotedMouseMessage.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     UpdateAsyncKeyState @ 0x1C0083C5C (UpdateAsyncKeyState.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 *     GetActiveHKL @ 0x1C0084850 (GetActiveHKL.c)
 *     RawInputRequestedForMouse @ 0x1C0085724 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C0086DAC (FixupPromotedMouseExtraInfoForHook.c)
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C0101F88 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     ProcessHungWindow @ 0x1C014260C (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D855C (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01EF868 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     xxxCancelCoolSwitch @ 0x1C02014FC (xxxCancelCoolSwitch.c)
 */

unsigned __int64 __fastcall xxxButtonEvent(
        unsigned int a1,
        struct tagPOINT a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned __int64 *a15,
        _DWORD *a16)
{
  unsigned __int8 v16; // r12
  int v17; // esi
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // r15d
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 result; // rax
  int v28; // r10d
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  BOOL v35; // ecx
  _DWORD *v36; // rcx
  unsigned int v37; // r11d
  __int64 v38; // rdx
  unsigned __int16 v39; // si
  __int64 v40; // r8
  int v41; // r13d
  unsigned int v42; // r12d
  int v43; // r13d
  __int64 v44; // rcx
  unsigned int v45; // edi
  unsigned int v46; // esi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  int v53; // r9d
  __int64 v54; // r10
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // r14
  __int64 v61; // rdi
  __int64 v62; // rsi
  _QWORD *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  struct _MOUSE_INPUT_DATA *v71; // rdx
  void *v72; // r8
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v82; // r9
  int v83; // r8d
  __int64 v84; // r10
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  __int64 v87; // rdi
  struct tagWND *v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rax
  struct tagWND *v91; // r8
  __int64 v92; // r14
  __int64 v93; // r12
  __int64 v94; // rax
  __int64 v95; // rcx
  unsigned int MonitorFlags; // eax
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rcx
  unsigned int v101; // r14d
  unsigned int v102; // edi
  int v103; // r13d
  int v104; // r14d
  int v105; // edi
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rcx
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  unsigned __int64 v112; // rdi
  struct tagWND *v113; // rcx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rbx
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  unsigned __int64 *v128; // rax
  __int64 v129; // rdx
  unsigned __int64 v130; // rcx
  __int64 v131; // [rsp+28h] [rbp-D8h]
  __int64 v132; // [rsp+28h] [rbp-D8h]
  __int64 v133; // [rsp+40h] [rbp-C0h]
  __int64 v134; // [rsp+40h] [rbp-C0h]
  int v135; // [rsp+60h] [rbp-A0h]
  unsigned int v137; // [rsp+68h] [rbp-98h]
  unsigned int v138; // [rsp+6Ch] [rbp-94h]
  int v139; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v140; // [rsp+74h] [rbp-8Ch]
  unsigned int v141; // [rsp+78h] [rbp-88h]
  __int64 v142; // [rsp+80h] [rbp-80h]
  struct tagPOINT v143; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v144; // [rsp+90h] [rbp-70h] BYREF
  __int64 v145; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v146; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v147; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v148; // [rsp+B0h] [rbp-50h]
  __int64 v149; // [rsp+B8h] [rbp-48h]
  _WORD v150[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v151; // [rsp+C8h] [rbp-38h]
  __int64 v152; // [rsp+D0h] [rbp-30h] BYREF
  struct tagWND *v153; // [rsp+D8h] [rbp-28h]
  __int64 v154; // [rsp+E8h] [rbp-18h]
  char v155[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v156; // [rsp+F8h] [rbp-8h]
  __int64 v157; // [rsp+100h] [rbp+0h]
  __int64 v158; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v159[3]; // [rsp+110h] [rbp+10h] BYREF
  struct tagPOINT v160; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v161; // [rsp+130h] [rbp+30h]
  BOOL v162; // [rsp+134h] [rbp+34h]
  unsigned int v163; // [rsp+138h] [rbp+38h]
  __int64 v164; // [rsp+140h] [rbp+40h]
  _BYTE v165[64]; // [rsp+150h] [rbp+50h] BYREF

  v16 = 0;
  v17 = 0;
  v139 = 0;
  v148 = a6;
  v156 = a8;
  v143 = a2;
  v146 = a16;
  v154 = a3;
  v140 = a1;
  v18 = gptiCurrent;
  v151 = a9;
  v138 = 0;
  v142 = gptiCurrent;
  v19 = *(_QWORD *)(gptiCurrent + 376LL);
  v20 = *(_QWORD *)(v19 + 832);
  v21 = *(_DWORD *)(v19 + 12) >> 31;
  v135 = v21;
  v144 = v20;
  if ( (unsigned int)IsDwmInputThread() )
  {
    if ( a14 )
    {
      v20 = *a15;
      v21 = *((_DWORD *)a15 + 2);
      v144 = *a15;
      v135 = v21;
    }
    v149 = gptiRit;
  }
  else
  {
    a14 = 0;
    v149 = gptiCurrent;
  }
  if ( gspwndAltTab )
  {
    xxxCancelCoolSwitch();
    if ( !a11 )
    {
      if ( a10 )
      {
        v22 = gpqForeground;
        if ( gpqForeground )
        {
          v23 = *(_QWORD *)(gpqForeground + 372LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v20 <= (unsigned int)v23 )
            {
              if ( (_DWORD)v20 != (_DWORD)v23
                || (v24 = HIDWORD(v23), HIDWORD(v20) != (_DWORD)v24) && HIDWORD(v20) != -1 && (_DWORD)v24 != -1 )
              {
                if ( !v21 )
                  goto LABEL_17;
              }
            }
          }
        }
      }
    }
  }
  v28 = v140;
  v141 = v140;
  if ( (v140 & 3) == 0 )
    goto LABEL_56;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
    {
      goto LABEL_24;
    }
LABEL_35:
    v36 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_40;
  }
  if ( IsDPIDWMSysMet(v29)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) == 0 )
  {
    v35 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 244LL) & 1;
    v20 = v144;
    if ( v35 )
      goto LABEL_35;
  }
LABEL_24:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v32 = 0)
      : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v20 = v144,
        v32) )
  {
    v36 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v36 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_40:
  if ( !*v36 || a9 && *(char *)(a9 + 2) < 0 )
  {
    v28 = v140;
  }
  else
  {
    v28 = v140 ^ 3;
    v140 ^= 3u;
  }
  if ( v28 == 2 )
  {
    v16 = 2;
    v138 = 2;
    v17 = 1;
  }
  else if ( v28 == 1 )
  {
    v16 = 1;
    v138 = 1;
    v17 = 2;
  }
  if ( !gbMouseButtonsRecentlySwapped || a9 && *(char *)(a9 + 2) < 0 )
  {
LABEL_56:
    v37 = a4;
    goto LABEL_57;
  }
  v37 = a4;
  if ( (a4 == 0) == (((unsigned __int8)(1 << (2 * (v16 & 3))) & gafAsyncKeyState[(unsigned __int64)v16 >> 2]) != 0)
    && a4 == (((unsigned __int8)(1 << (2 * (v17 & 3))) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v17 >> 2]) != 0) )
  {
    v28 ^= 3u;
    v138 = v17;
    v140 = v28;
  }
  gbMouseButtonsRecentlySwapped = 0;
LABEL_57:
  v38 = 514LL;
  v39 = 0;
  v40 = 513LL;
  switch ( v28 )
  {
    case 1:
      if ( v37 )
      {
        v42 = 514;
        v137 = 514;
        break;
      }
      v42 = a13 != 0 ? 515 : 513;
      goto LABEL_78;
    case 2:
      if ( v37 )
        v42 = 517;
      else
        v42 = a13 != 0 ? 518 : 516;
LABEL_78:
      v137 = v42;
      break;
    case 4:
      if ( v37 )
        v43 = 520;
      else
        v43 = a13 != 0 ? 521 : 519;
      v137 = v43;
      v42 = v43;
      v138 = 4;
      break;
    default:
      result = (unsigned int)(v28 - 8);
      if ( v28 != 8 && v28 != 16 )
        return result;
      if ( v37 )
        v41 = 524;
      else
        v41 = a13 != 0 ? 525 : 523;
      v137 = v41;
      v42 = v41;
      if ( v28 == 8 )
      {
        v138 = 5;
        v39 = 1;
      }
      else
      {
        v138 = 6;
        v39 = 2;
      }
      break;
  }
  result = 2147516416LL;
  v44 = (unsigned int)gpdwCPUserPreferencesMask & 0x80008000;
  if ( (_DWORD)v44 == -2147450880 )
  {
    if ( v42 == 513 )
    {
      if ( gfStartClickLock )
      {
        gfStartClickLock = 0;
        return result;
      }
      gdwStartClickLockTick = a5;
      gfStartClickLock = 1;
    }
    else if ( v42 == 514 && gfStartClickLock )
    {
      v45 = a5 - gdwStartClickLockTick;
      result = UPDWORDPointer(8200LL);
      if ( v45 > *(_DWORD *)result )
        return result;
      gfStartClickLock = 0;
    }
  }
  v46 = v39 << 16;
  v157 = v46;
  v147 = v143;
  v47 = IsCurrentDesktopComposed(v44, v38, v40);
  v48 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( v47 )
    v49 = DCESpeedHitTest(v48, 4u, 0, v148, (__int64 *)&v143, v154, &v139, (__int64)v165, 0LL, 0LL);
  else
    v49 = SpeedHitTest(v48, 4u, 0, v148, *(_QWORD *)&v143, (__int64)v165, 0LL, 0LL);
  v52 = v49;
  if ( PhkFirstValid(v149, 14LL, v50, v51) )
  {
    v160 = v143;
    v161 = v46;
    v163 = a5;
    v162 = a10 != 0;
    v164 = FixupPromotedMouseExtraInfoForHook(v151, a7);
    if ( !v52
      || v52 == *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
      || (v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 376LL) + 832LL),
          v56 = *(_QWORD *)(*(_QWORD *)(v54 + 16) + 376LL),
          v57 = *(_QWORD *)(v56 + 832),
          !gbEnforceUIPI)
      || (unsigned int)v57 > (unsigned int)v55
      || (_DWORD)v57 == (_DWORD)v55
      && ((v58 = HIDWORD(v57), v59 = HIDWORD(v55), (_DWORD)v58 == (_DWORD)v59) || (_DWORD)v58 == -1 || (_DWORD)v59 == -1)
      || *(int *)(v56 + 12) < 0 )
    {
      v60 = *(_QWORD *)(gptiCurrent + 1208LL);
      v61 = *(_QWORD *)(gptiCurrent + 1192LL);
      v62 = *(_QWORD *)(gptiCurrent + 1200LL);
      *(_QWORD *)(gptiCurrent + 1208LL) = &v160;
      if ( v52 )
      {
        v63 = *(_QWORD **)(*(_QWORD *)(v52 + 16) + 376LL);
        if ( *v63 == gpepCSRSS )
        {
          *(_DWORD *)(gptiCurrent + 1204LL) = 0;
          *(_DWORD *)(gptiCurrent + 1200LL) = 0x2000;
        }
        else
        {
          *(_QWORD *)(gptiCurrent + 1200LL) = v63[104];
        }
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 1200LL) = -1;
        *(_DWORD *)(gptiCurrent + 1204LL) = -1;
      }
      if ( !v53 || v135 )
      {
        *(_DWORD *)(gptiCurrent + 1192LL) = -1;
        *(_DWORD *)(gptiCurrent + 1196LL) = -1;
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 1192LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
      }
      v152 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v152;
      v153 = (struct tagWND *)v52;
      ++*(_DWORD *)(v52 + 8);
      if ( xxxCallHook2(v54, 0, v42, (int *)&v160, (__int64)v155) )
      {
        result = ThreadUnlock1(v65, v64);
        v66 = v142;
        *(_QWORD *)(v142 + 1192) = v61;
        *(_QWORD *)(v66 + 1200) = v62;
        *(_QWORD *)(v66 + 1208) = v60;
        return result;
      }
      v67 = ThreadUnlock1(v65, v64);
      v68 = v142;
      v52 = v67;
      v53 = a10;
      *(_QWORD *)(v142 + 1208) = v60;
      v18 = v68;
      *(_QWORD *)(v68 + 1192) = v61;
      *(_QWORD *)(v68 + 1200) = v62;
    }
    if ( !a11 )
    {
      if ( v53 )
      {
        v22 = gpqForeground;
        if ( gpqForeground )
        {
          v69 = *(_QWORD *)(gpqForeground + 372LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v20 <= (unsigned int)v69 )
            {
              if ( (_DWORD)v20 != (_DWORD)v69
                || (v70 = HIDWORD(v69), HIDWORD(v20) != (_DWORD)v70) && HIDWORD(v20) != -1 && (_DWORD)v70 != -1 )
              {
                if ( !v135 )
                {
LABEL_17:
                  v25 = 0LL;
LABEL_18:
                  v26 = v18;
                  return EtwTraceUIPIInputError(v26, v25, v22, *(_QWORD *)(v22 + 372), 1);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v156 && v151 && (unsigned int)RawInputRequestedForMouse() )
    PostRawMouseInput(gpqForeground, a5, v72, v71);
  result = gpqForeground;
  if ( gpqForeground )
  {
    v73 = *(_QWORD *)(gpqForeground + 64LL);
    v74 = v73 ? *(_QWORD *)(v73 + 16) : *(_QWORD *)(gpqForeground + 48LL);
    result = HasHidTable(v74);
    if ( (_DWORD)result )
    {
      v76 = *(_QWORD *)(gpqForeground + 64LL);
      v77 = v76 ? *(_QWORD *)(v76 + 16) : *(_QWORD *)(gpqForeground + 48LL);
      result = *(_QWORD *)(v77 + 376);
      if ( (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x100) != 0 )
      {
        v78 = *(_QWORD *)(gpqForeground + 64LL);
        v79 = v78 ? *(_QWORD *)(v78 + 16) : *(_QWORD *)(gpqForeground + 48LL);
        result = *(_QWORD *)(v79 + 376);
        v80 = *(_QWORD *)(*(_QWORD *)(result + 784) + 64LL);
        if ( v80 )
          return UpdateAsyncKeyState(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 384LL), v138, a4, v75);
      }
    }
  }
  CompositionInputWindowUIOwner = (struct tagWND *)v52;
  if ( v52 )
  {
    v139 = IsPointerPromotedMouseMessage(v42, v146);
    v83 = v139;
    if ( v139 )
    {
      v84 = *(_QWORD *)(v52 + 16);
      v85 = *(_QWORD *)(*(_QWORD *)(v84 + 376) + 832LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v20 <= (unsigned int)v85 )
        {
          if ( (_DWORD)v20 != (_DWORD)v85
            || (v86 = HIDWORD(v85), HIDWORD(v20) != (_DWORD)v86) && HIDWORD(v20) != -1 && (_DWORD)v86 != -1 )
          {
            v22 = *(_QWORD *)(v84 + 384);
            v25 = *(_QWORD *)(v52 + 16);
            goto LABEL_18;
          }
        }
      }
    }
    v87 = LOWORD(v143.x) | (LOWORD(v143.y) << 16);
    v145 = v87;
    if ( (*gpsi & 4) != 0 && !a4 )
    {
      if ( (GetActiveHKL() & 0x3FF) == 0x12 && (*(_BYTE *)(*(_QWORD *)(v52 + 152) + 86LL) & 1) == 0 && gpqForeground )
        FinalizeKoreanImeCompStrOnMouseClick((struct tagWND *)v52);
      v83 = v139;
    }
    v88 = gspwndScreenCapture;
    if ( gspwndScreenCapture )
    {
      CompositionInputWindowUIOwner = gspwndScreenCapture;
      if ( v83 )
      {
        v25 = *((_QWORD *)gspwndScreenCapture + 2);
        v89 = *(_QWORD *)(*(_QWORD *)(v25 + 376) + 832LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v20 <= (unsigned int)v89 )
          {
            if ( (_DWORD)v20 != (_DWORD)v89 )
              goto LABEL_165;
            v90 = HIDWORD(v89);
            if ( HIDWORD(v20) != (_DWORD)v90 && HIDWORD(v20) != -1 && (_DWORD)v90 != -1 )
              goto LABEL_165;
          }
        }
      }
      UpdateMouseButtonTarget(gspwndScreenCapture, (struct tagWND *)v52, v147, &v143, &v145);
      v88 = gspwndScreenCapture;
      v87 = v145;
    }
    v91 = gspwndMouseOwner;
    if ( gspwndMouseOwner )
    {
      if ( !v88 )
      {
        if ( v139 )
        {
          v25 = *((_QWORD *)gspwndMouseOwner + 2);
          v109 = *(_QWORD *)(*(_QWORD *)(v25 + 376) + 832LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v20 <= (unsigned int)v109 )
            {
              if ( (_DWORD)v20 != (_DWORD)v109
                || (v110 = HIDWORD(v109), HIDWORD(v20) != (_DWORD)v110) && HIDWORD(v20) != -1 && (_DWORD)v110 != -1 )
              {
LABEL_165:
                v22 = *(_QWORD *)(v25 + 384);
                goto LABEL_18;
              }
            }
          }
        }
        if ( a4 )
        {
          v111 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          if ( v111 != *((_QWORD *)gspwndMouseOwner + 2) )
          {
            SetLastInputWoken(v111, 0LL);
            v91 = gspwndMouseOwner;
          }
        }
        CompositionInputWindowUIOwner = v91;
        UpdateMouseButtonTarget(v91, (struct tagWND *)v52, v147, &v143, &v145);
      }
      v101 = a4;
      if ( a4 )
      {
        v103 = 2;
        if ( a12 )
          PostEventMessageEx(
            *((_QWORD *)CompositionInputWindowUIOwner + 2),
            *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
            2u,
            0LL,
            0,
            0LL,
            0LL,
            0LL);
        v102 = v141;
        gwMouseOwnerButton &= ~v141;
        if ( !gwMouseOwnerButton )
          HMAssignmentUnlock(&gspwndMouseOwner);
LABEL_192:
        result = UpdateAsyncKeyState(
                   *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
                   v138,
                   v101,
                   v82);
        v104 = 0;
        if ( a4 || (result = *((_QWORD *)CompositionInputWindowUIOwner + 2), *(_QWORD *)(result + 384) == gpqForeground) )
        {
          v25 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          v22 = *(_QWORD *)(v25 + 384);
          if ( v22 == gpqForeground )
            goto LABEL_199;
          if ( !a10 )
            goto LABEL_199;
          result = *(_QWORD *)(v22 + 372);
          if ( !gbEnforceUIPI )
            goto LABEL_199;
          if ( (unsigned int)v20 > (unsigned int)result )
            goto LABEL_199;
          if ( (_DWORD)v20 == (_DWORD)result )
          {
            v123 = HIDWORD(v20);
            result >>= 32;
            if ( (_DWORD)v123 == (_DWORD)result || (_DWORD)v123 == -1 || (_DWORD)result == -1 )
              goto LABEL_199;
          }
          v105 = v135;
          if ( v135 )
          {
LABEL_200:
            if ( CompositionInputWindowUIOwner )
            {
              if ( !v139
                || (result = *((_QWORD *)CompositionInputWindowUIOwner + 2), (*(_DWORD *)(result + 440) & 1) == 0) )
              {
                v106 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL);
                v107 = *(_QWORD *)(v106 + 64);
                v108 = v107 ? *(_QWORD *)(v107 + 16) : *(_QWORD *)(v106 + 48);
                if ( !(unsigned int)HasHidTable(v108)
                  || ((v124 = *(_QWORD *)(v106 + 64)) == 0
                    ? (v125 = *(_QWORD *)(v106 + 48))
                    : (v125 = *(_QWORD *)(v124 + 16)),
                      result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v125 + 376) + 784LL) + 100LL),
                      (result & 2) == 0) )
                {
                  if ( (*(_DWORD *)(v106 + 332) & 0x20) != 0 )
                    PostMoveToPwnd(v106, 0LL, 0);
                  v126 = *((_QWORD *)CompositionInputWindowUIOwner + 39);
                  if ( v126 )
                  {
                    v127 = *(_QWORD *)(v126 + 384);
                    if ( (*(_DWORD *)(v127 + 332) & 0x20) != 0 )
                      PostMoveToPwnd(v127, 0LL, 0);
                  }
                  if ( !a14 || (v128 = &v144, v105) )
                    v128 = 0LL;
                  if ( !a14 || v105 )
                    v103 = 0;
                  LODWORD(v133) = v103;
                  LODWORD(v131) = a5;
                  PostInputMessage(
                    *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
                    (__int64)CompositionInputWindowUIOwner,
                    v42,
                    v157,
                    v145,
                    v131,
                    v148,
                    a7,
                    v133,
                    v146,
                    0LL,
                    v128);
                  v130 = gptiCurrent;
                  v152 = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = &v152;
                  v153 = CompositionInputWindowUIOwner;
                  ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
                  if ( !a4 )
                    goto LABEL_306;
                  v130 = (unsigned int)xmmword_1C032229C;
                  if ( (dword_1C03222C4 & 1) == 0 && (xmmword_1C032229C & 1) == 0 )
                    goto LABEL_306;
                  if ( (xmmword_1C032229C & 1) != 0 )
                  {
                    v130 = v140;
                    LOWORD(v130) = ~(_WORD)v140;
                    gwMKButtonState &= ~(_WORD)v140;
                  }
                  if ( (dword_1C03222C4 & 1) != 0 )
                    xxxUnlatchStickyKeys();
                  if ( a10
                    && gpqForeground
                    && (v130 = *(_QWORD *)(gpqForeground + 372LL), gbEnforceUIPI)
                    && (unsigned int)v144 <= (unsigned int)v130
                    && ((_DWORD)v144 != (_DWORD)v130
                     || (v130 >>= 32, HIDWORD(v144) != (_DWORD)v130)
                     && (v129 = 0xFFFFFFFFLL, HIDWORD(v144) != -1)
                     && (_DWORD)v130 != -1)
                    && !v105 )
                  {
                    EtwTraceUIPIInputError(v142, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
                  }
                  else
                  {
LABEL_306:
                    if ( v42 == 513 )
                    {
                      v130 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 408LL);
                      if ( v130 )
                      {
                        if ( *(_QWORD *)(v130 + 24) )
                        {
                          if ( (unsigned int)IsHungWindow(CompositionInputWindowUIOwner) )
                            ProcessHungWindow(CompositionInputWindowUIOwner);
                        }
                      }
                    }
                  }
                  return ThreadUnlock1(v130, v129);
                }
              }
            }
            return result;
          }
        }
        else
        {
          if ( gpqForeground )
          {
            result = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( CompositionInputWindowUIOwner == *(struct tagWND **)(result + 16)
              && ((gwMouseOwnerButton & v102) != 0 || !gwMouseOwnerButton) )
            {
              result = PostEventMessageEx(*(_QWORD *)(gpqForeground + 48LL), gpqForeground, 2u, 0LL, 0, 0LL, 0LL, 0LL);
LABEL_199:
              v105 = v135;
              goto LABEL_200;
            }
          }
          if ( (gwMouseOwnerButton & v102) == 0 && gwMouseOwnerButton )
            goto LABEL_199;
          v112 = (unsigned __int64)CompositionInputWindowUIOwner;
          if ( (unsigned int)IsCompositionInputWindow(CompositionInputWindowUIOwner)
            && *((_QWORD *)CompositionInputWindowUIOwner + 11) == GetMessageWindow((__int64)CompositionInputWindowUIOwner) )
          {
            CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v113);
          }
          if ( !a10
            || (v25 = *(_QWORD *)(v112 + 16), v22 = *(_QWORD *)(v25 + 384),
                                              v114 = *(_QWORD *)(v22 + 372),
                                              !gbEnforceUIPI)
            || (unsigned int)v20 > (unsigned int)v114
            || (_DWORD)v20 == (_DWORD)v114
            && ((v115 = HIDWORD(v114), HIDWORD(v20) == (_DWORD)v115) || HIDWORD(v20) == -1 || (_DWORD)v115 == -1)
            || v135 )
          {
            result = GetNonChildAncestor(CompositionInputWindowUIOwner);
            if ( (*(_BYTE *)(result + 51) & 8) != 0 || (*((_BYTE *)CompositionInputWindowUIOwner + 289) & 0x10) != 0 )
              goto LABEL_253;
            if ( CompositionInputWindowUIOwner != (struct tagWND *)v112 )
            {
              v104 = 1;
              v159[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v159;
              v159[1] = v112;
              ++*(_DWORD *)(v112 + 8);
            }
            v152 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v152;
            v153 = CompositionInputWindowUIOwner;
            ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
            xxxSetForegroundWindow2(CompositionInputWindowUIOwner);
            result = ThreadUnlock1(v117, v116);
            if ( v104 == 1 )
            {
              result = ThreadUnlock1(v119, v118);
              v112 = result;
            }
            if ( !a10
              || (v22 = gpqForeground) == 0
              || (v120 = *(_QWORD *)(gpqForeground + 372LL), !gbEnforceUIPI)
              || (unsigned int)v20 > (unsigned int)v120
              || (_DWORD)v20 == (_DWORD)v120
              && ((v121 = HIDWORD(v20), v122 = HIDWORD(v120), (_DWORD)v121 == (_DWORD)v122)
               || (result = 0xFFFFFFFFLL, (_DWORD)v121 == -1)
               || (_DWORD)v122 == -1)
              || v135 )
            {
LABEL_253:
              CompositionInputWindowUIOwner = (struct tagWND *)v112;
              goto LABEL_199;
            }
            v25 = 0LL;
          }
        }
        v26 = v142;
        return EtwTraceUIPIInputError(v26, v25, v22, *(_QWORD *)(v22 + 372), 1);
      }
      goto LABEL_190;
    }
    if ( a4 )
    {
      v102 = v141;
      v101 = a4;
      gwMouseOwnerButton &= ~v141;
      goto LABEL_191;
    }
    v92 = gpqForeground;
    if ( gpqForeground )
      v92 = *(_QWORD *)(gpqForeground + 64LL);
    if ( !v92
      || *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL) == *(_QWORD *)(*(_QWORD *)(v92 + 16) + 384LL) )
    {
LABEL_189:
      HMAssignmentLock(&gspwndMouseOwner, CompositionInputWindowUIOwner);
      v101 = 0;
LABEL_190:
      v102 = v141;
      gwMouseOwnerButton |= v141;
LABEL_191:
      v103 = 2;
      goto LABEL_192;
    }
    v93 = v87;
    if ( (unsigned int)IsWindowDesktopComposed(v92)
      && !(unsigned int)SameCoordinateSpace(
                          *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 376LL),
                          *(_QWORD *)(*(_QWORD *)(v92 + 16) + 376LL)) )
    {
      v94 = ValidateHmonitorNoRip(*(_QWORD *)(v92 + 352));
      v95 = *(_QWORD *)(v92 + 16);
      v158 = v94;
      MonitorFlags = GetMonitorFlags(*(_QWORD *)(v95 + 376));
      PhysicalToLogicalDPIPoint(v150, &v147, MonitorFlags, &v158);
      v93 = v150[0] | (v150[2] << 16);
    }
    if ( !a10
      || (v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v92 + 16) + 384LL) + 372LL), !gbEnforceUIPI)
      || (unsigned int)v20 > (unsigned int)v97
      || (_DWORD)v20 == (_DWORD)v97
      && ((v98 = HIDWORD(v97), HIDWORD(v20) == (_DWORD)v98) || HIDWORD(v20) == -1 || (_DWORD)v98 == -1)
      || v135 )
    {
      v99 = *(_QWORD *)(*(_QWORD *)(v92 + 16) + 384LL);
      LODWORD(v133) = 0;
      LODWORD(v131) = 0;
      PostInputMessage(v99, v92, v137, 0LL, v93, v131, 0LL, 0LL, v133, v146, 0LL, 0LL);
      LODWORD(v134) = 0;
      LODWORD(v132) = 0;
      PostInputMessage(v99, v92, v137 + 1, 0LL, v93, v132, 0LL, 0LL, v134, v146, 0LL, 0LL);
    }
    result = *(_QWORD *)(v92 + 16);
    if ( !*(_QWORD *)(result + 592)
      || (v100 = *(_QWORD *)(result + 528)) != 0 && (result = *(unsigned int *)(v100 + 8), (result & 1) != 0) )
    {
      v42 = v137;
      goto LABEL_189;
    }
  }
  return result;
}
