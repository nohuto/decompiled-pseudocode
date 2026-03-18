/*
 * XREFs of _GetWindowRect @ 0x1C0245D58
 * Callers:
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetWindowRect(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
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
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ecx
  unsigned int *v59; // rcx

  result = *(_WORD *)(a1 + 66) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 112);
    return result;
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v4 = IsDPIAbsoluteSysMet(0LL);
  v9 = v6 + 1;
  if ( v4 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) != 0 )
      goto LABEL_5;
LABEL_15:
    v32 = (_DWORD *)(gpsi + 2268LL);
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(v6) && (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
       ? v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30)
                                                + 408)
                                    + 8LL)
                        + 244LL)
       : 0 )
    {
      goto LABEL_15;
    }
  }
LABEL_5:
  if ( IsDPIDWMSysMet(0LL)
    && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == (_BYTE)v9
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 408)
      ? (v20 = 0)
      : (v20 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v17,
                                                          v18,
                                                          v19)
                                                      + 408)
                                          + 8LL)
                              + 244LL)),
        v20) )
  {
    v32 = (_DWORD *)(gpsi + 2656LL);
  }
  else
  {
    v32 = (_DWORD *)(gpsi + 1880LL);
  }
LABEL_20:
  *(_DWORD *)(a2 + 8) = *v32;
  if ( (unsigned int)IsDPIAbsoluteSysMet(v9) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0 )
      goto LABEL_22;
  }
  else if ( !IsDPIDWMSysMet(v34)
         || (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v50, v51) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 408)
           ? (v58 = 0)
           : (v58 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v55,
                                                               v56,
                                                               v57)
                                                           + 408)
                                               + 8LL)
                                   + 244LL)),
             !v58) )
  {
LABEL_22:
    if ( IsDPIDWMSysMet(v9)
      && (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) == (_BYTE)v9
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 408)
        ? (v47 = 0)
        : (v47 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v44,
                                                            v45,
                                                            v46)
                                                        + 408)
                                            + 8LL)
                                + 244LL)),
          v47) )
    {
      v59 = (unsigned int *)(gpsi + 2660LL);
    }
    else
    {
      v59 = (unsigned int *)(gpsi + 1884LL);
    }
    goto LABEL_37;
  }
  v59 = (unsigned int *)(gpsi + 2272LL);
LABEL_37:
  result = *v59;
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
