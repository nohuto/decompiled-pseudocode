/*
 * XREFs of xxxMNDrawFullNC @ 0x1C0237D5C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     GreSetBrushOrg @ 0x1C00B276C (GreSetBrushOrg.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00B7D88 (xxxSendUAHMenuMessage.c)
 *     DrawFrame @ 0x1C0123204 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x1C0152E44 (GreGetBrushOrg.c)
 *     MNDrawArrow @ 0x1C0236A44 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C023715C (MNDrawEdge.c)
 */

void __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 a3)
{
  int v6; // edi
  HDC DCEx; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  LONG v12; // ecx
  _DWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  LONG top; // eax
  LONG bottom; // edi
  LONG right; // r12d
  int left; // r13d
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ecx
  _DWORD *v46; // rdi
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  int v64; // ecx
  LONG v65; // edi
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  int v70; // r12d
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  struct tagDPIMETRICS *v78; // rax
  RECT v79; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v80[4]; // [rsp+40h] [rbp-20h] BYREF
  LONG v81; // [rsp+B0h] [rbp+50h]
  __int64 v82; // [rsp+B8h] [rbp+58h] BYREF

  v6 = 0;
  if ( !*(_QWORD *)(a3 + 40) )
    return;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
  if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(a3 + 40)) )
  {
    v8 = *(_QWORD *)(a3 + 16);
    if ( v8 )
    {
      v80[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v80;
      v80[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v6 = xxxSendUAHMenuMessage(*(struct tagWND **)(a3 + 16), 0x95u, *(_QWORD *)(a3 + 40), (__int64)DCEx);
      ThreadUnlock1(v10, v9);
    }
  }
  v11 = *(_QWORD *)(a3 + 40);
  if ( v11 )
  {
    if ( v6 )
    {
      MNDrawArrow(DCEx, a3, -3);
      MNDrawArrow(DCEx, a3, -4);
      goto LABEL_59;
    }
    v12 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
    v79.bottom = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
    *(_QWORD *)&v79.left = 0LL;
    v79.right = v12;
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      MNDrawEdge(v11, a2, &v79, 0x2000);
      top = v79.top;
      bottom = v79.bottom;
      right = v79.right;
      left = v79.left;
LABEL_50:
      v81 = top;
      v65 = bottom - *((_DWORD *)GetDPIMETRICS(a1, (__int64)v13, v14, v15) + 17);
      GreGetBrushOrg(DCEx, &v82);
      v66 = *(_QWORD *)(a3 + 40);
      if ( *(_QWORD *)(v66 + 112) )
      {
        v67 = *(unsigned int *)(v66 + 120);
        if ( (_DWORD)v67 == -1 || (unsigned int)v67 >= *(_DWORD *)(v66 + 52) )
          v68 = 0LL;
        else
          v68 = *(_QWORD *)(v66 + 80) + 152 * v67;
        GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(v68 + 76), 0LL);
        v69 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 112LL);
      }
      else
      {
        v69 = *(_QWORD *)(gpsi + 5120LL);
      }
      *(_QWORD *)&v79.left = GreSelectBrush(DCEx, v69);
      v70 = right - left;
      DPIMETRICS = GetDPIMETRICS(a1, v71, v72, v73);
      NtGdiPatBlt(DCEx, left, v81, v70, *((_DWORD *)DPIMETRICS + 17), 15728673);
      MNDrawArrow(DCEx, a3, -3);
      v78 = GetDPIMETRICS(a1, v75, v76, v77);
      NtGdiPatBlt(DCEx, left, v65, v70, *((_DWORD *)v78 + 17), 15728673);
      MNDrawArrow(DCEx, a3, -4);
      GreSetBrushOrg(DCEx, v82, SHIDWORD(v82), 0LL);
      GreSelectBrush(DCEx, *(_QWORD *)&v79.left);
LABEL_59:
      if ( a2 )
        return;
      goto LABEL_60;
    }
    DrawEdge(DCEx, &v79, 5u, 0x200Fu);
    DrawFrame(DCEx, &v79.left, 1, 120);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) != 0 )
        goto LABEL_17;
    }
    else if ( !IsDPIDWMSysMet(v21)
           || (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 408)
             ? (v45 = 0)
             : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v42,
                                                            v43,
                                                            v44)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v45) )
    {
LABEL_17:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
          ? (v34 = 0)
          : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v31,
                                                         v32,
                                                         v33)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v34) )
      {
        v46 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v46 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_32:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0 )
          goto LABEL_34;
      }
      else if ( !IsDPIDWMSysMet(v48)
             || (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 408)
               ? (v64 = 0)
               : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v63,
                                                              v14,
                                                              v15)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v64) )
      {
LABEL_34:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v14, v15) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v14, v15) + 408)
            ? (v55 = 0)
            : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v54,
                                                           v14,
                                                           v15)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v55) )
        {
          v13 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v13 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_49;
      }
      v13 = (_DWORD *)(gpsi + 2288LL);
LABEL_49:
      left = v79.left + *v13;
      right = v79.right - *v13;
      top = v79.top + *v46;
      bottom = v79.bottom - *v46;
      goto LABEL_50;
    }
    v46 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_32;
  }
  if ( !a2 && DCEx )
LABEL_60:
    _ReleaseDC(DCEx);
}
