/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01DD09C
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     MiPConvertLogicalRect @ 0x1C01C8020 (MiPConvertLogicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01DC320 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  INT v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
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
  int v31; // ecx
  INT *v32; // rcx
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
  INT *v59; // rcx
  _DWORD v61[4]; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v5) = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF;
  if ( (_BYTE)v5 != 2 )
  {
    ExpandedMonitorSpace(v61);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) != 0 )
        goto LABEL_4;
    }
    else if ( !IsDPIDWMSysMet(v7)
           || (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
             ? (v31 = 0)
             : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v28,
                                                            v29,
                                                            v30)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v31) )
    {
LABEL_4:
      if ( IsDPIDWMSysMet(0x4EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 408)
          ? (v20 = 0)
          : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v17,
                                                         v18,
                                                         v19)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v20) )
      {
        v32 = (INT *)(gpsi + 2968LL);
      }
      else
      {
        v32 = (INT *)(gpsi + 2192LL);
      }
LABEL_19:
      *(_DWORD *)(a1 + 8) = EngMulDiv(*(_DWORD *)(a1 + 8), *v32, v61[2] - v61[0]);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0 )
          goto LABEL_21;
      }
      else if ( !IsDPIDWMSysMet(v34)
             || (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v50, v51) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 408)
               ? (v58 = 0)
               : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v55,
                                                              v56,
                                                              v57)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v58) )
      {
LABEL_21:
        if ( IsDPIDWMSysMet(0x4FuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 408)
            ? (v47 = 0)
            : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v44,
                                                           v45,
                                                           v46)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v47) )
        {
          v59 = (INT *)(gpsi + 2972LL);
        }
        else
        {
          v59 = (INT *)(gpsi + 2196LL);
        }
        goto LABEL_36;
      }
      v59 = (INT *)(gpsi + 2584LL);
LABEL_36:
      v5 = EngMulDiv(*(_DWORD *)(a1 + 12), *v59, v61[3] - v61[1]);
      *(_DWORD *)(a1 + 12) = v5;
      return v5;
    }
    v32 = (INT *)(gpsi + 2580LL);
    goto LABEL_19;
  }
  return v5;
}
