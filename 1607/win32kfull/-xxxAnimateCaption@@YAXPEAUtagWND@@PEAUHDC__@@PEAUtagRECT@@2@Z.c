/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C005CB00 (_WindowFromDC.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     CreateCaptionStrip @ 0x1C012D450 (CreateCaptionStrip.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0226A34 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rcx
  _DWORD *v30; // rax
  int v31; // ebx
  HDC CompatibleDC; // rdi
  _QWORD *v33; // rdx
  __int64 CaptionStrip; // rax
  __int64 v35; // rax
  unsigned int left; // ebp
  int v37; // r15d
  LONG top; // r13d
  int v39; // r14d
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  int WindowBorders; // esi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  _DWORD *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  int v82; // ecx
  _DWORD *v83; // rcx
  int v84; // eax
  int v85; // r15d
  int v86; // r12d
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rsi
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 i; // rax
  int v96; // r8d
  unsigned int v97; // ecx
  unsigned __int16 v98; // cx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  LONG v103; // [rsp+60h] [rbp-C8h]
  unsigned int v104; // [rsp+60h] [rbp-C8h]
  unsigned int v105; // [rsp+64h] [rbp-C4h]
  LONG v106; // [rsp+68h] [rbp-C0h]
  int v107; // [rsp+68h] [rbp-C0h]
  int v108; // [rsp+6Ch] [rbp-BCh]
  int v109; // [rsp+6Ch] [rbp-BCh]
  int v110; // [rsp+70h] [rbp-B8h]
  int v111; // [rsp+70h] [rbp-B8h]
  int v113; // [rsp+80h] [rbp-A8h]
  unsigned int v115; // [rsp+88h] [rbp-A0h]
  struct tagWND *v116; // [rsp+90h] [rbp-98h]
  unsigned __int64 v118; // [rsp+98h] [rbp-90h]
  __int64 v119; // [rsp+A0h] [rbp-88h]
  _QWORD v120[3]; // [rsp+A8h] [rbp-80h] BYREF
  int v121; // [rsp+C0h] [rbp-68h]
  int v122; // [rsp+C4h] [rbp-64h]
  int v123; // [rsp+C8h] [rbp-60h]
  int v124; // [rsp+CCh] [rbp-5Ch]

  v116 = WindowFromDC(a2);
  if ( !v116 )
    return;
  v110 = IsDPIAbsoluteSysMet(4uLL);
  if ( v110 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) != 0 )
      goto LABEL_4;
LABEL_14:
    v29 = gpsi;
    v30 = (_DWORD *)(gpsi + 2284LL);
    goto LABEL_19;
  }
  if ( IsDPIDWMSysMet(v7)
    && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v26, v27) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_14;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(4uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v14, v15) + 408)
      ? (v18 = 0)
      : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v16, v17)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v18) )
  {
    v29 = gpsi;
    v30 = (_DWORD *)(gpsi + 2672LL);
  }
  else
  {
    v29 = gpsi;
    v30 = (_DWORD *)(gpsi + 1896LL);
  }
LABEL_19:
  v31 = *v30 - 1;
  if ( gProtocolType )
    return;
  if ( (*(_DWORD *)(v29 + 2220) & 2) != 0 )
    return;
  CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem, v10);
  if ( !CompatibleDC )
    return;
  v33 = (_QWORD *)ghbmCaption;
  if ( !ghbmCaption )
  {
    CaptionStrip = CreateCaptionStrip();
    v33 = (_QWORD *)ghbmCaption;
    ghbmCaption = CaptionStrip;
  }
  v35 = GreSelectBitmap(CompatibleDC, *v33);
  left = a3->left;
  v37 = a4->right - a4->left;
  top = a3->top;
  v39 = a3->right - a3->left;
  v119 = v35;
  v106 = a4->top;
  v103 = a4->left;
  v105 = a3->left;
  v108 = v37;
  WindowBorders = GetWindowBorders(*((unsigned int *)a1 + 13), *((unsigned int *)a1 + 12), v40, v41);
  if ( v110 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v45, v46) & 0xF) != 0 )
      goto LABEL_26;
LABEL_36:
    v60 = (_DWORD *)(gpsi + 2284LL);
    goto LABEL_41;
  }
  if ( IsDPIDWMSysMet(4uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54, v55) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_36;
  }
