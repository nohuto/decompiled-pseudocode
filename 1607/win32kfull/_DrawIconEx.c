/*
 * XREFs of _DrawIconEx @ 0x1C00B0C5C
 * Callers:
 *     NtUserDrawIconEx @ 0x1C00B0AD0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     _GetIconSize @ 0x1C003BDD8 (_GetIconSize.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetAnimatedCursorFrame @ 0x1C005DA50 (GetAnimatedCursorFrame.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     BltIcon @ 0x1C00B0F38 (BltIcon.c)
 *     GreSetBrushOrg @ 0x1C00B276C (GreSetBrushOrg.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetBrushOrg @ 0x1C0152E44 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(HDC a1, int a2, LONG a3, __int64 a4, int a5, int a6, int a7, __int64 a8, char a9)
{
  unsigned int v9; // ebx
  __int64 AnimatedCursorFrame; // r13
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // r12d
  int v15; // esi
  int v16; // eax
  int v18; // edi
  HDC CompatibleDC; // r14
  __int64 CompatibleBitmapInternal; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  int *v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // ecx
  int *v66; // rcx
  __int64 v67; // [rsp+68h] [rbp-31h] BYREF
  __int64 v68; // [rsp+70h] [rbp-29h] BYREF
  __int64 v69; // [rsp+80h] [rbp-19h] BYREF
  int v70; // [rsp+88h] [rbp-11h]
  int v71; // [rsp+8Ch] [rbp-Dh]
  __int64 v72; // [rsp+90h] [rbp-9h]
  int v76; // [rsp+100h] [rbp+67h]

  v9 = 0;
  v76 = 0;
  AnimatedCursorFrame = a4;
  v11 = 0;
  v12 = (a9 & 0x10) != 0 ? 0x80000000 : 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) != 0 )
  {
    AnimatedCursorFrame = GetAnimatedCursorFrame(a4, a7);
    if ( !AnimatedCursorFrame )
    {
      UserSetLastError(87LL);
      return v9;
    }
    v11 = 0;
  }
  if ( *(_QWORD *)(AnimatedCursorFrame + 128) )
  {
    if ( (a9 & 3) == 3 )
      v11 = 1;
    v76 = v11;
  }
  GetIconSize(AnimatedCursorFrame, &v67, &v68);
  v14 = a5;
  if ( !a5 )
  {
    if ( (a9 & 8) == 0 )
    {
      v14 = v67;
      goto LABEL_9;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) != 0 )
        goto LABEL_39;
    }
    else if ( !IsDPIDWMSysMet(v22)
           || (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 408)
             ? (v42 = 0)
             : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v13,
                                                            v40,
                                                            v41)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v42) )
    {
LABEL_39:
      if ( IsDPIDWMSysMet(0xBuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v25, v13, v26, v27) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v28, v29) + 408)
          ? (v32 = 0)
          : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v13,
                                                         v30,
                                                         v31)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v32) )
      {
        v43 = (int *)(gpsi + 2700LL);
      }
      else
      {
        v43 = (int *)(gpsi + 1924LL);
      }
      goto LABEL_54;
    }
    v43 = (int *)(gpsi + 2312LL);
LABEL_54:
    v14 = *v43;
  }
LABEL_9:
  v15 = a6;
  if ( a6 )
    goto LABEL_12;
  if ( (a9 & 8) == 0 )
  {
    v13 = (unsigned int)((int)v68 >> 31);
    LODWORD(v13) = (int)v68 % 2;
    v15 = (int)v68 / 2;
    goto LABEL_12;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0xCuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) != 0 )
      goto LABEL_57;
  }
  else if ( !IsDPIDWMSysMet(v45)
         || (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 408)
           ? (v65 = 0)
           : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v13,
                                                          v63,
                                                          v64)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v65) )
  {
LABEL_57:
    if ( IsDPIDWMSysMet(0xCuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v48, v13, v49, v50) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v51, v52) + 408)
        ? (v55 = 0)
        : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v13,
                                                       v53,
                                                       v54)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v55) )
    {
      v66 = (int *)(gpsi + 2704LL);
    }
    else
    {
      v66 = (int *)(gpsi + 1928LL);
    }
    goto LABEL_72;
  }
  v66 = (int *)(gpsi + 2316LL);
LABEL_72:
  v15 = *v66;
LABEL_12:
  if ( a8 )
  {
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v13);
    if ( CompatibleDC )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL);
      v67 = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v68 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        GreGetBrushOrg(a1);
        GreSetBrushOrg(CompatibleDC);
        v69 = 0LL;
        v70 = v14;
        v71 = v15;
        v72 = a8;
        GrePolyPatBlt(CompatibleDC, 15728673, (struct _POLYPATBLT *)&v69, 1);
        if ( v76 )
        {
          BltIcon(CompatibleDC, 0, v15, ghdcMem, AnimatedCursorFrame, 3, v12 | 0xCC0020);
        }
        else
        {
          BltIcon(CompatibleDC, 0, v15, ghdcMem, AnimatedCursorFrame, 1, v12 | 0x8800C6);
          BltIcon(CompatibleDC, 0, v15, ghdcMem, AnimatedCursorFrame, 2, v12 | 0x660046);
        }
        NtGdiBitBltInternal(a1, a2, a3, v14, v15, CompatibleDC, 0, 0, 0xCC0020u, -1, 0);
        GreSelectBitmap(CompatibleDC, v68);
        GreDeleteObject(v67);
        v9 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    if ( v76 )
    {
      BltIcon(a1, a2, v15, ghdcMem, AnimatedCursorFrame, 3, v12 | 0xCC0020);
    }
    else
    {
      if ( (a9 & 1) != 0 )
      {
        if ( (a9 & 2) != 0 )
          v16 = v12 | 0x8800C6;
        else
          v16 = v12 | 0xCC0020;
        BltIcon(a1, a2, v15, ghdcMem, AnimatedCursorFrame, 1, v16);
      }
      if ( (a9 & 2) != 0 )
      {
        if ( (a9 & 1) != 0 )
          v18 = v12 | 0x660046;
        else
          v18 = v12 | 0xCC0020;
        BltIcon(a1, a2, v15, ghdcMem, AnimatedCursorFrame, 2, v18);
      }
    }
    return 1;
  }
  return v9;
}
