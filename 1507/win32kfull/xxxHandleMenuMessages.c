/*
 * XREFs of xxxHandleMenuMessages @ 0x1C010B80C
 * Callers:
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216730 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 *     xxxMNButtonDown @ 0x1C01065E0 (xxxMNButtonDown.c)
 *     UnlockMFMWFPWindow @ 0x1C010B474 (UnlockMFMWFPWindow.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     IsMFMWFPWindow @ 0x1C010BDAC (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C010C788 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     xxxMNButtonUp @ 0x1C010C7B0 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C010E564 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8958 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     GetMenuStateWindow @ 0x1C02165D8 (GetMenuStateWindow.c)
 *     LockMFMWFPWindow @ 0x1C0216604 (LockMFMWFPWindow.c)
 *     xxxMNChar @ 0x1C0216834 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0216C3C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0217754 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r10
  int v24; // r12d
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int16 v32; // ecx^2
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // r12
  struct tagWND *v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned int v50; // edx
  struct tagWND *v51; // rcx
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  int *v59; // r15
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  int *v67; // rdx
  int v68; // eax
  int v69; // ecx
  __int64 MenuStateWindow; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // r15
  __int64 v76; // r10
  __int64 v77; // r10
  unsigned __int64 ThreadPointerData; // rax
  int v79; // edx
  unsigned int v80; // ecx
  unsigned int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r10
  __int64 v87; // rdx
  __int64 *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v92; // [rsp+40h] [rbp-31h] BYREF
  __int64 v93; // [rsp+48h] [rbp-29h] BYREF
  __int64 v94; // [rsp+50h] [rbp-21h]
  __int64 v95; // [rsp+58h] [rbp-19h] BYREF
  __int64 v96; // [rsp+60h] [rbp-11h]
  __int64 v97; // [rsp+70h] [rbp-1h] BYREF
  __int64 v98; // [rsp+78h] [rbp+7h]
  _QWORD v99[3]; // [rsp+88h] [rbp+17h] BYREF

  v4 = 0LL;
  if ( !*(_QWORD *)(a3 + 40) )
    return 0LL;
  v8 = *(unsigned int *)(a1 + 16);
  v91 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 <= 0x105 )
  {
    if ( v9 == 261 )
    {
      if ( (_DWORD)v8 == 18 || (_DWORD)v8 == 121 )
        return 1LL;
    }
    else
    {
      if ( v9 <= 0xA5 )
      {
        if ( v9 == 165 )
          goto LABEL_149;
        v27 = v9 - 160;
        if ( !v27 )
          goto LABEL_39;
        v28 = v27 - 1;
        if ( !v28 )
          goto LABEL_43;
        v29 = v28 - 1;
        if ( !v29 )
          goto LABEL_16;
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
LABEL_173:
            if ( (*(_DWORD *)a3 & 0x40) == 0 )
              goto LABEL_174;
LABEL_43:
            *(_DWORD *)(a2 + 20) = -1;
            AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v91);
            v32 = WORD1(v91);
            v33 = (unsigned int)v91;
            *(_DWORD *)(a2 + 12) = (__int16)v91;
            *(_DWORD *)(a2 + 16) = v32;
            v34 = xxxMNFindWindowFromPoint(a3, &v92, v33);
            LODWORD(v91) = IsMFMWFPWindow(v34, v35, v36, v37);
            if ( (_DWORD)v91 )
            {
              v38 = gptiCurrent;
              v95 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v95;
              v96 = v34;
              if ( v34 )
                ++*(_DWORD *)(v34 + 8);
            }
            v41 = (unsigned int)v92;
            if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
            {
              *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
              *(_DWORD *)(a2 + 72) = v41;
              LockMFMWFPWindow(a2 + 64, v34);
            }
            if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
              *(_DWORD *)(a2 + 76) = ((v8 & 2) != 0) + 1;
            if ( !v34 && !(_DWORD)v41 )
              goto LABEL_179;
            if ( (*(_DWORD *)a3 & 2) != 0 && v34 == 4294967291LL )
            {
              xxxMNSwitchToAlternateMenu((struct tagPOPUPMENU *)a3);
              v34 = 0xFFFFFFFFLL;
            }
            if ( v34 == 0xFFFFFFFFLL )
            {
              xxxMNButtonDown((struct tagPOPUPMENU *)a3, a2, v41, 1);
            }
            else
            {
              if ( !(unsigned int)IsMFMWFPWindow(v34, v38, v39, v40) )
                goto LABEL_179;
              xxxSendMessage(v42, 0x1EDu, v41, 0LL);
            }
            if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
              xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0x204u);
            goto LABEL_28;
          }
          return 0LL;
        }
        goto LABEL_135;
      }
      v43 = v9 - 166;
      if ( !v43 )
        goto LABEL_174;
      v44 = v43 - 90;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_86;
        v46 = v45 - 1;
        if ( !v46 )
        {
LABEL_133:
          v48 = *(_QWORD *)(a3 + 56);
          if ( !v48 )
          {
            xxxMNChar(a3, a2, (unsigned int)v8);
            return 1LL;
          }
LABEL_81:
          v49 = v8;
          v97 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v97;
          v98 = v48;
          ++*(_DWORD *)(v48 + 8);
          v50 = *(_DWORD *)(a1 + 8);
          v51 = *(struct tagWND **)(a3 + 56);
LABEL_83:
          xxxSendMessage(v51, v50, v49, 0LL);
          goto LABEL_29;
        }
        if ( v46 != 2 )
          return 0LL;
      }
      v47 = *(_DWORD *)(a2 + 8);
      if ( (v47 & 8) != 0 && (_DWORD)v8 != 112 )
      {
        if ( (v47 & 0x80u) != 0 && (_DWORD)v8 == 27 )
          *(_DWORD *)(a2 + 8) = v47 | 0x2000;
        return 1LL;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( (_DWORD)v8 == 3 )
      {
LABEL_76:
        v48 = *(_QWORD *)(a3 + 56);
        if ( !v48 )
        {
          xxxMNKeyDown(a3, a2, (unsigned int)v8);
          return 1LL;
        }
        goto LABEL_81;
      }
      if ( (_DWORD)v8 == 9 )
      {
        if ( (*(_DWORD *)a3 & 1) != 0 && !*(_QWORD *)(a3 + 56) )
          goto LABEL_80;
      }
      else if ( (_DWORD)v8 == 13
             || (_DWORD)v8 == 18
             || (_DWORD)v8 == 27
             || (unsigned int)v8 > 0x24 && ((unsigned int)v8 <= 0x28 || (_DWORD)v8 == 112 || (_DWORD)v8 == 121) )
      {
        goto LABEL_76;
      }
    }
LABEL_86:
    if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      xxxTranslateMessage(a1, 0);
    return 1LL;
  }
  if ( v9 <= 0x203 )
  {
    if ( v9 != 515 )
    {
      v11 = v9 - 262;
      if ( v11 )
      {
        v12 = v11 - 18;
        if ( !v12 )
          return 1LL;
        v13 = v12 - 232;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( !v14 )
            goto LABEL_43;
          if ( v14 == 1 )
          {
LABEL_16:
            v15 = *(_DWORD *)(a2 + 8);
            if ( (v15 & 8) == 0 )
              return 1LL;
            if ( (v15 & 0x400) != 0 )
            {
              UnlockMFMWFPWindow((_QWORD *)(a2 + 64), a2, a3, a4);
              v81 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
              *(_DWORD *)(a2 + 8) = v81;
              if ( (v81 & 0x2000) != 0 )
              {
                *(_DWORD *)(a2 + 8) = v81 & 0xFFFFDFF7;
                return 1LL;
              }
            }
            AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v91);
            v16 = v91;
            v17 = (unsigned int)v91;
            *(_DWORD *)(a2 + 12) = (__int16)v91;
            *(_DWORD *)(a2 + 16) = SWORD1(v16);
            v18 = xxxMNFindWindowFromPoint(a3, &v92, v17);
            v24 = IsMFMWFPWindow(v18, v19, v20, v21);
            LODWORD(v91) = v24;
            if ( v24 )
            {
              v22 = gptiCurrent;
              v95 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v95;
              v96 = v23;
              if ( v23 )
                ++*(_DWORD *)(v23 + 8);
            }
            v25 = *(_DWORD *)a3;
            v26 = (unsigned int)v92;
            if ( (*(_DWORD *)a3 & 2) == 0 )
            {
              if ( v23 || (_DWORD)v92 || (v25 & 0x200) != 0 )
              {
                *(_DWORD *)a3 = v25 & 0xFFFFFDFF;
                if ( v23 != 0xFFFFFFFFLL )
                  goto LABEL_26;
                goto LABEL_159;
              }
              v82 = *(_QWORD *)(a3 + 16);
              v97 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v97;
              v98 = v82;
              if ( v82 )
                ++*(_DWORD *)(v82 + 8);
              xxxSendMessage(*(struct tagWND **)(a3 + 16), 0x1E6u, 0LL, 0LL);
              ThreadUnlock1(v84, v83);
LABEL_28:
              if ( !(_DWORD)v91 )
                return 1LL;
LABEL_29:
              ThreadUnlock1(v26, v22);
              return 1LL;
            }
            if ( v23 || (_DWORD)v92 )
            {
              if ( v23 != 0xFFFFFFFFLL )
              {
LABEL_26:
                if ( v24 )
                  xxxSendMessage((struct tagWND *)v23, 0x1EFu, (unsigned int)v26, v16);
                else
                  *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
                goto LABEL_28;
              }
              if ( (v25 & 0x84) != 0x84 )
              {
LABEL_159:
                xxxMNButtonUp((struct tagPOPUPMENU *)a3, (struct tagMENUSTATE *)a2);
                goto LABEL_28;
              }
            }
LABEL_179:
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
            goto LABEL_28;
          }
          return 0LL;
        }
LABEL_39:
        v31 = *(_DWORD *)(a2 + 8);
        if ( (v31 & 0x400) == 0 || (v31 & 8) == 0 || (v31 & 0x80u) != 0 || (v31 & 0x40) != 0 || !*(_QWORD *)(a2 + 64) )
        {
LABEL_40:
          xxxMNMouseMove((struct tagPOPUPMENU *)a3, (struct tagMENUSTATE *)a2);
          return 1LL;
        }
        v93 = *(_QWORD *)(a2 + 56);
        v94 = v93;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0 )
          {
            goto LABEL_95;
          }
        }
        else if ( !IsDPIDWMSysMet(v52)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v58 = 0)
                 : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v58) )
        {
LABEL_95:
          if ( IsDPIDWMSysMet(0x45uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v55 = 0)
              : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v55) )
          {
            v59 = (int *)(gpsi + 2932LL);
          }
          else
          {
            v59 = (int *)(gpsi + 2156LL);
          }
LABEL_111:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x44uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
            {
              goto LABEL_114;
            }
          }
          else if ( !IsDPIDWMSysMet(v60)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v66 = 0)
                   : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v66) )
          {
LABEL_114:
            if ( IsDPIDWMSysMet(0x44uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v63 = 0)
                : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v63) )
            {
              v67 = (int *)(gpsi + 2928LL);
            }
            else
            {
              v67 = (int *)(gpsi + 2152LL);
            }
LABEL_130:
            v68 = *v67;
            v69 = *v59;
            HIDWORD(v93) -= *v59;
            HIDWORD(v94) += v69;
            LODWORD(v93) = v93 - v68;
            LODWORD(v94) = v68 + v94;
            LODWORD(v92) = (__int16)v91;
            HIDWORD(v92) = SWORD1(v91);
            if ( !PtInRect(&v93, v92) )
            {
              MenuStateWindow = GetMenuStateWindow(a2);
              if ( MenuStateWindow )
              {
                *(_DWORD *)(a2 + 8) |= 0x80u;
                PostMessage(MenuStateWindow, 0x1F4u, 0LL, 0LL);
              }
            }
            goto LABEL_40;
          }
          v67 = (int *)(gpsi + 2540LL);
          goto LABEL_130;
        }
        v59 = (int *)(gpsi + 2544LL);
        goto LABEL_111;
      }
      goto LABEL_133;
    }
LABEL_135:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v91);
    v71 = xxxMNFindWindowFromPoint(a3, &v92, (unsigned int)v91);
    v75 = (unsigned int)v92;
    v76 = v71;
    if ( !v71 && !(_DWORD)v92 )
      goto LABEL_80;
    if ( (*(_DWORD *)a3 & 2) != 0 && v71 == 4294967291LL )
    {
      xxxMNSwitchToAlternateMenu((struct tagPOPUPMENU *)a3);
      v76 = 0xFFFFFFFFLL;
    }
    if ( v76 == 0xFFFFFFFFLL )
    {
      xxxMNDoubleClick(a2, (struct tagPOPUPMENU *)a3);
      return 1LL;
    }
    if ( !(unsigned int)IsMFMWFPWindow(v76, v72, v73, v74) )
      goto LABEL_80;
    v95 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v95;
    v96 = v77;
    if ( v77 )
      ++*(_DWORD *)(v77 + 8);
    v49 = v75;
    v50 = 497;
    v51 = (struct tagWND *)v77;
    goto LABEL_83;
  }
  if ( v9 == 516 )
    goto LABEL_173;
  if ( v9 != 517 )
  {
    if ( v9 != 518 )
    {
      if ( v9 == 578 || v9 == 582 )
      {
        ThreadPointerData = GetThreadPointerData(
                              (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
                              *(_WORD *)(a1 + 16),
                              0LL,
                              0LL,
                              0LL);
        if ( ThreadPointerData
          && __CFSHR__(*(_DWORD *)(ThreadPointerData + 36), 4)
          && !xxxMNFindWindowFromPoint(a3, &v92, (unsigned int)v91) )
        {
          xxxMNCancel(a2, 0LL, 0LL, 0LL);
        }
      }
      return 0LL;
    }
LABEL_174:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v91);
    if ( xxxMNFindWindowFromPoint(a3, &v92, (unsigned int)v91) )
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        v80 = *(_DWORD *)(a1 + 8);
        goto LABEL_177;
      }
      return 1LL;
    }
LABEL_80:
    xxxMNCancel(a2, 0LL, 0LL, 0LL);
    return 1LL;
  }
LABEL_149:
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    goto LABEL_16;
  v79 = *(_DWORD *)(a2 + 8);
  if ( (v79 & 8) == 0 )
  {
    if ( v9 == 517 && (*(_DWORD *)a3 & 0x800) == 0 )
    {
      v85 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(a3 + 56));
      if ( v85 )
      {
        v86 = *(_QWORD *)(v85 + 376);
        if ( v86 )
        {
          if ( *(int *)(v86 + 80) >= 0 )
          {
            v87 = *(_QWORD *)(v86 + 8);
            v99[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v99;
            v99[1] = v87;
            if ( v87 )
              ++*(_DWORD *)(v87 + 8);
            v88 = *(__int64 **)(v86 + 40);
            if ( v88 )
              v4 = *v88;
            xxxSendMessage(*(struct tagWND **)(v86 + 8), 0x122u, *(unsigned int *)(v86 + 80), v4);
            ThreadUnlock1(v90, v89);
          }
        }
      }
    }
    return 0LL;
  }
  if ( (v79 & 0x100) == 0 )
  {
    v80 = *(_DWORD *)(a1 + 8);
LABEL_177:
    xxxMNRemoveMessage(v80, 0);
  }
  return 1LL;
}
