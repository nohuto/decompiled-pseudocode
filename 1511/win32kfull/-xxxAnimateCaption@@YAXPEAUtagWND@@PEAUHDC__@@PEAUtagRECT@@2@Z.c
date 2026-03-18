/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226E94
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C0227878 (xxxDrawAnimatedRects.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetWindowBorders @ 0x1C00CBEDC (GetWindowBorders.c)
 *     _WindowFromDC @ 0x1C00E5F40 (_WindowFromDC.c)
 *     CreateCaptionStrip @ 0x1C010BF40 (CreateCaptionStrip.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0226CF4 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  int v16; // ebx
  HDC CompatibleDC; // rdi
  _QWORD *v18; // rdx
  __int64 CaptionStrip; // rax
  __int64 v20; // rax
  LONG left; // ebp
  int v22; // r15d
  LONG top; // r13d
  int v24; // r14d
  __int64 v25; // rcx
  int WindowBorders; // esi
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // r15d
  int v43; // r12d
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // r13
  unsigned __int16 v52; // cx
  int v53; // r8d
  int v54; // r13d
  unsigned int v55; // ecx
  LONG v56; // edx
  HDC v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // [rsp+60h] [rbp-B8h]
  int v63; // [rsp+60h] [rbp-B8h]
  LONG v64; // [rsp+64h] [rbp-B4h]
  LONG v65; // [rsp+68h] [rbp-B0h]
  int v66; // [rsp+68h] [rbp-B0h]
  int v67; // [rsp+6Ch] [rbp-ACh]
  int v68; // [rsp+6Ch] [rbp-ACh]
  LONG v69; // [rsp+70h] [rbp-A8h]
  int v70; // [rsp+70h] [rbp-A8h]
  int v71; // [rsp+74h] [rbp-A4h]
  unsigned int v74; // [rsp+80h] [rbp-98h]
  struct tagWND *v75; // [rsp+88h] [rbp-90h]
  __int16 v77; // [rsp+90h] [rbp-88h]
  __int64 v78; // [rsp+98h] [rbp-80h]
  _QWORD v79[3]; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v80[4]; // [rsp+B8h] [rbp-60h] BYREF

  v75 = WindowFromDC(a2);
  if ( !v75 )
    return;
  v67 = IsDPIAbsoluteSysMet(4uLL);
  if ( v67 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) != 0 )
    {
      goto LABEL_5;
    }
LABEL_16:
    v14 = gpsi;
    v15 = (_DWORD *)(gpsi + 2284LL);
    goto LABEL_21;
  }
  if ( IsDPIDWMSysMet(v6)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_16;
  }
LABEL_5:
  if ( IsDPIDWMSysMet(4uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v10 = 0)
      : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v10) )
  {
    v14 = gpsi;
    v15 = (_DWORD *)(gpsi + 2672LL);
  }
  else
  {
    v14 = gpsi;
    v15 = (_DWORD *)(gpsi + 1896LL);
  }
LABEL_21:
  v16 = *v15 - 1;
  if ( gProtocolType )
    return;
  if ( (*(_DWORD *)(v14 + 2220) & 2) != 0 )
    return;
  CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem, v8);
  if ( !CompatibleDC )
    return;
  v18 = (_QWORD *)ghbmCaption;
  if ( !ghbmCaption )
  {
    CaptionStrip = CreateCaptionStrip();
    v18 = (_QWORD *)ghbmCaption;
    ghbmCaption = CaptionStrip;
  }
  v20 = GreSelectBitmap(CompatibleDC, *v18);
  left = a3->left;
  v22 = a4->right - a4->left;
  top = a3->top;
  v24 = a3->right - a3->left;
  v78 = v20;
  v69 = a4->top;
  v65 = a4->left;
  v71 = top;
  v64 = a3->left;
  v62 = v22;
  WindowBorders = GetWindowBorders(*((_DWORD *)a1 + 13), *((_DWORD *)a1 + 12));
  if ( v67 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0 )
    {
      goto LABEL_29;
    }
