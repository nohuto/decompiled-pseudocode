/*
 * XREFs of xxxMenuBarDraw @ 0x1C0238258
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 *     GetCaptionHeight @ 0x1C011CE48 (GetCaptionHeight.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0236524 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  unsigned int *v34; // rcx
  int CaptionHeight; // eax
  unsigned int v37; // esi
  unsigned int v38; // r14d
  int v39; // ecx
  HDC v40; // r13
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // r12d
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
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v71; // rcx
  int *v72; // rax
  bool v73; // zf
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r8
  __int64 v88; // r9
  int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // ecx
  int *v100; // rcx
  int v101; // ebx
  __int64 v102; // rcx
  unsigned int v103; // ebx
  __int64 v104; // [rsp+30h] [rbp-50h] BYREF
  __int64 v105; // [rsp+38h] [rbp-48h]
  _DWORD v106[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v107; // [rsp+58h] [rbp-28h]
  unsigned int v108; // [rsp+60h] [rbp-20h]
  int v109; // [rsp+64h] [rbp-1Ch]
  int v110; // [rsp+68h] [rbp-18h]
  int v111; // [rsp+6Ch] [rbp-14h]
  __int64 v112; // [rsp+70h] [rbp-10h]
  int v113; // [rsp+B0h] [rbp+30h]
  HDC v114; // [rsp+B8h] [rbp+38h]

  v114 = (HDC)a2;
  v113 = 0;
  v4 = a4;
  v5 = *(_QWORD *)(a1 + 192);
  v6 = a3;
  if ( !v5 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) != 0 )
        goto LABEL_4;
    }
    else if ( !IsDPIDWMSysMet(v9)
           || (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
             ? (v33 = 0)
             : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v30,
                                                            v31,
                                                            v32)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v33) )
    {
LABEL_4:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18) + 408)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v19,
                                                         v20,
                                                         v21)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v22) )
      {
        v34 = (unsigned int *)(gpsi + 2680LL);
      }
      else
      {
        v34 = (unsigned int *)(gpsi + 1904LL);
      }
      return *v34;
    }
    v34 = (unsigned int *)(gpsi + 2292LL);
    return *v34;
  }
  if ( (*(_BYTE *)(a1 + 40) & 0x40) != 0 && (a2 = *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 384) == gpqForeground)
    || (GetAppCompatFlags2(0x400u, a2, a3, a4) & 0x80u) != 0LL )
  {
    *(_DWORD *)(v5 + 40) &= ~0x10u;
  }
  else
  {
    *(_DWORD *)(v5 + 40) |= 0x10u;
  }
  *(_DWORD *)(v5 + 40) |= 0x200u;
  v104 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v104;
  v105 = v5;
  ++*(_DWORD *)(v5 + 8);
  CaptionHeight = GetCaptionHeight(a1);
  v37 = *(_DWORD *)(a1 + 120) - 2 * v6 - *(_DWORD *)(a1 + 112);
  v38 = CaptionHeight + v4;
  if ( a1 != *(_QWORD *)(v5 + 72) || !*(_DWORD *)(v5 + 56) || !*(_DWORD *)(v5 + 60) )
    xxxMenuBarCompute((struct tagMENU *)v5, a1, v38, v6, *(_DWORD *)(a1 + 120) - 2 * v6 - *(_DWORD *)(a1 + 112));
  if ( *(_DWORD *)(v5 + 56) <= v37
    && (int)(v38 + *(_DWORD *)(v5 + 60)) <= *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) - v4 )
  {
    v40 = v114;
  }
  else
  {
    GreLockVisRgn(*gpDispInfo);
    v39 = *(_DWORD *)(a1 + 124) - v4;
    v40 = v114;
    v113 = 1;
    GreIntersectVisRect(
      v114,
      *(_DWORD *)(a1 + 112) + v6,
      *(unsigned int *)(a1 + 116),
      v6 + *(_DWORD *)(a1 + 112) + v37,
      v39);
    GreUnlockVisRgn(*gpDispInfo);
  }
  v41 = *(_DWORD *)(v5 + 56);
  v42 = *(_DWORD *)(v5 + 60);
  v106[0] = v6;
  v106[1] = v38;
  v106[2] = v41;
  v43 = *(_QWORD *)(v5 + 112);
  v106[3] = v42;
  if ( !v43 )
  {
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      v43 = *(_QWORD *)(gpsi + 5328LL);
    else
      v43 = *(_QWORD *)(gpsi + 5120LL);
  }
  v107 = v43;
  v108 = v6;
  v109 = v42 + v38;
  v110 = v41;
  v48 = IsDPIAbsoluteSysMet(6uLL);
  if ( v48 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) != 0 )
      goto LABEL_39;
LABEL_49:
    v71 = gpsi;
    v72 = (int *)(gpsi + 2292LL);
    goto LABEL_54;
  }
  if ( IsDPIDWMSysMet(v45)
    && (W32GetCurrentThreadDpiAwarenessContext(v61, v60, v62, v63) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_49;
  }
LABEL_39:
  if ( IsDPIDWMSysMet(6uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
      ? (v59 = 0)
      : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v59) )
  {
    v71 = gpsi;
    v72 = (int *)(gpsi + 2680LL);
  }
  else
  {
    v71 = gpsi;
    v72 = (int *)(gpsi + 1904LL);
  }
LABEL_54:
  v73 = (*(_BYTE *)(a1 + 49) & 3) == 0;
  v111 = *v72;
  if ( v73 || (*(_BYTE *)(a1 + 44) & 8) != 0 )
    v74 = *(_QWORD *)(v71 + 5136);
  else
    v74 = *(_QWORD *)(v71 + 5208);
  v112 = v74;
  GrePolyPatBlt(v40, 15728673, (struct _POLYPATBLT *)v106, 2);
  if ( (*(_BYTE *)(a1 + 49) & 3) == 0 || (*(_BYTE *)(a1 + 44) & 8) != 0 )
    v75 = *(_QWORD *)(gpsi + 5136LL);
  else
    v75 = *(_QWORD *)(gpsi + 5208LL);
  v76 = GreSelectBrush(v40, v75);
  xxxMenuDraw(v40, v5, 0LL);
  GreSelectBrush(v40, v76);
  if ( v113 )
    RecalcDCVisRgn(v40);
  if ( v48 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80) & 0xF) != 0 )
      goto LABEL_66;
  }
  else if ( !IsDPIDWMSysMet(6uLL)
         || (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92, v93) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 408)
           ? (v99 = 0)
           : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v81,
                                                          v97,
                                                          v98)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v99) )
  {
LABEL_66:
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v82, v81, v83, v84) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v85, v86) + 408)
        ? (v89 = 0)
        : (v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v81,
                                                       v87,
                                                       v88)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v89) )
    {
      v100 = (int *)(gpsi + 2680LL);
    }
    else
    {
      v100 = (int *)(gpsi + 1904LL);
    }
    goto LABEL_81;
  }
  v100 = (int *)(gpsi + 2292LL);
LABEL_81:
  v101 = *v100;
  v102 = v105;
  v103 = *(_DWORD *)(v5 + 60) + v101;
  *(_DWORD *)(v105 + 40) &= ~0x200u;
  ThreadUnlock1(v102, v81);
  return v103;
}