LABEL_26:
  if ( IsDPIDWMSysMet(4uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v50, v47, v48, v49) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
      ? (v51 = 0)
      : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v51) )
  {
    v60 = (_DWORD *)(gpsi + 2672LL);
  }
  else
  {
    v60 = (_DWORD *)(gpsi + 1896LL);
  }
LABEL_41:
  if ( a3->bottom - top > *v60 )
  {
    left += WindowBorders;
    top += WindowBorders;
    v105 = left;
    v39 -= 2 * WindowBorders;
  }
  if ( v110 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v60, v47, v48, v49) & 0xF) != 0 )
      goto LABEL_45;
  }
  else if ( !IsDPIDWMSysMet(4uLL)
         || (W32GetCurrentThreadDpiAwarenessContext(v73, v72, v74, v75) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 408)
           ? (v82 = 0)
           : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v79,
                                                          v80,
                                                          v81)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v82) )
  {
LABEL_45:
    if ( IsDPIDWMSysMet(4uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v62, v61, v63, v64) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 408)
        ? (v71 = 0)
        : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v68,
                                                       v69,
                                                       v70)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v71) )
    {
      v83 = (_DWORD *)(gpsi + 2672LL);
    }
    else
    {
      v83 = (_DWORD *)(gpsi + 1896LL);
    }
    goto LABEL_60;
  }
  v83 = (_DWORD *)(gpsi + 2284LL);
LABEL_60:
  if ( a4->bottom - v106 > *v83 )
  {
    v103 += WindowBorders;
    v106 += WindowBorders;
    v108 = v37 - 2 * WindowBorders;
  }
  v84 = v108;
  v85 = top;
  v121 = 0;
  v86 = v39;
  v122 = v31;
  if ( v39 > v108 )
    v84 = v39;
  v123 = v84;
  v124 = 2 * v31;
  v120[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v120;
  v120[1] = v116;
  ++*((_DWORD *)v116 + 2);
  if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
    v87 = 0;
  else
    v87 = 32;
  xxxDrawCaptionTemp(a1, CompatibleDC, 0LL, 0LL, v87 | 0xD);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v89, v88);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v90 = SaveScreen(v116, 0, 0LL, v105, top, v39, v31);
  if ( v90 || (v91 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v39, v31, a2, v105, top, 0xCC0020u, 0, 0), v94 = 0LL, v91) )
  {
    v104 = v103 - v105;
    v107 = v106 - top;
    v109 = v108 - v39;
    v118 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    NtGdiBitBltInternal(a2, v105, top, v39, v31, CompatibleDC, 0, v31, 0xCC0020u, 0, 0);
    for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
    {
      v98 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v118;
      if ( v98 > 0xFAu )
        break;
      v96 = v98;
      v97 = (int)((unsigned __int64)(274877907LL * (int)(v104 * v98 + 125)) >> 32) >> 4;
      v115 = v105 + (v97 >> 31) + v97;
      v113 = top + (v107 * v96 + 125) / 250;
      v111 = v39 + (v109 * v96 + 125) / 250;
      UserSleep(1LL);
      if ( v90 )
        SaveScreen(v116, 1u, v90, left, v85, v86, v31);
      else
        NtGdiBitBltInternal(a2, left, v85, v86, v31, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
      left = v115;
      v85 = v113;
      v86 = v111;
      if ( v90 )
        v90 = SaveScreen(v116, 0, 0LL, v115, v113, v111, v31);
      else
        NtGdiBitBltInternal(CompatibleDC, 0, 0, v111, v31, a2, v115, v113, 0xCC0020u, 0, 0);
      NtGdiBitBltInternal(a2, v115, v113, v111, v31, CompatibleDC, 0, v31, 0xCC0020u, 0, 0);
    }
    if ( v90 )
      SaveScreen(v116, 1u, v90, left, v85, v86, v31);
    else
      NtGdiBitBltInternal(a2, left, v85, v86, v31, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
  }
  LeaveRenderBlock(v93, v92, v94);
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v100, v99);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v102, v101);
  GreSelectBitmap(CompatibleDC, v119);
  GreDeleteDC(CompatibleDC);
}
