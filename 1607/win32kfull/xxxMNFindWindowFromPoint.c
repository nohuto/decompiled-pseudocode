/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C014223C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 *     xxxMNDismissIfOffMenu @ 0x1C020F558 (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0142870 (MNItemHitTest.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(int *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // r11
  unsigned int v22; // ebx
  __int64 v23; // rax
  int v24; // r15d
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // r11
  int v29; // esi
  int v30; // eax
  __int64 v31; // r11
  __int64 v32; // r12
  int WindowBordersForDpi; // r12d
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ecx
  _DWORD *v60; // rbx
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // ecx
  _DWORD *v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // ecx
  int v88; // r9d
  int v89; // r8d
  bool v90; // zf
  int v91; // r10d
  __int64 v92; // rcx
  int v93; // eax
  int v94; // ecx
  __int64 v95; // rcx
  unsigned __int64 v96; // [rsp+30h] [rbp-40h]
  unsigned __int64 v97; // [rsp+30h] [rbp-40h]
  int v98; // [rsp+38h] [rbp-38h] BYREF
  int v99; // [rsp+40h] [rbp-30h] BYREF
  int v100; // [rsp+44h] [rbp-2Ch]
  int v101; // [rsp+48h] [rbp-28h]
  int v102; // [rsp+4Ch] [rbp-24h]
  _QWORD v103[3]; // [rsp+50h] [rbp-20h] BYREF
  int v104; // [rsp+B0h] [rbp+40h]

  v104 = a3;
  *a2 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v98 = 0;
  if ( v5 )
  {
    v103[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v103;
    v103[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    v6 = xxxSendMessage(*((struct tagWND **)a1 + 3), 0x1EBu, (unsigned __int64)&v98, a3);
    ThreadUnlock1(v8, v7);
    if ( IsMFMWFPWindow(v6) )
    {
      LOBYTE(v9) = 1;
      v13 = HMValidateHandleNoSecure(v10, v9, v11, v12);
      v6 = v13;
      if ( !v13 )
      {
LABEL_10:
        LOWORD(a3) = v104;
        goto LABEL_11;
      }
      v14 = safe_cast_fnid_to_PMENUWND(v13);
      if ( !v14 )
        return 0LL;
      v15 = *(_QWORD *)(v14 + 360);
      if ( !v15 || !*(_QWORD *)(v15 + 40) )
        return 0LL;
    }
    if ( v6 )
    {
      v17 = v98;
      goto LABEL_95;
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( (*a1 & 1) != 0 )
  {
    v18 = *((_QWORD *)a1 + 1);
    if ( !v18 )
      return 0LL;
    HIDWORD(v96) = SHIWORD(v104);
    LODWORD(v96) = (__int16)a3;
    if ( (*a1 & 4) != 0 )
    {
      if ( !(unsigned int)HasCaptionIcon(v18) )
        return 0LL;
      if ( (*(_BYTE *)(v18 + 55) & 0x20) != 0 )
        return -PtInRect((_DWORD *)(v18 + 112), v96);
      v21 = (__int64 *)gpsi;
      if ( (*(_DWORD *)(v18 + 288) & 0x10000000) != 0 )
      {
        v22 = *(unsigned __int16 *)(v18 + 356);
      }
      else if ( (*(_DWORD *)(v18 + 352) & 0xF) == 0
             && (v23 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v23 + 8) + 244LL) & 1) != 0 )
      {
        v22 = 96;
      }
      else
      {
        v22 = *(unsigned __int16 *)(gpsi + 8678LL);
      }
      if ( v22 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v24 = *(_DWORD *)(gpsi + 2000LL);
      }
      else if ( v22 == 96 )
      {
        v24 = *(_DWORD *)(gpsi + 2388LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v22);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v27 = ScaleSystemMetricForDPIWithoutCache(30LL, v22);
          v21 = (__int64 *)gpsi;
          v24 = v27;
        }
        else
        {
          v26 = 112LL * DpiDepSysMetCachePlateauSlot;
          v24 = *(_DWORD *)(gpsi + v26 + 3092);
          if ( v24 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v22);
            v21 = (__int64 *)gpsi;
            v24 = *(_DWORD *)(v26 + gpsi + 3092);
            if ( v24 == -1 )
              v24 = 0;
          }
        }
      }
      v28 = *v21;
      if ( v22 == *(unsigned __int16 *)(v28 + 8678) )
      {
        v29 = *(_DWORD *)(v28 + 2004);
      }
      else if ( v22 == 96 )
      {
        v29 = *(_DWORD *)(v28 + 2392);
      }
      else
      {
        v30 = GetDpiDepSysMetCachePlateauSlot(v22);
        if ( v30 == -1 )
        {
          v29 = ScaleSystemMetricForDPIWithoutCache(31LL, v22);
        }
        else
        {
          v32 = 112LL * v30;
          v29 = *(_DWORD *)(v31 + v32 + 3096);
          if ( v29 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v22);
            v29 = *(_DWORD *)(v32 + gpsi + 3096);
            if ( v29 == -1 )
              v29 = 0;
          }
        }
      }
      WindowBordersForDpi = GetWindowBordersForDpi(
                              *(unsigned int *)(v18 + 52),
                              *(unsigned int *)(v18 + 48),
                              v19,
                              v20,
                              v22);
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37) & 0xF) != 0 )
          goto LABEL_46;
      }
      else if ( !IsDPIDWMSysMet(v35)
             || (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
               ? (v59 = 0)
               : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v56,
                                                              v57,
                                                              v58)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v59) )
      {
LABEL_46:
        if ( IsDPIDWMSysMet(6uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 408)
            ? (v48 = 0)
            : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v45,
                                                           v46,
                                                           v47)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v48) )
        {
          v60 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v60 = (_DWORD *)(gpsi + 1904LL);
        }
