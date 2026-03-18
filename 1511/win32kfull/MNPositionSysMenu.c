/*
 * XREFs of MNPositionSysMenu @ 0x1C0143254
 * Callers:
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     xxxSetSystemMenu @ 0x1C01431F8 (xxxSetSystemMenu.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetWindowBordersForDpi @ 0x1C00761EC (GetWindowBordersForDpi.c)
 */

struct _NT_TIB *__fastcall MNPositionSysMenu(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // esi
  int SystemMetricsForWindow; // eax
  unsigned int v7; // edx
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r15d
  unsigned int v12; // eax
  int WindowBordersForDpi; // r12d
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  struct _NT_TIB *result; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v30; // ecx

  if ( !a2 )
    return UserSetLastError(6);
  if ( a1 != *(_QWORD *)(a2 + 72) )
    HMAssignmentLock(a2 + 72, a1);
  v4 = 0;
  v5 = 0;
  if ( *(char *)(a1 + 48) < 0 )
  {
    SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0x34u);
    v7 = 53;
  }
  else
  {
    SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0x1Eu);
    v7 = 31;
  }
  v8 = SystemMetricsForWindow;
  v11 = GetSystemMetricsForWindow(a1, v7);
  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
    {
      v12 = *(unsigned __int16 *)(a1 + 360);
    }
    else if ( *(_DWORD *)(a1 + 344) )
    {
      v12 = *(unsigned __int16 *)(gpsi + 7286LL);
    }
    else
    {
      v12 = 96;
    }
    WindowBordersForDpi = GetWindowBordersForDpi(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), v9, v10, v12);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) == 0 )
      {
LABEL_37:
        v17 = (_DWORD *)(gpsi + 2292LL);
        goto LABEL_14;
      }
    }
    else if ( IsDPIDWMSysMet(v14)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_37;
    }
    if ( IsDPIDWMSysMet(6uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v26 = 0)
        : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v26) )
    {
      v17 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v17 = (_DWORD *)(gpsi + 1904LL);
    }
LABEL_14:
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0 )
      {
LABEL_53:
        v21 = (_DWORD *)(gpsi + 2288LL);
LABEL_18:
        v4 = WindowBordersForDpi * *v21;
        v5 = WindowBordersForDpi * *v17;
        v8 += v4;
        v11 += v5;
        goto LABEL_19;
      }
    }
    else if ( IsDPIDWMSysMet(v18)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_53;
    }
    if ( IsDPIDWMSysMet(5uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v30 = 0)
        : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v30) )
    {
      v21 = (_DWORD *)(gpsi + 2676LL);
    }
    else
    {
      v21 = (_DWORD *)(gpsi + 1900LL);
    }
    goto LABEL_18;
  }
LABEL_19:
  result = (struct _NT_TIB *)*(unsigned int *)(a2 + 40);
  if ( ((unsigned __int8)result & 0x10) == 0 && *(_DWORD *)(a2 + 52) )
  {
    result = *(struct _NT_TIB **)(a2 + 80);
    if ( result )
    {
      HIDWORD(result[1].StackLimit) = v5;
      LODWORD(result[1].StackLimit) = v4;
      LODWORD(result[1].SubSystemTib) = v8 - v4;
      HIDWORD(result[1].SubSystemTib) = v11 - v5;
    }
  }
  return result;
}
