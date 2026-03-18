/*
 * XREFs of BitBltSysBmp @ 0x1C011D69C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C011D5A8 (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014E5CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022B5BC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C022BED4 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C0236A44 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IS_UI_LANGID @ 0x1C011D824 (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  LONG v5; // edi
  int v6; // r12d
  __int64 v8; // r15
  int *v9; // r15
  unsigned int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // r14d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  _DWORD *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  _DWORD *v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  _DWORD *v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  _DWORD *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // ecx
  _DWORD *v123; // r8
  int v124; // [rsp+A0h] [rbp+18h]

  v124 = a3;
  v4 = (unsigned int)a4;
  v5 = a3;
  v6 = a2;
  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3, a4) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
        ? (v18 = 0)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v15,
                                                       v16,
                                                       v17)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !v18) )
    {
      v19 = (_QWORD *)gpsi;
    }
    else
    {
      v19 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v20 = gpsi + 7140LL;
        goto LABEL_14;
      }
    }
    v20 = *v19 + 5652LL;
LABEL_14:
    v9 = (int *)(v20 + 16 * v4);
    goto LABEL_5;
  }
  if ( gpdaHDCBITSCreation == 2 )
    v8 = gpsi + 5652LL;
  else
    v8 = gpsi + 7140LL;
  v9 = (int *)(16LL * (unsigned int)a4 + v8);
LABEL_5:
  FixHDCBITSBmp();
  v10 = NtGdiBitBltInternal(a1, v6, v5, v9[2], v9[3], *(HDC *)(gpDispInfo + 32LL), *v9, v9[1], 0xCC0020u, 0, 0);
  if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 8692LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && (unsigned int)(v4 - 11) <= 2 )
  {
    if ( (_DWORD)v4 != 12 )
      goto LABEL_40;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) != 0 )
        goto LABEL_24;
    }
    else if ( !IsDPIDWMSysMet(v22)
           || (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
             ? (v46 = 0)
             : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v43,
                                                            v44,
                                                            v45)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v46) )
    {
LABEL_24:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
          ? (v35 = 0)
          : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v32,
                                                         v33,
                                                         v34)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v35) )
      {
        v47 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v47 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_39;
    }
    v47 = (_DWORD *)(gpsi + 2448LL);
LABEL_39:
    v6 += *v47;
LABEL_40:
    v52 = IsDPIAbsoluteSysMet(0x2DuLL);
    if ( v52 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v50, v51) & 0xF) != 0 )
        goto LABEL_42;
    }
    else if ( !IsDPIDWMSysMet(v49)
           || (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
             ? (v54 = 0LL)
             : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v53,
                                                            v55,
                                                            v56)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !(_DWORD)v54) )
    {
LABEL_42:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v55, v56) + 408)
          ? (v54 = 0LL)
          : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v53,
                                                         v55,
                                                         v56)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            (_DWORD)v54) )
      {
        v64 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v64 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_57:
      if ( v52 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0 )
          goto LABEL_59;
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 408)
               ? (v66 = 0LL)
               : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v65,
                                                              v67,
                                                              v68)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !(_DWORD)v66) )
      {
LABEL_59:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v66, v65, v67, v68) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v67, v68) + 408)
            ? (v66 = 0LL)
            : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v65,
                                                           v67,
                                                           v68)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              (_DWORD)v66) )
        {
          v76 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v76 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_74:
        if ( v52 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v66, v65, v67, v68) & 0xF) != 0 )
            goto LABEL_76;
        }
        else if ( !IsDPIDWMSysMet(0x2DuLL)
               || (W32GetCurrentThreadDpiAwarenessContext(v82, v81, v83, v84) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 408)
                 ? (v78 = 0LL)
                 : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v77,
                                                                v79,
                                                                v80)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !(_DWORD)v78) )
        {
LABEL_76:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v79, v80) + 408)
              ? (v78 = 0LL)
              : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v77,
                                                             v79,
                                                             v80)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                (_DWORD)v78) )
          {
            v88 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v88 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_91:
          if ( v52 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80) & 0xF) != 0 )
              goto LABEL_93;
          }
          else if ( !IsDPIDWMSysMet(0x2DuLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v94, v93, v95, v96) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99) + 408)
                   ? (v90 = 0LL)
                   : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v89,
                                                                  v91,
                                                                  v92)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !(_DWORD)v90) )
          {
LABEL_93:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v90, v89, v91, v92) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v91, v92) + 408)
                ? (v90 = 0LL)
                : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v89,
                                                               v91,
                                                               v92)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  (_DWORD)v90) )
            {
              v100 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v100 = (_DWORD *)(gpsi + 2060LL);
            }
LABEL_108:
            if ( v52 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v90, v89, v91, v92) & 0xF) != 0 )
                goto LABEL_110;
            }
            else if ( !IsDPIDWMSysMet(0x2DuLL)
                   || (W32GetCurrentThreadDpiAwarenessContext(v113, v112, v114, v115) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v116, v117, v118) + 408)
                     ? (v122 = 0)
                     : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v119,
                                                                     v120,
                                                                     v121)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v122) )
            {
LABEL_110:
              if ( IsDPIDWMSysMet(0x2DuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v102, v101, v103, v104) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v105, v106, v107) + 408)
                  ? (v111 = 0)
                  : (v111 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v108,
                                                                  v109,
                                                                  v110)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v111) )
              {
                v123 = (_DWORD *)(gpsi + 2836LL);
              }
              else
              {
                v123 = (_DWORD *)(gpsi + 2060LL);
              }
              return (unsigned int)NtGdiBitBltInternal(
                                     a1,
                                     v6,
                                     *v123 + v124,
                                     v9[2] - 2 * *v100,
                                     v9[3] - 2 * *v88,
                                     *(HDC *)(gpDispInfo + 32LL),
                                     *v76 + *v9,
                                     *v64 + v9[1],
                                     0x80CC0020,
                                     0,
                                     0);
            }
            v123 = (_DWORD *)(gpsi + 2448LL);
            return (unsigned int)NtGdiBitBltInternal(
                                   a1,
                                   v6,
                                   *v123 + v124,
                                   v9[2] - 2 * *v100,
                                   v9[3] - 2 * *v88,
                                   *(HDC *)(gpDispInfo + 32LL),
                                   *v76 + *v9,
                                   *v64 + v9[1],
                                   0x80CC0020,
                                   0,
                                   0);
          }
          v100 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_108;
        }
        v88 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_91;
      }
      v76 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_74;
    }
    v64 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_57;
  }
  return v10;
}
