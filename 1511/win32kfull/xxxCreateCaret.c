/*
 * XREFs of xxxCreateCaret @ 0x1C00C6E54
 * Callers:
 *     NtUserCreateCaret @ 0x1C00C6DB0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     zzzInternalDestroyCaret @ 0x1C00CA2FC (zzzInternalDestroyCaret.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 *a1, HBRUSH a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  int *v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  int *v26; // rcx
  int v27; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+34h] [rbp-34h]
  __int64 v29; // [rsp+3Ch] [rbp-2Ch]
  __int64 v30; // [rsp+44h] [rbp-24h]
  int v31; // [rsp+4Ch] [rbp-1Ch]

  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(a1[2] + 384) != v8 )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 248) )
    zzzInternalDestroyCaret();
  HMAssignmentLock(v8 + 248, a1);
  v9 = *(_DWORD *)(v8 + 256) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 260) = 1;
  *(_DWORD *)(v8 + 256) = v9 | 2;
  *(_DWORD *)(v8 + 296) = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  if ( !a4 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
      {
        goto LABEL_16;
      }
    }
    else if ( !IsDPIDWMSysMet(v11)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v17 = 0)
             : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v17) )
    {
LABEL_16:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v14 = 0)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v14) )
      {
        v18 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v18 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_32;
    }
    v18 = (int *)(gpsi + 2292LL);
LABEL_32:
    a4 = *v18;
  }
  if ( !a3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
      {
        goto LABEL_36;
      }
    }
    else if ( !IsDPIDWMSysMet(v19)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v25 = 0)
             : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v25) )
    {
LABEL_36:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v22) )
      {
        v26 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v26 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_52;
    }
    v26 = (int *)(gpsi + 2288LL);
LABEL_52:
    a3 = *v26;
  }
  *(_QWORD *)(v8 + 280) = a2;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (unsigned __int16 *)&v27);
    a4 = HIDWORD(v28);
    a3 = v28;
  }
  *(_QWORD *)(v8 + 288) = 0LL;
  *(_DWORD *)(v8 + 272) = a4;
  *(_DWORD *)(v8 + 276) = a3;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