LABEL_40:
    v33 = (_DWORD *)(gpsi + 2284LL);
    goto LABEL_45;
  }
  if ( IsDPIDWMSysMet(4uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_40;
  }
LABEL_29:
  if ( IsDPIDWMSysMet(4uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v29 = 0)
      : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v29) )
  {
    v33 = (_DWORD *)(gpsi + 2672LL);
  }
  else
  {
    v33 = (_DWORD *)(gpsi + 1896LL);
  }
LABEL_45:
  if ( a3->bottom - top > *v33 )
  {
    left += WindowBorders;
    top += WindowBorders;
    v64 = left;
    v71 = top;
    v24 -= 2 * WindowBorders;
  }
  if ( v67 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
    {
      goto LABEL_50;
    }
  }
  else if ( !IsDPIDWMSysMet(4uLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v39 = 0)
           : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v39) )
  {
LABEL_50:
    if ( IsDPIDWMSysMet(4uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v36 = 0)
        : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v36) )
    {
      v40 = (_DWORD *)(gpsi + 2672LL);
    }
    else
    {
      v40 = (_DWORD *)(gpsi + 1896LL);
    }
    goto LABEL_66;
  }
  v40 = (_DWORD *)(gpsi + 2284LL);
LABEL_66:
  if ( a4->bottom - v69 > *v40 )
  {
    v65 += WindowBorders;
    v69 += WindowBorders;
    v62 = v22 - 2 * WindowBorders;
  }
  v41 = v62;
  v42 = top;
  v80[0] = 0;
  if ( v24 > v62 )
    v41 = v24;
  v80[1] = v16;
  v80[2] = v41;
  v43 = v24;
  v80[3] = 2 * v16;
  v79[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v79;
  v79[1] = v75;
  ++*((_DWORD *)v75 + 2);
  if ( gbDisableAlpha || (v44 = 32, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
    v44 = 0;
  xxxDrawCaptionTemp(a1, CompatibleDC, v80, 0LL, 0LL, 0LL, v44 | 0xD);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v46, v45);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v47 = SaveScreen(v75, 0, 0LL, v64, top, v24, v16);
  if ( v47 || (v48 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v24, v16, a2, v64, top, 0xCC0020u, 0, 0), v50 = 0LL, v48) )
  {
    v70 = v69 - top;
    v66 = v65 - v64;
    v63 = v62 - v24;
    v51 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v77 = v51;
    NtGdiBitBltInternal(a2, v64, v71, v24, v16, CompatibleDC, 0, v16, 0xCC0020u, 0, 0);
    v52 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v51;
    if ( v52 > 0xFAu )
    {
      v57 = a2;
    }
    else
    {
      do
      {
        v53 = v63 * v52 + 125;
        v54 = v64 + (v66 * v52 + 125) / 250;
        v55 = (int)((unsigned __int64)(274877907LL * (v70 * v52 + 125)) >> 32) >> 4;
        v74 = v71 + (v55 >> 31) + v55;
        v68 = v24 + v53 / 250;
        UserSleep(1LL);
        if ( v47 )
          SaveScreen(v75, 1u, v47, left, v42, v43, v16);
        else
          NtGdiBitBltInternal(a2, left, v42, v43, v16, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
        left = v54;
        v42 = v74;
        v43 = v68;
        if ( v47 )
          v47 = SaveScreen(v75, 0, 0LL, v54, v74, v68, v16);
        else
          NtGdiBitBltInternal(CompatibleDC, 0, 0, v68, v16, a2, v54, v74, 0xCC0020u, 0, 0);
        v56 = v54;
        v57 = a2;
        NtGdiBitBltInternal(a2, v56, v74, v68, v16, CompatibleDC, 0, v16, 0xCC0020u, 0, 0);
        v52 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v77;
      }
      while ( v52 <= 0xFAu );
    }
    if ( v47 )
      SaveScreen(v75, 1u, v47, left, v42, v43, v16);
    else
      NtGdiBitBltInternal(v57, left, v42, v43, v16, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
  }
  LeaveRenderBlock(v49, v50);
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v59, v58);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v61, v60);
  GreSelectBitmap(CompatibleDC, v78);
  GreDeleteDC(CompatibleDC);
}
