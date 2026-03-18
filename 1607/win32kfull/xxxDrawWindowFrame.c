/*
 * XREFs of xxxDrawWindowFrame @ 0x1C00AE488
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     GetCaptionHeight @ 0x1C011CE48 (GetCaptionHeight.c)
 *     xxxDrawScrollBar @ 0x1C014E540 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DrawSize @ 0x1C022BED4 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(__int64 a1, HDC a2, __int16 a3)
{
  unsigned int v6; // edi
  int ClipBox; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int WindowBorders; // r13d
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  unsigned int v24; // r14d
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rcx
  unsigned int v38; // r13d
  unsigned int v39; // esi
  int CaptionHeight; // eax
  bool v41; // zf
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  _DWORD *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // ecx
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  int v123; // ecx
  RECT v125; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v126[16]; // [rsp+30h] [rbp-58h] BYREF

  v6 = 36876;
  ClipBox = IsVisible(a1);
  if ( ClipBox )
  {
    LOBYTE(ClipBox) = *(_BYTE *)(v8 + 41) & 0x81;
    if ( (_BYTE)ClipBox != 1 )
    {
      v9 = *(_QWORD *)(v8 + 112) - *(_QWORD *)(a1 + 128);
      if ( !v9 )
        v9 = *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 136);
      if ( v9 )
      {
        if ( *(_QWORD *)(a1 + 160) || (ClipBox = GreGetClipBox(a2, v126, 1LL), ClipBox != 1) )
        {
          if ( ((unsigned __int8)~*(_BYTE *)(a1 + 41) & (*(_BYTE *)(a1 + 55) >> 5) & 1) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 40) & 0x40) != 0 )
              v6 = 36877;
            if ( (a3 & 0x2000) != 0 )
              v6 |= 0x2000u;
            LOBYTE(ClipBox) = xxxDrawCaptionBar(a1, a2, v6);
            return ClipBox;
          }
          WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 52), *(unsigned int *)(a1 + 48));
          if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 0 )
            {
LABEL_58:
              v23 = (_DWORD *)(gpsi + 2288LL);
              goto LABEL_13;
            }
          }
          else if ( IsDPIDWMSysMet(v12)
                 && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v71,
                                                          v72,
                                                          v73)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1 )
          {
            goto LABEL_58;
          }
          if ( IsDPIDWMSysMet(5uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
              ? (v81 = 0)
              : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v78,
                                                             v79,
                                                             v80)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v81) )
          {
            v23 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v23 = (_DWORD *)(gpsi + 1900LL);
          }
LABEL_13:
          v24 = WindowBorders * *v23;
          if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) == 0 )
            {
LABEL_72:
              v37 = (_DWORD *)(gpsi + 2292LL);
              goto LABEL_17;
            }
          }
          else if ( IsDPIDWMSysMet(v26)
                 && (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v85,
                                                          v86,
                                                          v87)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1 )
          {
            goto LABEL_72;
          }
          if ( IsDPIDWMSysMet(6uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
              ? (v95 = 0)
              : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v92,
                                                             v93,
                                                             v94)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v95) )
          {
            v37 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v37 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_17:
          v38 = *v37 * WindowBorders;
          GetRect(a1, &v125, 34LL);
          v125.bottom -= v38;
          v125.left += v24;
          v39 = v125.top + v38;
          v125.right -= v24;
          if ( (*(_BYTE *)(a1 + 40) & ((a3 & 0x2000) == 0)) != 0 )
            v39 += xxxMenuBarDraw(a1, a2, v24, v38);
          if ( ((unsigned __int8)~*(_BYTE *)(a1 + 48) & ((*(_BYTE *)(a1 + 54) & 0xC4) == 0)) == 0
            || (*(_BYTE *)(a1 + 49) & 1) != 0
            || ((unsigned __int8)~*(_BYTE *)(a1 + 41) & (*(_BYTE *)(a1 + 50) >> 1) & 1) != 0 )
          {
            if ( (a3 & 0x2000) != 0 )
              v6 = 45068;
            if ( (a3 & 1) != 0 )
              v6 |= 1u;
            xxxDrawCaptionBar(a1, a2, v6 | 0x800);
          }
          CaptionHeight = GetCaptionHeight(a1);
          v41 = (*(_BYTE *)(a1 + 44) & 0x10) == 0;
          v125.top = CaptionHeight + v39;
          if ( v41 )
            goto LABEL_26;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) == 0 )
            {
LABEL_86:
              v54 = (_DWORD *)(gpsi + 2448LL);
              goto LABEL_36;
            }
          }
          else if ( IsDPIDWMSysMet(v43)
                 && (W32GetCurrentThreadDpiAwarenessContext(v47, v46, v48, v49) & 0xF) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 408)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v99,
                                                          v100,
                                                          v101)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1 )
          {
            goto LABEL_86;
          }
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v51, v50, v52, v53) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
              ? (v109 = 0)
              : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v106,
                                                              v107,
                                                              v108)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v109) )
          {
            v54 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v54 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_36:
          v24 += *v54;
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v56, v55, v57, v58) & 0xF) == 0 )
            {
LABEL_100:
              v67 = (_DWORD *)(gpsi + 2452LL);
LABEL_40:
              v38 += *v67;
              DrawEdge(a2, &v125, 0xAu, 0x200Fu);
LABEL_26:
              if ( (((a3 & 0x2000) == 0) & (*(_BYTE *)(a1 + 40) >> 1)) != 0 )
              {
                if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
                  DrawSize(a1, a2, v24, v38, *(_QWORD *)&v125.left, *(_QWORD *)&v125.right);
                xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
              }
              LOBYTE(ClipBox) = ((a3 & 0x2000) == 0) & (*(_BYTE *)(a1 + 40) >> 2);
              if ( (_BYTE)ClipBox )
                LOBYTE(ClipBox) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
              return ClipBox;
            }
          }
          else if ( IsDPIDWMSysMet(v56)
                 && (W32GetCurrentThreadDpiAwarenessContext(v60, v59, v61, v62) & 0xF) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 408)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v113,
                                                          v114,
                                                          v115)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1 )
          {
            goto LABEL_100;
          }
          if ( IsDPIDWMSysMet(0x2EuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v64, v63, v65, v66) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 408)
              ? (v123 = 0)
              : (v123 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v120,
                                                              v121,
                                                              v122)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v123) )
          {
            v67 = (_DWORD *)(gpsi + 2840LL);
          }
          else
          {
            v67 = (_DWORD *)(gpsi + 2064LL);
          }
          goto LABEL_40;
        }
      }
    }
  }
  return ClipBox;
}
