/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0137D0C
 * Callers:
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216594 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x1C0099414 (xxxTranslateMessage.c)
 *     xxxMNButtonDown @ 0x1C0133690 (xxxMNButtonDown.c)
 *     UnlockMFMWFPWindow @ 0x1C0137970 (UnlockMFMWFPWindow.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0138330 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     xxxMNButtonUp @ 0x1C013849C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0139FD4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8E08 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     GetMenuStateWindow @ 0x1C021643C (GetMenuStateWindow.c)
 *     LockMFMWFPWindow @ 0x1C0216468 (LockMFMWFPWindow.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C02175B8 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r10
  int v21; // r12d
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int16 v28; // ecx^2
  __int64 v29; // r8
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  struct tagWND *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned int v40; // edx
  struct tagWND *v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  int *v49; // r15
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  int *v57; // rdx
  int v58; // eax
  int v59; // ecx
  __int64 MenuStateWindow; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // r15
  __int64 v63; // r10
  __int64 v64; // r10
  unsigned __int64 ThreadPointerData; // rax
  int v66; // edx
  unsigned int v67; // ecx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r10
  __int64 v74; // rdx
  __int64 *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v79; // [rsp+40h] [rbp-31h] BYREF
  __int64 v80; // [rsp+48h] [rbp-29h] BYREF
  __int64 v81; // [rsp+50h] [rbp-21h]
  __int64 v82; // [rsp+58h] [rbp-19h] BYREF
  __int64 v83; // [rsp+60h] [rbp-11h]
  __int64 v84; // [rsp+70h] [rbp-1h] BYREF
  __int64 v85; // [rsp+78h] [rbp+7h]
  _QWORD v86[3]; // [rsp+88h] [rbp+17h] BYREF

  v3 = 0LL;
  if ( !*((_QWORD *)a3 + 5) )
    return 0LL;
  v7 = *(unsigned int *)(a1 + 16);
  v78 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 <= 0x105 )
  {
    if ( v8 == 261 )
    {
      if ( (_DWORD)v7 == 18 || (_DWORD)v7 == 121 )
        return 1LL;
    }
    else
    {
      if ( v8 <= 0xA5 )
      {
        if ( v8 == 165 )
          goto LABEL_150;
        v24 = v8 - 160;
        if ( !v24 )
          goto LABEL_17;
        v25 = v24 - 1;
        if ( !v25 )
          goto LABEL_44;
        v26 = v25 - 1;
        if ( !v26 )
          goto LABEL_23;
        v27 = v26 - 1;
        if ( !v27 )
        {
LABEL_136:
          *(_DWORD *)(a2 + 20) = -1;
          AdjustMouseCoordinates(*((struct tagWND **)a3 + 2), &v78);
          v61 = xxxMNFindWindowFromPoint(a3, &v79, (unsigned int)v78);
          v62 = (unsigned int)v79;
          v63 = v61;
          if ( v61 || (_DWORD)v79 )
          {
            if ( (*a3 & 2) != 0 && v61 == 4294967291LL )
            {
              xxxMNSwitchToAlternateMenu((struct tagPOPUPMENU *)a3);
              v63 = 0xFFFFFFFFLL;
            }
            if ( v63 == 0xFFFFFFFFLL )
            {
              xxxMNDoubleClick(a2, (struct tagPOPUPMENU *)a3);
              return 1LL;
            }
            if ( (unsigned int)IsMFMWFPWindow(v63) )
            {
              v82 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v82;
              v83 = v64;
              if ( v64 )
                ++*(_DWORD *)(v64 + 8);
              v39 = v62;
              v40 = 497;
              v41 = (struct tagWND *)v64;
              goto LABEL_84;
            }
          }
LABEL_81:
          xxxMNCancel(a2, 0LL, 0LL, 0LL);
          return 1LL;
        }
        if ( v27 != 1 )
          return 0LL;
        goto LABEL_174;
      }
      v33 = v8 - 166;
      if ( !v33 )
      {
LABEL_175:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*((struct tagWND **)a3 + 2), &v78);
        if ( !xxxMNFindWindowFromPoint(a3, &v79, (unsigned int)v78) )
          goto LABEL_81;
        if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
          return 1LL;
        v67 = *(_DWORD *)(a1 + 8);
LABEL_178:
        xxxMNRemoveMessage(v67, 0);
        return 1LL;
      }
      v34 = v33 - 90;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_87;
        v36 = v35 - 1;
        if ( !v36 )
        {
LABEL_134:
          v38 = *((_QWORD *)a3 + 7);
          if ( !v38 )
          {
            xxxMNChar(a3, a2, (unsigned int)v7);
            return 1LL;
          }
LABEL_82:
          v39 = v7;
          v84 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v84;
          v85 = v38;
          ++*(_DWORD *)(v38 + 8);
          v40 = *(_DWORD *)(a1 + 8);
          v41 = (struct tagWND *)*((_QWORD *)a3 + 7);
LABEL_84:
          xxxSendMessage(v41, v40, v39, 0LL);
          goto LABEL_21;
        }
        if ( v36 != 2 )
          return 0LL;
      }
      v37 = *(_DWORD *)(a2 + 8);
      if ( (v37 & 8) != 0 && (_DWORD)v7 != 112 )
      {
        if ( (v37 & 0x80u) != 0 && (_DWORD)v7 == 27 )
          *(_DWORD *)(a2 + 8) = v37 | 0x2000;
        return 1LL;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( (_DWORD)v7 == 3 )
      {
LABEL_77:
        v38 = *((_QWORD *)a3 + 7);
        if ( !v38 )
        {
          xxxMNKeyDown(a3, a2, (unsigned int)v7);
          return 1LL;
        }
        goto LABEL_82;
      }
      if ( (_DWORD)v7 == 9 )
      {
        if ( (*a3 & 1) != 0 && !*((_QWORD *)a3 + 7) )
          goto LABEL_81;
      }
      else if ( (_DWORD)v7 == 13
             || (_DWORD)v7 == 18
             || (_DWORD)v7 == 27
             || (unsigned int)v7 > 0x24 && ((unsigned int)v7 <= 0x28 || (_DWORD)v7 == 112 || (_DWORD)v7 == 121) )
      {
        goto LABEL_77;
      }
    }
LABEL_87:
    if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      xxxTranslateMessage(a1, 0);
    return 1LL;
  }
  if ( v8 > 0x203 )
  {
    if ( v8 != 516 )
    {
      if ( v8 != 517 )
      {
        if ( v8 != 518 )
        {
          if ( v8 == 578 || v8 == 582 )
          {
            ThreadPointerData = GetThreadPointerData(
                                  (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL),
                                  *(_WORD *)(a1 + 16),
                                  0LL,
                                  0LL,
                                  0LL);
            if ( ThreadPointerData )
            {
              if ( __CFSHR__(*(_DWORD *)(ThreadPointerData + 36), 4)
                && !xxxMNFindWindowFromPoint(a3, &v79, (unsigned int)v78) )
              {
                xxxMNCancel(a2, 0LL, 0LL, 0LL);
              }
            }
          }
          return 0LL;
        }
        goto LABEL_175;
      }
LABEL_150:
      if ( (*a3 & 0x40) != 0 )
        goto LABEL_23;
      v66 = *(_DWORD *)(a2 + 8);
      if ( (v66 & 8) == 0 )
      {
        if ( v8 == 517 && (*a3 & 0x800) == 0 )
        {
          v72 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)a3 + 7));
          if ( v72 )
          {
            v73 = *(_QWORD *)(v72 + 376);
            if ( v73 )
            {
              if ( *(int *)(v73 + 80) >= 0 )
              {
                v74 = *(_QWORD *)(v73 + 8);
                v86[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v86;
                v86[1] = v74;
                if ( v74 )
                  ++*(_DWORD *)(v74 + 8);
                v75 = *(__int64 **)(v73 + 40);
                if ( v75 )
                  v3 = *v75;
                xxxSendMessage(*(struct tagWND **)(v73 + 8), 0x122u, *(unsigned int *)(v73 + 80), v3);
                ThreadUnlock1(v77, v76);
              }
            }
          }
        }
        return 0LL;
      }
      if ( (v66 & 0x100) != 0 )
        return 1LL;
      v67 = *(_DWORD *)(a1 + 8);
      goto LABEL_178;
    }
