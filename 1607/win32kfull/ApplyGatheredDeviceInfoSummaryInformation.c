/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C00E317C
 * Callers:
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00E2EF0 (ApplyRimDevBackedDeviceSummaryInfomation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     UpdateTPCurrentActiveState @ 0x1C00E3404 (UpdateTPCurrentActiveState.c)
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C01303D4 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _DWORD *v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _DWORD *v61; // rcx
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _DWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // ecx
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // ecx
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  int v144; // ecx

  if ( !a1 )
    goto LABEL_4;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
LABEL_4:
    UpdateTPCurrentActiveState();
    if ( a2 )
    {
      if ( gnMice )
        goto LABEL_6;
      gdwGTERMFlags |= 1u;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) == 0 )
        {
LABEL_43:
          v61 = (_DWORD *)(gpsi + 2344LL);
LABEL_29:
          *v61 = 1;
          SetGlobalCursorLevel(0);
          GreMovePointer((HDEV)*gpDispInfo, *(unsigned int *)(gpsi + 5368LL), *(unsigned int *)(gpsi + 5372LL), 1LL);
          goto LABEL_6;
        }
      }
      else if ( IsDPIDWMSysMet(v50)
             && (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v78,
                                                      v79,
                                                      v80)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_43;
      }
      if ( IsDPIDWMSysMet(0x13uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
          ? (v88 = 0)
          : (v88 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v85,
                                                         v86,
                                                         v87)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v88) )
      {
        v61 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v61 = (_DWORD *)(gpsi + 1956LL);
      }
      goto LABEL_29;
    }
    if ( !gnMice )
    {
LABEL_6:
      if ( a1 )
      {
LABEL_7:
        gnMice = a2;
        return;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2BuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 0 )
        {
LABEL_71:
          v22 = (_DWORD *)(gpsi + 2440LL);
          goto LABEL_16;
        }
      }
      else if ( IsDPIDWMSysMet(v11)
             && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v106,
                                                      v107,
                                                      v108)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_71;
      }
      if ( IsDPIDWMSysMet(0x2BuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 408)
          ? (v116 = 0)
          : (v116 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v113,
                                                          v114,
                                                          v115)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v116) )
      {
        v22 = (_DWORD *)(gpsi + 2828LL);
      }
      else
      {
        v22 = (_DWORD *)(gpsi + 2052LL);
      }
LABEL_16:
      *v22 = a3;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4BuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 0 )
        {
LABEL_85:
          v35 = (_DWORD *)(gpsi + 2568LL);
          goto LABEL_20;
        }
      }
      else if ( IsDPIDWMSysMet(v24)
             && (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v120,
                                                      v121,
                                                      v122)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_85;
      }
      if ( IsDPIDWMSysMet(0x4BuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v125, v126) + 408)
          ? (v130 = 0)
          : (v130 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v127,
                                                          v128,
                                                          v129)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v130) )
      {
        v35 = (_DWORD *)(gpsi + 2956LL);
      }
      else
      {
        v35 = (_DWORD *)(gpsi + 2180LL);
      }
LABEL_20:
      *v35 = a4 != 0;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x5BuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 0 )
        {
LABEL_99:
          v48 = (_DWORD *)(gpsi + 2632LL);
LABEL_24:
          *v48 = a5;
          goto LABEL_7;
        }
      }
      else if ( IsDPIDWMSysMet(v37)
             && (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42, v43) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v134,
                                                      v135,
                                                      v136)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_99;
      }
      if ( IsDPIDWMSysMet(0x5BuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v138, v139, v140) + 408)
          ? (v144 = 0)
          : (v144 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v141,
                                                          v142,
                                                          v143)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v144) )
      {
        v48 = (_DWORD *)(gpsi + 3020LL);
      }
      else
      {
        v48 = (_DWORD *)(gpsi + 2244LL);
      }
      goto LABEL_24;
    }
    gdwGTERMFlags &= ~1u;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64, v65) & 0xF) == 0 )
      {
LABEL_57:
        v74 = (_DWORD *)(gpsi + 2344LL);
LABEL_35:
        *v74 = 0;
        SetGlobalCursorLevel(-1);
        gwMouseOwnerButton = 0;
        goto LABEL_6;
      }
    }
    else if ( IsDPIDWMSysMet(v63)
           && (W32GetCurrentThreadDpiAwarenessContext(v67, v66, v68, v69) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_57;
    }
    if ( IsDPIDWMSysMet(0x13uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v71, v70, v72, v73) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 408)
        ? (v102 = 0)
        : (v102 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v99,
                                                        v100,
                                                        v101)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v102) )
    {
      v74 = (_DWORD *)(gpsi + 2732LL);
    }
    else
    {
      v74 = (_DWORD *)(gpsi + 1956LL);
    }
    goto LABEL_35;
  }
  if ( a6 > gnKeyboards )
  {
    UpdateKeyLights(0LL);
    gdwUpdateKeyboard |= 1u;
  }
  gnKeyboards = a6;
}
