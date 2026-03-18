/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C008E328
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C008E2D4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetMinMetrics @ 0x1C008E908 (SetMinMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // rcx
  int v19; // r12d
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int *v33; // rcx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rcx
  int v48; // edi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _DWORD *v57; // rcx
  int v58; // r8d
  __int64 v59; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // ecx
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
  int v93; // ecx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // ecx

  v4 = 0LL;
  v7 = IsDPIAbsoluteSysMet(0x39uLL);
  if ( v7 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v8, v9) & 0xF) == 0 )
    {
LABEL_29:
      v18 = (int *)(gpsi + 2496LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v6)
         && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_29;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
      ? (v74 = 0)
      : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v74) )
  {
    v18 = (int *)(gpsi + 2884LL);
  }
  else
  {
    v18 = (int *)(gpsi + 2108LL);
  }
LABEL_5:
  v19 = *v18;
  v22 = IsDPIAbsoluteSysMet(0x3AuLL);
  if ( v22 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v23, v24) & 0xF) == 0 )
    {
LABEL_43:
      v33 = (int *)(gpsi + 2500LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v21)
         && (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_43;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
      ? (v88 = 0)
      : (v88 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v88) )
  {
    v33 = (int *)(gpsi + 2888LL);
  }
  else
  {
    v33 = (int *)(gpsi + 2112LL);
  }
LABEL_9:
  v34 = *v33;
  SetMinMetrics(a1, a2);
  if ( v7 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) == 0 )
    {
LABEL_57:
      v47 = (_DWORD *)(gpsi + 2496LL);
      goto LABEL_13;
    }
  }
  else if ( IsDPIDWMSysMet(0x39uLL)
         && (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v45, v46)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_57;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v45, v46) + 408)
      ? (v93 = 0)
      : (v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v45, v46)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v93) )
  {
    v47 = (_DWORD *)(gpsi + 2884LL);
  }
  else
  {
    v47 = (_DWORD *)(gpsi + 2108LL);
  }
LABEL_13:
  v48 = *v47 - v19;
  if ( v22 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v47, v43, v45, v46) & 0xF) == 0 )
    {
LABEL_71:
      v57 = (_DWORD *)(gpsi + 2500LL);
      goto LABEL_17;
    }
  }
  else if ( IsDPIDWMSysMet(0x3AuLL)
         && (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_71;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103) + 408)
      ? (v107 = 0)
      : (v107 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v104,
                                                      v105,
                                                      v106)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v107) )
  {
    v57 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v57 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_17:
  v58 = *v57 - v34;
  if ( v48 || v58 )
    xxxMetricsRecalc(4, v48, v58, 0, 0, 0, 0);
  v59 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v59 )
    v4 = *(struct tagWND **)(*(_QWORD *)(v59 + 8) + 16LL);
  xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  return 1LL;
}