LABEL_174:
    if ( (*a3 & 0x40) != 0 )
      goto LABEL_44;
    goto LABEL_175;
  }
  if ( v8 == 515 )
    goto LABEL_136;
  v9 = v8 - 262;
  if ( !v9 )
    goto LABEL_134;
  v10 = v9 - 18;
  if ( !v10 )
    return 1LL;
  v11 = v10 - 232;
  if ( !v11 )
  {
LABEL_17:
    v14 = *(_DWORD *)(a2 + 8);
    if ( (v14 & 0x400) == 0 || (v14 & 8) == 0 || (v14 & 0x80u) != 0 || (v14 & 0x40) != 0 || !*(_QWORD *)(a2 + 64) )
    {
LABEL_18:
      xxxMNMouseMove((struct tagPOPUPMENU *)a3, (struct tagMENUSTATE *)a2);
      return 1LL;
    }
    v80 = *(_QWORD *)(a2 + 56);
    v81 = v80;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
      {
        goto LABEL_96;
      }
    }
    else if ( !IsDPIDWMSysMet(v42)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v48 = 0)
             : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v48) )
    {
LABEL_96:
      if ( IsDPIDWMSysMet(0x45uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v45 = 0)
          : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v45) )
      {
        v49 = (int *)(gpsi + 2932LL);
      }
      else
      {
        v49 = (int *)(gpsi + 2156LL);
      }
LABEL_112:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x44uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0 )
        {
          goto LABEL_115;
        }
      }
      else if ( !IsDPIDWMSysMet(v50)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v56 = 0)
               : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v56) )
      {
LABEL_115:
        if ( IsDPIDWMSysMet(0x44uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v53 = 0)
            : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v53) )
        {
          v57 = (int *)(gpsi + 2928LL);
        }
        else
        {
          v57 = (int *)(gpsi + 2152LL);
        }
