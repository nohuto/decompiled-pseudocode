/*
 * XREFs of xxxCreateCaret @ 0x1C0122D94
 * Callers:
 *     NtUserCreateCaret @ 0x1C0122CF0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     zzzInternalDestroyCaret @ 0x1C0123150 (zzzInternalDestroyCaret.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 *a1, struct HLFONT__ *a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
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
  int *v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
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
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // ecx
  int *v64; // rcx
  int v65; // [rsp+30h] [rbp-38h] BYREF
  __int64 v66; // [rsp+34h] [rbp-34h]
  __int64 v67; // [rsp+3Ch] [rbp-2Ch]
  __int64 v68; // [rsp+44h] [rbp-24h]
  int v69; // [rsp+4Ch] [rbp-1Ch]

  v65 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0;
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(a1[2] + 384) != v8 || (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 256) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 384LL);
  }
  HMAssignmentLock(v8 + 256, a1);
  v10 = *(_DWORD *)(v8 + 264) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 268) = 1;
  *(_DWORD *)(v8 + 264) = v10 | 2;
  *(_DWORD *)(v8 + 304) = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  if ( !a4 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) != 0 )
        goto LABEL_9;
    }
    else if ( !IsDPIDWMSysMet(v12)
           || (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 408)
             ? (v36 = 0)
             : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v33,
                                                            v34,
                                                            v35)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v36) )
    {
LABEL_9:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 408)
          ? (v25 = 0)
          : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v22,
                                                         v23,
                                                         v24)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v25) )
      {
        v37 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v37 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_24;
    }
    v37 = (int *)(gpsi + 2292LL);
LABEL_24:
    a4 = *v37;
  }
  if ( !a3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) != 0 )
        goto LABEL_28;
    }
    else if ( !IsDPIDWMSysMet(v39)
           || (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
             ? (v63 = 0)
             : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v60,
                                                            v61,
                                                            v62)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v63) )
    {
LABEL_28:
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
          ? (v52 = 0)
          : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v49,
                                                         v50,
                                                         v51)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v52) )
      {
        v64 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v64 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_43;
    }
    v64 = (int *)(gpsi + 2288LL);
LABEL_43:
    a3 = *v64;
  }
  *(_QWORD *)(v8 + 288) = a2;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32, (unsigned __int16 *)&v65);
    a4 = HIDWORD(v66);
    a3 = v66;
  }
  *(_QWORD *)(v8 + 296) = 0LL;
  *(_DWORD *)(v8 + 280) = a4;
  *(_DWORD *)(v8 + 284) = a3;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
