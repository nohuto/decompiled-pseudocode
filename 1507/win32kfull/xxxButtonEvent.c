/*
 * XREFs of xxxButtonEvent @ 0x1C004BA34
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE330 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     UpdateAsyncKeyState @ 0x1C00492B8 (UpdateAsyncKeyState.c)
 *     PhkFirstValid @ 0x1C004A274 (PhkFirstValid.c)
 *     GetActiveHKL @ 0x1C004A700 (GetActiveHKL.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C004B55C (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     RawInputRequestedForMouse @ 0x1C004B914 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C004CCB4 (FixupPromotedMouseExtraInfoForHook.c)
 *     IsCurrentDesktopComposed @ 0x1C0057DE0 (IsCurrentDesktopComposed.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     DCESpeedHitTest @ 0x1C0065270 (DCESpeedHitTest.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0090B4C (IsPointerPromotedMouseMessage.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C00F9990 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     ProcessHungWindow @ 0x1C01176A8 (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D6AE4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01EF348 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 */

unsigned __int64 __fastcall xxxButtonEvent(
        unsigned int a1,
        struct tagPOINT a2,
        __int64 a3,
        int a4,
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
        __int64 a16)
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
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  BOOL v35; // ecx
  _DWORD *v36; // rcx
  int v37; // r11d
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
  __int64 v50; // r13
  int v51; // r9d
  __int64 v52; // r10
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // r14
  __int64 v59; // rdi
  __int64 v60; // rsi
  _QWORD *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  struct _MOUSE_INPUT_DATA *v69; // rdx
  void *v70; // r8
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  int v79; // r8d
  __int64 v80; // r10
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  __int64 v83; // rdi
  struct tagWND *v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  struct tagWND *v87; // r8
  __int64 v88; // r14
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // rcx
  unsigned int MonitorFlags; // eax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rcx
  int v97; // r14d
  unsigned int v98; // edi
  int v99; // r13d
  int v100; // r14d
  int v101; // edi
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  __int64 v107; // rcx
  unsigned __int64 v108; // rdi
  struct tagWND *v109; // rcx
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rbx
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int64 *v124; // rax
  __int64 v125; // rdx
  unsigned __int64 v126; // rcx
  int v127; // [rsp+60h] [rbp-A0h]
  unsigned int v129; // [rsp+68h] [rbp-98h]
  unsigned int v130; // [rsp+6Ch] [rbp-94h]
  int v131; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v132; // [rsp+74h] [rbp-8Ch]
  unsigned int v133; // [rsp+78h] [rbp-88h]
  __int64 v134; // [rsp+80h] [rbp-80h]
  struct tagPOINT v135; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v136; // [rsp+90h] [rbp-70h] BYREF
  __int64 v137; // [rsp+98h] [rbp-68h] BYREF
  __int64 v138; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v139; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v140; // [rsp+B0h] [rbp-50h]
  __int64 v141; // [rsp+B8h] [rbp-48h]
  _WORD v142[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v143; // [rsp+C8h] [rbp-38h]
  __int64 v144; // [rsp+D0h] [rbp-30h] BYREF
  struct tagWND *v145; // [rsp+D8h] [rbp-28h]
  __int64 v146; // [rsp+E8h] [rbp-18h]
  char v147[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-8h]
  __int64 v149; // [rsp+100h] [rbp+0h]
  __int64 v150; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v151[3]; // [rsp+110h] [rbp+10h] BYREF
  struct tagPOINT v152; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v153; // [rsp+130h] [rbp+30h]
  BOOL v154; // [rsp+134h] [rbp+34h]
  unsigned int v155; // [rsp+138h] [rbp+38h]
  __int64 v156; // [rsp+140h] [rbp+40h]
  _BYTE v157[64]; // [rsp+150h] [rbp+50h] BYREF

  v16 = 0;
  v17 = 0;
  v131 = 0;
  v140 = a6;
  v148 = a8;
  v135 = a2;
  v138 = a16;
  v146 = a3;
  v132 = a1;
  v18 = gptiCurrent;
  v143 = a9;
  v130 = 0;
  v134 = gptiCurrent;
  v19 = *(_QWORD *)(gptiCurrent + 384LL);
  v20 = *(_QWORD *)(v19 + 832);
  v21 = *(_DWORD *)(v19 + 12) >> 31;
  v127 = v21;
  v136 = v20;
  if ( (unsigned int)IsDwmInputThread() )
  {
    if ( a14 )
    {
      v20 = *a15;
      v21 = *((_DWORD *)a15 + 2);
      v136 = *a15;
      v127 = v21;
    }
    v141 = gptiRit;
  }
  else
  {
    a14 = 0;
    v141 = gptiCurrent;
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
  v28 = v132;
  v133 = v132;
  if ( (v132 & 3) == 0 )
    goto LABEL_56;
  if ( (unsigned int)IsDPIAbsoluteSysMet(23LL) )
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
  if ( (unsigned int)IsDPIDWMSysMet(v29)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) == 0 )
  {
    v35 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                    + 260LL) & 1;
    v20 = v136;
    if ( v35 )
      goto LABEL_35;
  }
