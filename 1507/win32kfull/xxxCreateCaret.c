/*
 * XREFs of xxxCreateCaret @ 0x1C0077AD0
 * Callers:
 *     NtUserCreateCaret @ 0x1C0077A30 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C0077F14 (zzzInternalDestroyCaret.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 *a1, HSURF a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  int *v18; // rcx
  __int64 v19; // rcx
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
  v8 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(a1[2] + 392) != v8 || (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 248) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 392LL);
  }
  HMAssignmentLock(v8 + 248, a1);
  v10 = *(_DWORD *)(v8 + 256) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 260) = 1;
  *(_DWORD *)(v8 + 256) = v10 | 2;
  *(_DWORD *)(v8 + 296) = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  if ( !a4 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
      {
        goto LABEL_10;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v11)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v17 = 0)
             : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v17) )
    {
LABEL_10:
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v14 = 0)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v14) )
      {
        v18 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v18 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_26;
    }
    v18 = (int *)(gpsi + 2292LL);
LABEL_26:
    a4 = *v18;
  }
  if ( !a3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
      {
        goto LABEL_31;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v19)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v25 = 0)
             : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v25) )
    {
LABEL_31:
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v22) )
      {
        v26 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v26 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_47;
    }
    v26 = (int *)(gpsi + 2288LL);
LABEL_47:
    a3 = *v26;
  }
  *(_QWORD *)(v8 + 280) = a2;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32, (unsigned __int16 *)&v27);
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