LABEL_61:
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v62, v61, v63, v64) & 0xF) != 0 )
            goto LABEL_71;
        }
        else if ( !IsDPIDWMSysMet(v62)
               || (W32GetCurrentThreadDpiAwarenessContext(v66, v65, v67, v68) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71) + 408)
                 ? (v75 = 0)
                 : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v72,
                                                                v73,
                                                                v74)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v75) )
        {
LABEL_71:
          if ( IsDPIDWMSysMet(5uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82, v83) + 408)
              ? (v87 = 0)
              : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v84,
                                                             v85,
                                                             v86)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v87) )
          {
            v76 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v76 = (_DWORD *)(gpsi + 1900LL);
          }
LABEL_79:
          v88 = *(_DWORD *)(v18 + 112);
          v89 = v88 + WindowBordersForDpi * *v76;
          v100 = *(_DWORD *)(v18 + 116) + WindowBordersForDpi * *v60;
          v90 = (*(_BYTE *)(v18 + 50) & 0x40) == 0;
          v99 = v89;
          v102 = v100 + v29;
          v101 = v89 + v24;
          if ( !v90 )
          {
            v101 = v88 + *(_DWORD *)(v18 + 120) - v89;
            v99 = v101 - v24;
          }
          if ( PtInRect(&v99, v96) )
          {
            *a2 = v91;
            return 0xFFFFFFFFLL;
          }
          v92 = *((_QWORD *)a1 + 6);
          if ( v92 )
          {
            v93 = MNItemHitTest(v92, v18);
            if ( v93 != -1 )
            {
              *a2 = v93;
              return 4294967291LL;
            }
          }
          return 0LL;
        }
        v76 = (_DWORD *)(gpsi + 2288LL);
        goto LABEL_79;
      }
      v60 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_61;
    }
    if ( (*(_BYTE *)(v18 + 55) & 0x20) != 0 )
      return 0LL;
  }
  else
  {
    v18 = *((_QWORD *)a1 + 2);
    LODWORD(v97) = (__int16)a3;
    HIDWORD(v97) = SHIWORD(v104);
    if ( !PtInRect((_DWORD *)(v18 + 112), v97) )
      return 0LL;
  }
  v17 = MNItemHitTest(*((_QWORD *)a1 + 5), v18);
  v94 = *a1;
  v98 = v17;
  if ( (v94 & 1) == 0 )
  {
    v6 = v18;
    goto LABEL_95;
  }
  v6 = 0xFFFFFFFFLL;
  if ( v17 == -1 )
  {
    v95 = *((_QWORD *)a1 + 6);
    if ( v95 )
    {
      v17 = MNItemHitTest(v95, v18);
      if ( v17 != -1 )
      {
        v6 = 4294967291LL;
        goto LABEL_95;
      }
    }
    return 0LL;
  }
LABEL_95:
  *a2 = v17;
  return v6;
}
