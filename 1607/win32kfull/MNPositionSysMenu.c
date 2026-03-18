/*
 * XREFs of MNPositionSysMenu @ 0x1C01F46E8
 * Callers:
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     xxxSetSystemMenu @ 0x1C0234264 (xxxSetSystemMenu.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 */

struct _NT_TIB *__fastcall MNPositionSysMenu(__int64 a1, __int64 a2)
{
  struct _NT_TIB *result; // rax
  int v5; // edi
  int v6; // esi
  int SystemMetricsForWindow; // eax
  unsigned int v8; // edx
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rax
  int WindowBordersForDpi; // r12d
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  _DWORD *v42; // rbx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  _DWORD *v69; // rcx

  if ( !a2 )
    return UserSetLastError(6LL);
  if ( a1 != *(_QWORD *)(a2 + 72) )
    HMAssignmentLock(a2 + 72, a1);
  v5 = 0;
  v6 = 0;
  if ( *(char *)(a1 + 48) >= 0 )
  {
    SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0x1Eu);
    v8 = 31;
  }
  else
  {
    SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0x34u);
    v8 = 53;
  }
  v9 = SystemMetricsForWindow;
  v12 = GetSystemMetricsForWindow(a1, v8);
  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
    {
      v13 = *(unsigned __int16 *)(a1 + 356);
    }
    else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
           && (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 244LL) & 1) != 0 )
    {
      v13 = 96;
    }
    else
    {
      v13 = *(unsigned __int16 *)(gpsi + 8678LL);
    }
    WindowBordersForDpi = GetWindowBordersForDpi(*(unsigned int *)(a1 + 52), *(unsigned int *)(a1 + 48), v10, v11, v13);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) != 0 )
        goto LABEL_18;
    }
    else if ( !IsDPIDWMSysMet(v17)
           || (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
             ? (v41 = 0)
             : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v38,
                                                            v39,
                                                            v40)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v41) )
    {
LABEL_18:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v27,
                                                         v28,
                                                         v29)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v30) )
      {
        v42 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v42 = (_DWORD *)(gpsi + 1904LL);
      }
LABEL_33:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) != 0 )
          goto LABEL_35;
      }
      else if ( !IsDPIDWMSysMet(v44)
             || (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60, v61) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 408)
               ? (v68 = 0)
               : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v65,
                                                              v66,
                                                              v67)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v68) )
      {
LABEL_35:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
            ? (v57 = 0)
            : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v54,
                                                           v55,
                                                           v56)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v57) )
        {
          v69 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v69 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_50;
      }
      v69 = (_DWORD *)(gpsi + 2288LL);
LABEL_50:
      v6 = *v42 * WindowBordersForDpi;
      v5 = WindowBordersForDpi * *v69;
      v9 += v5;
      v12 += v6;
      goto LABEL_51;
    }
    v42 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_33;
  }
LABEL_51:
  result = (struct _NT_TIB *)*(unsigned int *)(a2 + 40);
  if ( ((unsigned __int8)result & 0x10) == 0 && *(_DWORD *)(a2 + 52) )
  {
    result = *(struct _NT_TIB **)(a2 + 80);
    if ( result )
    {
      HIDWORD(result[1].StackLimit) = v6;
      LODWORD(result[1].StackLimit) = v5;
      LODWORD(result[1].SubSystemTib) = v9 - v5;
      HIDWORD(result[1].SubSystemTib) = v12 - v6;
    }
  }
  return result;
}
