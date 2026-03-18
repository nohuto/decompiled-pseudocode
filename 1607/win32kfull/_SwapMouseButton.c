/*
 * XREFs of _SwapMouseButton @ 0x1C01E0580
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SwapMouseButton(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 CurrentProcessWin32Process; // rdi
  int v4; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ecx
  _DWORD *v48; // rcx

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v4 = 0;
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 648), 0x12u) )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL);
    return 0LL;
  }
  v8 = IsDPIAbsoluteSysMet(0x17uLL);
  if ( v8 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v9, v10) & 0xF) != 0 )
      goto LABEL_7;
LABEL_17:
    v24 = (unsigned int *)(gpsi + 2360LL);
    goto LABEL_22;
  }
  if ( IsDPIDWMSysMet(v7)
    && (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_17;
  }
LABEL_7:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v14, v11, v12, v13) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 408)
      ? (v15 = 0)
      : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v15) )
  {
    v24 = (unsigned int *)(gpsi + 2748LL);
  }
  else
  {
    v24 = (unsigned int *)(gpsi + 1972LL);
  }
LABEL_22:
  v25 = *v24;
  if ( v8 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v24, v11, v12, v13) & 0xF) != 0 )
      goto LABEL_24;
  }
  else if ( !IsDPIDWMSysMet(0x17uLL)
         || (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 408)
           ? (v47 = 0)
           : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v44,
                                                          v45,
                                                          v46)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v47) )
  {
LABEL_24:
    if ( IsDPIDWMSysMet(0x17uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 408)
        ? (v36 = 0)
        : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v33,
                                                       v34,
                                                       v35)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v36) )
    {
      v48 = (_DWORD *)(gpsi + 2748LL);
    }
    else
    {
      v48 = (_DWORD *)(gpsi + 1972LL);
    }
    goto LABEL_39;
  }
  v48 = (_DWORD *)(gpsi + 2360LL);
LABEL_39:
  *v48 = v2;
  if ( v2 != v25 )
  {
    LOBYTE(v4) = gbMouseButtonsRecentlySwapped == 0;
    gbMouseButtonsRecentlySwapped = v4;
  }
  return v25;
}