LABEL_131:
        v58 = *v57;
        v59 = *v49;
        HIDWORD(v80) -= *v49;
        HIDWORD(v81) += v59;
        LODWORD(v80) = v80 - v58;
        LODWORD(v81) = v58 + v81;
        LODWORD(v79) = (__int16)v78;
        HIDWORD(v79) = SWORD1(v78);
        if ( !PtInRect(&v80, v79) )
        {
          MenuStateWindow = GetMenuStateWindow(a2);
          if ( MenuStateWindow )
          {
            *(_DWORD *)(a2 + 8) |= 0x80u;
            PostMessage(MenuStateWindow, 500LL, 0LL, 0LL);
          }
        }
        goto LABEL_18;
      }
      v57 = (int *)(gpsi + 2540LL);
      goto LABEL_131;
    }
    v49 = (int *)(gpsi + 2544LL);
    goto LABEL_112;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_44:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*((struct tagWND **)a3 + 2), &v78);
    v28 = WORD1(v78);
    v29 = (unsigned int)v78;
    *(_DWORD *)(a2 + 12) = (__int16)v78;
    *(_DWORD *)(a2 + 16) = v28;
    v30 = xxxMNFindWindowFromPoint(a3, &v79, v29);
    LODWORD(v78) = IsMFMWFPWindow(v30);
    if ( (_DWORD)v78 )
    {
      v82 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v82;
      v83 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
    }
    v31 = (unsigned int)v79;
    if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
    {
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 72) = v31;
      LockMFMWFPWindow(a2 + 64, v30);
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
      *(_DWORD *)(a2 + 76) = ((v7 & 2) != 0) + 1;
    if ( !v30 && !(_DWORD)v31 )
      goto LABEL_180;
    if ( (*a3 & 2) != 0 && v30 == 4294967291LL )
    {
      xxxMNSwitchToAlternateMenu((struct tagPOPUPMENU *)a3);
      v30 = 0xFFFFFFFFLL;
    }
    if ( v30 == 0xFFFFFFFFLL )
    {
      xxxMNButtonDown((struct tagPOPUPMENU *)a3, a2, v31, 1);
    }
    else
    {
      if ( !(unsigned int)IsMFMWFPWindow(v30) )
        goto LABEL_180;
      xxxSendMessage(v32, 0x1EDu, v31, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0x204u);
    goto LABEL_20;
  }
  if ( v12 != 1 )
    return 0LL;
LABEL_23:
  v15 = *(_DWORD *)(a2 + 8);
  if ( (v15 & 8) == 0 )
    return 1LL;
  if ( (v15 & 0x400) != 0 )
  {
    UnlockMFMWFPWindow((_QWORD *)(a2 + 64));
    v68 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
    *(_DWORD *)(a2 + 8) = v68;
    if ( (v68 & 0x2000) != 0 )
    {
      *(_DWORD *)(a2 + 8) = v68 & 0xFFFFDFF7;
      return 1LL;
    }
  }
  AdjustMouseCoordinates(*((struct tagWND **)a3 + 2), &v78);
  v16 = v78;
  v17 = (unsigned int)v78;
  *(_DWORD *)(a2 + 12) = (__int16)v78;
  *(_DWORD *)(a2 + 16) = SWORD1(v16);
  v18 = xxxMNFindWindowFromPoint(a3, &v79, v17);
  v21 = IsMFMWFPWindow(v18);
  LODWORD(v78) = v21;
  if ( v21 )
  {
    v19 = gptiCurrent;
    v82 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v82;
    v83 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
  }
  v22 = *a3;
  v23 = (unsigned int)v79;
  if ( (*a3 & 2) != 0 )
  {
    if ( v20 || (_DWORD)v79 )
    {
      if ( v20 != 0xFFFFFFFFLL )
      {
LABEL_33:
        if ( v21 )
          xxxSendMessage((struct tagWND *)v20, 0x1EFu, (unsigned int)v23, v16);
        else
          *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
        goto LABEL_20;
      }
      if ( (v22 & 0x84) != 0x84 )
      {
LABEL_160:
        xxxMNButtonUp((struct tagPOPUPMENU *)a3, (struct tagMENUSTATE *)a2);
        goto LABEL_20;
      }
    }
LABEL_180:
    xxxMNCancel(a2, 0LL, 0LL, 0LL);
    goto LABEL_20;
  }
  if ( v20 || (_DWORD)v79 || (v22 & 0x200) != 0 )
  {
    *a3 = v22 & 0xFFFFFDFF;
    if ( v20 != 0xFFFFFFFFLL )
      goto LABEL_33;
    goto LABEL_160;
  }
  v69 = *((_QWORD *)a3 + 2);
  v84 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v84;
  v85 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  xxxSendMessage(*((struct tagWND **)a3 + 2), 0x1E6u, 0LL, 0LL);
  ThreadUnlock1(v71, v70);
LABEL_20:
  if ( (_DWORD)v78 )
LABEL_21:
    ThreadUnlock1(v23, v19);
  return 1LL;
}
