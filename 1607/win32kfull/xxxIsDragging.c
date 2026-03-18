/*
 * XREFs of xxxIsDragging @ 0x1C0150E5C
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C02119F0 (NtUserDragDetect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00BB9A4 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxSleepThread @ 0x1C01CB4C8 (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
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
  int *v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int *v31; // rdx
  int v32; // eax
  int v33; // esi
  int v34; // ecx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // ecx
  int v68; // [rsp+38h] [rbp-29h] BYREF
  __int64 v69; // [rsp+40h] [rbp-21h] BYREF
  __int64 v70; // [rsp+48h] [rbp-19h]
  _QWORD v71[6]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v72[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v71, 0, sizeof(v71));
  if ( (GetKeyState(1u, v3, v4, v5) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture((__int64 *)a1);
  v69 = a2;
  v70 = a2;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) == 0 )
    {
LABEL_28:
      v18 = (int *)(gpsi + 2544LL);
      goto LABEL_6;
    }
  }
  else if ( IsDPIDWMSysMet(v7)
         && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_28;
  }
  if ( IsDPIDWMSysMet(0x45uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
      ? (v53 = 0)
      : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v53) )
  {
    v18 = (int *)(gpsi + 2932LL);
  }
  else
  {
    v18 = (int *)(gpsi + 2156LL);
  }
LABEL_6:
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x44uLL) )
  {
    if ( IsDPIDWMSysMet(v20)
      && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
                               + 8LL)
                   + 244LL) & 1 )
    {
      goto LABEL_42;
    }
LABEL_8:
    if ( IsDPIDWMSysMet(0x44uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
        ? (v67 = 0)
        : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v64,
                                                       v65,
                                                       v66)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v67) )
    {
      v31 = (int *)(gpsi + 2928LL);
    }
    else
    {
      v31 = (int *)(gpsi + 2152LL);
    }
    goto LABEL_10;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) != 0 )
    goto LABEL_8;
LABEL_42:
  v31 = (int *)(gpsi + 2540LL);
LABEL_10:
  v32 = *v31;
  v33 = 1;
  v34 = *v18;
  v35 = 0;
  LODWORD(v69) = v69 - *v31;
  LODWORD(v70) = v32 + v70;
  v36 = *(_QWORD *)(gptiCurrent + 368LL);
  HIDWORD(v69) -= v34;
  HIDWORD(v70) += v34;
  v72[0] = v36;
  *(_QWORD *)(gptiCurrent + 368LL) = v72;
  v72[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage((__int64)v71, 0LL, 0x200u, 0x20Eu, 1u, 0)
           || (unsigned int)xxxInternalGetMessage((__int64)v71, 0LL, 0x23u, 0x23u, 1u, 0)
           || (unsigned int)xxxInternalGetMessage((__int64)v71, 0LL, 0x100u, 0x109u, 1u, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 || LODWORD(v71[1]) == 514 )
          goto LABEL_15;
        if ( LODWORD(v71[1]) == 35 )
        {
          xxxCallHook(2u, 0LL, 0LL, 5u);
          goto LABEL_16;
        }
        if ( LODWORD(v71[1]) != 256 )
        {
          if ( LODWORD(v71[1]) != 512 || PtInRect(&v69, *(_QWORD *)((char *)&v71[4] + 4)) )
            goto LABEL_16;
          v35 = 1;
LABEL_15:
          v33 = 0;
          goto LABEL_16;
        }
        if ( v71[2] == 27LL )
          goto LABEL_17;
LABEL_16:
        if ( !v33 )
          goto LABEL_17;
      }
      if ( gfShellFrameHangResilient && *(_QWORD *)(gptiCurrent + 1248LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL) )
        goto LABEL_56;
    }
    v68 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v68) && !v68 );
LABEL_56:
  v35 = 1;
LABEL_17:
  v38 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v38 + 72) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v38, v37);
  return v35;
}