LABEL_24:
  if ( (unsigned int)IsDPIDWMSysMet(23LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v32 = 0)
      : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v20 = v136,
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
    v28 = v132;
  }
  else
  {
    v28 = v132 ^ 3;
    v132 ^= 3u;
  }
  if ( v28 == 2 )
  {
    v16 = 2;
    v130 = 2;
    v17 = 1;
  }
  else if ( v28 == 1 )
  {
    v16 = 1;
    v130 = 1;
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
    v130 = v17;
    v132 = v28;
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
        v129 = 514;
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
      v129 = v42;
      break;
    case 4:
      if ( v37 )
        v43 = 520;
      else
        v43 = a13 != 0 ? 521 : 519;
      v129 = v43;
      v42 = v43;
      v130 = 4;
      break;
    default:
      result = (unsigned int)(v28 - 8);
      if ( v28 != 8 && v28 != 16 )
        return result;
      if ( v37 )
        v41 = 524;
      else
        v41 = a13 != 0 ? 525 : 523;
      v129 = v41;
      v42 = v41;
      if ( v28 == 8 )
      {
        v130 = 5;
        v39 = 1;
      }
      else
      {
        v130 = 6;
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
  v149 = v46;
  v139 = v135;
  v47 = IsCurrentDesktopComposed(v44, v38, v40);
  v48 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( v47 )
    v49 = DCESpeedHitTest(v48, 4, 0, v140, (__int64)&v135, v146, (__int64)&v131, (__int64)v157, 0LL, 0LL);
  else
    v49 = SpeedHitTest(v48, 4, 0, v140, *(_QWORD *)&v135, (__int64)v157, 0LL, 0LL);
  v50 = v49;
  if ( PhkFirstValid(v141, 14) )
  {
    v152 = v135;
    v153 = v46;
    v155 = a5;
    v154 = a10 != 0;
    v156 = FixupPromotedMouseExtraInfoForHook(v143, a7);
    if ( !v50
      || v50 == *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
      || (v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 384LL) + 832LL),
          v54 = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 384LL),
          v55 = *(_QWORD *)(v54 + 832),
          !gbEnforceUIPI)
      || (unsigned int)v55 > (unsigned int)v53
      || (_DWORD)v55 == (_DWORD)v53
      && ((v56 = HIDWORD(v55), v57 = HIDWORD(v53), (_DWORD)v56 == (_DWORD)v57) || (_DWORD)v56 == -1 || (_DWORD)v57 == -1)
      || *(int *)(v54 + 12) < 0 )
    {
      v58 = *(_QWORD *)(gptiCurrent + 1216LL);
      v59 = *(_QWORD *)(gptiCurrent + 1200LL);
      v60 = *(_QWORD *)(gptiCurrent + 1208LL);
      *(_QWORD *)(gptiCurrent + 1216LL) = &v152;
      if ( v50 )
      {
        v61 = *(_QWORD **)(*(_QWORD *)(v50 + 16) + 384LL);
        if ( *v61 == gpepCSRSS )
        {
          *(_DWORD *)(gptiCurrent + 1212LL) = 0;
          *(_DWORD *)(gptiCurrent + 1208LL) = 0x2000;
        }
        else
        {
          *(_QWORD *)(gptiCurrent + 1208LL) = v61[104];
        }
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 1208LL) = -1;
        *(_DWORD *)(gptiCurrent + 1212LL) = -1;
      }
      if ( !v51 || v127 )
      {
        *(_DWORD *)(gptiCurrent + 1200LL) = -1;
        *(_DWORD *)(gptiCurrent + 1204LL) = -1;
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 1200LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL);
      }
      v144 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v144;
      v145 = (struct tagWND *)v50;
      ++*(_DWORD *)(v50 + 8);
      if ( xxxCallHook2(v52, 0, v42, (unsigned int)&v152, (__int64)v147) )
      {
        result = ThreadUnlock1(v63, v62);
        v64 = v134;
        *(_QWORD *)(v134 + 1200) = v59;
        *(_QWORD *)(v64 + 1208) = v60;
        *(_QWORD *)(v64 + 1216) = v58;
        return result;
      }
      v65 = ThreadUnlock1(v63, v62);
      v66 = v134;
      v50 = v65;
      v51 = a10;
      *(_QWORD *)(v134 + 1216) = v58;
      v18 = v66;
      *(_QWORD *)(v66 + 1200) = v59;
      *(_QWORD *)(v66 + 1208) = v60;
    }
    if ( !a11 )
    {
      if ( v51 )
      {
        v22 = gpqForeground;
        if ( gpqForeground )
        {
          v67 = *(_QWORD *)(gpqForeground + 372LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v20 <= (unsigned int)v67 )
            {
              if ( (_DWORD)v20 != (_DWORD)v67
                || (v68 = HIDWORD(v67), HIDWORD(v20) != (_DWORD)v68) && HIDWORD(v20) != -1 && (_DWORD)v68 != -1 )
              {
                if ( !v127 )
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
  if ( v148 && v143 && (unsigned int)RawInputRequestedForMouse() )
    PostRawMouseInput(gpqForeground, a5, v70, v69);
  result = gpqForeground;
  if ( gpqForeground )
  {
    v71 = *(_QWORD *)(gpqForeground + 64LL);
    v72 = v71 ? *(_QWORD *)(v71 + 16) : *(_QWORD *)(gpqForeground + 48LL);
    result = HasHidTable(v72);
    if ( (_DWORD)result )
    {
      v73 = *(_QWORD *)(gpqForeground + 64LL);
      v74 = v73 ? *(_QWORD *)(v73 + 16) : *(_QWORD *)(gpqForeground + 48LL);
      result = *(_QWORD *)(v74 + 384);
      if ( (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x100) != 0 )
      {
        v75 = *(_QWORD *)(gpqForeground + 64LL);
        v76 = v75 ? *(_QWORD *)(v75 + 16) : *(_QWORD *)(gpqForeground + 48LL);
        result = *(_QWORD *)(v76 + 384);
        v77 = *(_QWORD *)(*(_QWORD *)(result + 784) + 64LL);
        if ( v77 )
          return UpdateAsyncKeyState(*(_QWORD *)(*(_QWORD *)(v77 + 16) + 392LL), v130, a4);
      }
    }
  }
  CompositionInputWindowUIOwner = (struct tagWND *)v50;
  if ( v50 )
  {
    v131 = IsPointerPromotedMouseMessage(v42, v138);
    v79 = v131;
    if ( v131 )
    {
      v80 = *(_QWORD *)(v50 + 16);
      v81 = *(_QWORD *)(*(_QWORD *)(v80 + 384) + 832LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v20 <= (unsigned int)v81 )
        {
          if ( (_DWORD)v20 != (_DWORD)v81
            || (v82 = HIDWORD(v81), HIDWORD(v20) != (_DWORD)v82) && HIDWORD(v20) != -1 && (_DWORD)v82 != -1 )
          {
            v22 = *(_QWORD *)(v80 + 392);
            v25 = *(_QWORD *)(v50 + 16);
            goto LABEL_18;
          }
        }
      }
    }
    v83 = LOWORD(v135.x) | (LOWORD(v135.y) << 16);
    v137 = v83;
    if ( (*gpsi & 4) != 0 && !a4 )
    {
      if ( (GetActiveHKL() & 0x3FF) == 0x12 && (*(_BYTE *)(*(_QWORD *)(v50 + 152) + 86LL) & 1) == 0 && gpqForeground )
        FinalizeKoreanImeCompStrOnMouseClick((struct tagWND *)v50);
      v79 = v131;
    }
    v84 = gspwndScreenCapture;
    if ( gspwndScreenCapture )
    {
      CompositionInputWindowUIOwner = gspwndScreenCapture;
      if ( v79 )
      {
        v25 = *((_QWORD *)gspwndScreenCapture + 2);
        v85 = *(_QWORD *)(*(_QWORD *)(v25 + 384) + 832LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v20 <= (unsigned int)v85 )
          {
            if ( (_DWORD)v20 != (_DWORD)v85 )
              goto LABEL_165;
            v86 = HIDWORD(v85);
            if ( HIDWORD(v20) != (_DWORD)v86 && HIDWORD(v20) != -1 && (_DWORD)v86 != -1 )
              goto LABEL_165;
          }
        }
      }
      UpdateMouseButtonTarget(gspwndScreenCapture, (struct tagWND *)v50, v139, &v135, &v137);
      v84 = gspwndScreenCapture;
      v83 = v137;
    }
    v87 = gspwndMouseOwner;
    if ( gspwndMouseOwner )
    {
      if ( !v84 )
      {
        if ( v131 )
        {
          v25 = *((_QWORD *)gspwndMouseOwner + 2);
          v105 = *(_QWORD *)(*(_QWORD *)(v25 + 384) + 832LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v20 <= (unsigned int)v105 )
            {
              if ( (_DWORD)v20 != (_DWORD)v105
                || (v106 = HIDWORD(v105), HIDWORD(v20) != (_DWORD)v106) && HIDWORD(v20) != -1 && (_DWORD)v106 != -1 )
              {
LABEL_165:
                v22 = *(_QWORD *)(v25 + 392);
                goto LABEL_18;
              }
            }
          }
        }
        if ( a4 )
        {
          v107 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          if ( v107 != *((_QWORD *)gspwndMouseOwner + 2) )
          {
            SetLastInputWoken(v107, 0LL);
            v87 = gspwndMouseOwner;
          }
        }
        CompositionInputWindowUIOwner = v87;
        UpdateMouseButtonTarget(v87, (struct tagWND *)v50, v139, &v135, &v137);
      }
      v97 = a4;
      if ( a4 )
      {
        v99 = 2;
        if ( a12 )
          PostEventMessageEx(
            *((_QWORD *)CompositionInputWindowUIOwner + 2),
            *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 392LL),
            2,
            0,
            0,
            0LL,
            0LL,
            0LL);
        v98 = v133;
        gwMouseOwnerButton &= ~v133;
        if ( !gwMouseOwnerButton )
          HMAssignmentUnlock(&gspwndMouseOwner);
LABEL_192:
        result = UpdateAsyncKeyState(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 392LL), v130, v97);
        v100 = 0;
        if ( a4 || (result = *((_QWORD *)CompositionInputWindowUIOwner + 2), *(_QWORD *)(result + 392) == gpqForeground) )
        {
          v25 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          v22 = *(_QWORD *)(v25 + 392);
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
            v119 = HIDWORD(v20);
            result >>= 32;
            if ( (_DWORD)v119 == (_DWORD)result || (_DWORD)v119 == -1 || (_DWORD)result == -1 )
              goto LABEL_199;
          }
          v101 = v127;
          if ( v127 )
          {
LABEL_200:
            if ( CompositionInputWindowUIOwner )
            {
              if ( !v131
                || (result = *((_QWORD *)CompositionInputWindowUIOwner + 2), (*(_DWORD *)(result + 448) & 1) == 0) )
              {
                v102 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 392LL);
                v103 = *(_QWORD *)(v102 + 64);
                v104 = v103 ? *(_QWORD *)(v103 + 16) : *(_QWORD *)(v102 + 48);
                if ( !(unsigned int)HasHidTable(v104)
                  || ((v120 = *(_QWORD *)(v102 + 64)) == 0
                    ? (v121 = *(_QWORD *)(v102 + 48))
                    : (v121 = *(_QWORD *)(v120 + 16)),
                      result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v121 + 384) + 784LL) + 100LL),
                      (result & 2) == 0) )
                {
                  if ( (*(_DWORD *)(v102 + 332) & 0x20) != 0 )
                    PostMoveToPwnd(v102, 0LL, 0LL);
                  v122 = *((_QWORD *)CompositionInputWindowUIOwner + 39);
                  if ( v122 )
                  {
                    v123 = *(_QWORD *)(v122 + 392);
                    if ( (*(_DWORD *)(v123 + 332) & 0x20) != 0 )
                      PostMoveToPwnd(v123, 0LL, 0LL);
                  }
                  if ( !a14 || (v124 = &v136, v101) )
                    v124 = 0LL;
                  if ( !a14 || v101 )
                    v99 = 0;
                  PostInputMessage(
                    *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 392LL),
                    CompositionInputWindowUIOwner,
                    v42,
                    v149,
                    v137,
                    a5,
                    v140,
                    a7,
                    v99,
                    v138,
                    0LL,
                    v124);
                  v126 = gptiCurrent;
                  v144 = *(_QWORD *)(gptiCurrent + 376LL);
                  *(_QWORD *)(gptiCurrent + 376LL) = &v144;
                  v145 = CompositionInputWindowUIOwner;
                  ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
                  if ( !a4 )
                    goto LABEL_306;
                  v126 = (unsigned int)xmmword_1C0323904;
                  if ( (dword_1C032392C & 1) == 0 && (xmmword_1C0323904 & 1) == 0 )
                    goto LABEL_306;
                  if ( (xmmword_1C0323904 & 1) != 0 )
                  {
                    v126 = v132;
                    LOWORD(v126) = ~(_WORD)v132;
                    gwMKButtonState &= ~(_WORD)v132;
                  }
                  if ( (dword_1C032392C & 1) != 0 )
                    xxxUnlatchStickyKeys();
                  if ( a10
                    && gpqForeground
                    && (v126 = *(_QWORD *)(gpqForeground + 372LL), gbEnforceUIPI)
                    && (unsigned int)v136 <= (unsigned int)v126
                    && ((_DWORD)v136 != (_DWORD)v126
                     || (v126 >>= 32, HIDWORD(v136) != (_DWORD)v126)
                     && (v125 = 0xFFFFFFFFLL, HIDWORD(v136) != -1)
                     && (_DWORD)v126 != -1)
                    && !v101 )
                  {
                    EtwTraceUIPIInputError(v134, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
                  }
                  else
                  {
LABEL_306:
                    if ( v42 == 513 )
                    {
                      v126 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 416LL);
                      if ( v126 )
                      {
                        if ( *(_QWORD *)(v126 + 24) )
                        {
                          if ( (unsigned int)IsHungWindow(CompositionInputWindowUIOwner) )
                            ProcessHungWindow(CompositionInputWindowUIOwner);
                        }
                      }
                    }
                  }
                  return ThreadUnlock1(v126, v125);
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
              && ((gwMouseOwnerButton & v98) != 0 || !gwMouseOwnerButton) )
            {
              result = PostEventMessageEx(*(_QWORD *)(gpqForeground + 48LL), gpqForeground, 2, 0, 0, 0LL, 0LL, 0LL);
LABEL_199:
              v101 = v127;
              goto LABEL_200;
            }
          }
          if ( (gwMouseOwnerButton & v98) == 0 && gwMouseOwnerButton )
            goto LABEL_199;
          v108 = (unsigned __int64)CompositionInputWindowUIOwner;
          if ( (unsigned int)IsCompositionInputWindow(CompositionInputWindowUIOwner)
            && *((_QWORD *)CompositionInputWindowUIOwner + 11) == GetMessageWindow(CompositionInputWindowUIOwner) )
          {
            CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v109);
          }
          if ( !a10
            || (v25 = *(_QWORD *)(v108 + 16), v22 = *(_QWORD *)(v25 + 392),
                                              v110 = *(_QWORD *)(v22 + 372),
                                              !gbEnforceUIPI)
            || (unsigned int)v20 > (unsigned int)v110
            || (_DWORD)v20 == (_DWORD)v110
            && ((v111 = HIDWORD(v110), HIDWORD(v20) == (_DWORD)v111) || HIDWORD(v20) == -1 || (_DWORD)v111 == -1)
            || v127 )
          {
            result = GetNonChildAncestor(CompositionInputWindowUIOwner);
            if ( (*(_BYTE *)(result + 51) & 8) != 0 || (*((_BYTE *)CompositionInputWindowUIOwner + 289) & 0x10) != 0 )
              goto LABEL_253;
            if ( CompositionInputWindowUIOwner != (struct tagWND *)v108 )
            {
              v100 = 1;
              v151[0] = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = v151;
              v151[1] = v108;
              ++*(_DWORD *)(v108 + 8);
            }
            v144 = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = &v144;
            v145 = CompositionInputWindowUIOwner;
            ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
            xxxSetForegroundWindow2(CompositionInputWindowUIOwner, 0LL, 0LL, 0);
            result = ThreadUnlock1(v113, v112);
            if ( v100 == 1 )
            {
              result = ThreadUnlock1(v115, v114);
              v108 = result;
            }
            if ( !a10
              || (v22 = gpqForeground) == 0
              || (v116 = *(_QWORD *)(gpqForeground + 372LL), !gbEnforceUIPI)
              || (unsigned int)v20 > (unsigned int)v116
              || (_DWORD)v20 == (_DWORD)v116
              && ((v117 = HIDWORD(v20), v118 = HIDWORD(v116), (_DWORD)v117 == (_DWORD)v118)
               || (result = 0xFFFFFFFFLL, (_DWORD)v117 == -1)
               || (_DWORD)v118 == -1)
              || v127 )
            {
LABEL_253:
              CompositionInputWindowUIOwner = (struct tagWND *)v108;
              goto LABEL_199;
            }
            v25 = 0LL;
          }
        }
        v26 = v134;
        return EtwTraceUIPIInputError(v26, v25, v22, *(_QWORD *)(v22 + 372), 1);
      }
      goto LABEL_190;
    }
    if ( a4 )
    {
      v98 = v133;
      v97 = a4;
      gwMouseOwnerButton &= ~v133;
      goto LABEL_191;
    }
    v88 = gpqForeground;
    if ( gpqForeground )
      v88 = *(_QWORD *)(gpqForeground + 64LL);
    if ( !v88
      || *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 392LL) == *(_QWORD *)(*(_QWORD *)(v88 + 16) + 392LL) )
    {
LABEL_189:
      HMAssignmentLock(&gspwndMouseOwner, CompositionInputWindowUIOwner);
      v97 = 0;
LABEL_190:
      v98 = v133;
      gwMouseOwnerButton |= v133;
LABEL_191:
      v99 = 2;
      goto LABEL_192;
    }
    v89 = v83;
    if ( (unsigned int)IsWindowDesktopComposed(v88)
      && !(unsigned int)SameCoordinateSpace(
                          *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
                          *(_QWORD *)(*(_QWORD *)(v88 + 16) + 384LL)) )
    {
      v90 = ValidateHmonitorNoRip(*(_QWORD *)(v88 + 352));
      v91 = *(_QWORD *)(v88 + 16);
      v150 = v90;
      MonitorFlags = GetMonitorFlags(*(_QWORD *)(v91 + 384));
      PhysicalToLogicalDPIPoint(v142, &v139, MonitorFlags, &v150);
      v89 = v142[0] | (v142[2] << 16);
    }
    if ( !a10
      || (v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v88 + 16) + 392LL) + 372LL), !gbEnforceUIPI)
      || (unsigned int)v20 > (unsigned int)v93
      || (_DWORD)v20 == (_DWORD)v93
      && ((v94 = HIDWORD(v93), HIDWORD(v20) == (_DWORD)v94) || HIDWORD(v20) == -1 || (_DWORD)v94 == -1)
      || v127 )
    {
      v95 = *(_QWORD *)(*(_QWORD *)(v88 + 16) + 392LL);
      PostInputMessage(v95, v88, v129, 0LL, v89, 0, 0LL, 0LL, 0, v138, 0LL, 0LL);
      PostInputMessage(v95, v88, v129 + 1, 0LL, v89, 0, 0LL, 0LL, 0, v138, 0LL, 0LL);
    }
    result = *(_QWORD *)(v88 + 16);
    if ( !*(_QWORD *)(result + 600)
      || (v96 = *(_QWORD *)(result + 536)) != 0 && (result = *(unsigned int *)(v96 + 8), (result & 1) != 0) )
    {
      v42 = v129;
      goto LABEL_189;
    }
  }
  return result;
}
