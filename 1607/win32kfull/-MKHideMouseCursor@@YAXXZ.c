/*
 * XREFs of ?MKHideMouseCursor@@YAXXZ @ 0x1C0093234
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0092870 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01E45C4 (-TurnOffMouseKeys@@YAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
void MKHideMouseCursor(void)
{
  __int64 v0; // rdx
  unsigned __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
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
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  _DWORD *v53; // rcx

  if ( (gdwPUDFlags & 0x1000) != 0 )
  {
    gdwPUDFlags &= ~0x1000u;
    gdwGTERMFlags &= ~1u;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v1, v0, v2, v3) & 0xF) != 0 )
        goto LABEL_4;
    }
    else if ( !IsDPIDWMSysMet(v1)
           || (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 408)
             ? (v25 = 0)
             : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v22,
                                                            v23,
                                                            v24)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v25) )
    {
LABEL_4:
      if ( IsDPIDWMSysMet(0x13uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v5, v4, v6, v7) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 408)
          ? (v14 = 0)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v11,
                                                         v12,
                                                         v13)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v14) )
      {
        v26 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v26 = (_DWORD *)(gpsi + 1956LL);
      }
LABEL_19:
      *v26 = 0;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2BuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != 0 )
          goto LABEL_21;
      }
      else if ( !IsDPIDWMSysMet(v28)
             || (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
               ? (v52 = 0)
               : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v49,
                                                              v50,
                                                              v51)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v52) )
      {
LABEL_21:
        if ( IsDPIDWMSysMet(0x2BuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
            ? (v41 = 0)
            : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v38,
                                                           v39,
                                                           v40)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v41) )
        {
          v53 = (_DWORD *)(gpsi + 2828LL);
        }
        else
        {
          v53 = (_DWORD *)(gpsi + 2052LL);
        }
        goto LABEL_36;
      }
      v53 = (_DWORD *)(gpsi + 2440LL);
LABEL_36:
      *v53 = 0;
      SetGlobalCursorLevel(-1);
      return;
    }
    v26 = (_DWORD *)(gpsi + 2344LL);
    goto LABEL_19;
  }
}
