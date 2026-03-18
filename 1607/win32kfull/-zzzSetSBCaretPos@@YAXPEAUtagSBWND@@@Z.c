/*
 * XREFs of ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C022BC38
 * Callers:
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 */

void __fastcall zzzSetSBCaretPos(struct tagSBWND *a1)
{
  int v2; // esi
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  _DWORD *v29; // rdi
  int v30; // ebx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
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
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  _DWORD *v57; // rcx

  if ( a1 == *(struct tagSBWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
  {
    if ( *((_DWORD *)a1 + 90) )
      v2 = *((_DWORD *)a1 + 105);
    else
      v2 = *((_DWORD *)a1 + 98);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v4, v3, v5, v6) & 0xF) != 0 )
        goto LABEL_7;
    }
    else if ( !IsDPIDWMSysMet(v4)
           || (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 408)
             ? (v28 = 0)
             : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v25,
                                                            v26,
                                                            v27)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v28) )
    {
LABEL_7:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 408)
          ? (v17 = 0)
          : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v14,
                                                         v15,
                                                         v16)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v17) )
      {
        v29 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v29 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_22:
      if ( *((_DWORD *)a1 + 90) )
        v30 = *((_DWORD *)a1 + 98);
      else
        v30 = *((_DWORD *)a1 + 105);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0 )
          goto LABEL_27;
      }
      else if ( !IsDPIDWMSysMet(v32)
             || (W32GetCurrentThreadDpiAwarenessContext(v47, v46, v48, v49) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
               ? (v56 = 0)
               : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v53,
                                                              v54,
                                                              v55)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v56) )
      {
LABEL_27:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 408)
            ? (v45 = 0)
            : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v42,
                                                           v43,
                                                           v44)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v45) )
        {
          v57 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v57 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_42;
      }
      v57 = (_DWORD *)(gpsi + 2448LL);
LABEL_42:
      zzzSetCaretPos(v30 + *v57, v2 + *v29);
      return;
    }
    v29 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_22;
  }
}
