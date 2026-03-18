/*
 * XREFs of InitMice @ 0x1C0132B94
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitMice()
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
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 result; // rax
  _DWORD *v39; // rcx
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
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ecx

  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v1, v0, v2, v3) & 0xF) == 0 )
    {
LABEL_21:
      v12 = (_DWORD *)(gpsi + 2344LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v1)
         && (W32GetCurrentThreadDpiAwarenessContext(v5, v4, v6, v7) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_21;
  }
  if ( IsDPIDWMSysMet(0x13uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
      ? (v53 = 0)
      : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v53) )
  {
    v12 = (_DWORD *)(gpsi + 2732LL);
  }
  else
  {
    v12 = (_DWORD *)(gpsi + 1956LL);
  }
LABEL_5:
  *v12 = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2BuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 0 )
    {
LABEL_35:
      v25 = (_DWORD *)(gpsi + 2440LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v14)
         && (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_35;
  }
  if ( IsDPIDWMSysMet(0x2BuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
      ? (v67 = 0)
      : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v67) )
  {
    v25 = (_DWORD *)(gpsi + 2828LL);
  }
  else
  {
    v25 = (_DWORD *)(gpsi + 2052LL);
  }
LABEL_9:
  *v25 = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x4BuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == 0 )
    {
LABEL_49:
      result = gpsi;
      v39 = (_DWORD *)(gpsi + 2568LL);
      goto LABEL_13;
    }
  }
  else if ( IsDPIDWMSysMet(v27)
         && (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_49;
  }
  if ( IsDPIDWMSysMet(0x4BuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
      ? (v81 = 0)
      : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v81) )
  {
    result = gpsi;
    v39 = (_DWORD *)(gpsi + 2956LL);
  }
  else
  {
    result = gpsi;
    v39 = (_DWORD *)(gpsi + 2180LL);
  }
LABEL_13:
  *v39 = 0;
  return result;
}
