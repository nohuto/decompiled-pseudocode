/*
 * XREFs of xxxIsDragging @ 0x1C01239CC
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C0218EB0 (NtUserDragDetect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxSetCapture @ 0x1C00F8EC0 (xxxSetCapture.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxSleepThread @ 0x1C01D1818 (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int *v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int *v10; // rdx
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v26; // ecx
  int v27; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h]
  _OWORD v30[3]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v31[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v30, 0, sizeof(v30));
  if ( (GetKeyState(1u) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture((__int64 *)a1);
  v28 = a2;
  v29 = a2;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) == 0 )
    {
LABEL_30:
      v6 = (int *)(gpsi + 2544LL);
      goto LABEL_6;
    }
  }
  else if ( IsDPIDWMSysMet(v3)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_30;
  }
  if ( IsDPIDWMSysMet(0x45uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v22 = 0)
      : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v22) )
  {
    v6 = (int *)(gpsi + 2932LL);
  }
  else
  {
    v6 = (int *)(gpsi + 2156LL);
  }
LABEL_6:
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x44uLL) )
  {
    if ( IsDPIDWMSysMet(v7)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
    {
      goto LABEL_46;
    }
LABEL_8:
    if ( IsDPIDWMSysMet(0x44uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v26 = 0)
        : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v26) )
    {
      v10 = (int *)(gpsi + 2928LL);
    }
    else
    {
      v10 = (int *)(gpsi + 2152LL);
    }
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0 )
  {
    goto LABEL_8;
  }
LABEL_46:
  v10 = (int *)(gpsi + 2540LL);
LABEL_10:
  v11 = *v10;
  v12 = 1;
  v13 = *v6;
  v14 = 0;
  LODWORD(v28) = v28 - *v10;
  LODWORD(v29) = v11 + v29;
  v15 = *(_QWORD *)(gptiCurrent + 376LL);
  HIDWORD(v28) -= v13;
  HIDWORD(v29) += v13;
  v31[0] = v15;
  *(_QWORD *)(gptiCurrent + 376LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage(v30, 0LL, 0x200u, 0x20Eu, 1u, 0)
           || (unsigned int)xxxInternalGetMessage(v30, 0LL, 0x23u, 0x23u, 1u, 0)
           || (unsigned int)xxxInternalGetMessage(v30, 0LL, 0x100u, 0x109u, 1u, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) != a1 || DWORD2(v30[0]) == 514 )
          goto LABEL_15;
        if ( DWORD2(v30[0]) == 35 )
        {
          xxxCallHook(2, 0, 0LL, 5u);
          goto LABEL_16;
        }
        if ( DWORD2(v30[0]) != 256 )
        {
          if ( DWORD2(v30[0]) != 512 || PtInRect(&v28, *(unsigned __int64 *)((char *)&v30[2] + 4)) )
            goto LABEL_16;
          v14 = 1;
LABEL_15:
          v12 = 0;
          goto LABEL_16;
        }
        if ( *(_QWORD *)&v30[1] == 27LL )
          goto LABEL_17;
LABEL_16:
        if ( !v12 )
          goto LABEL_17;
      }
      if ( gfShellFrameHangResilient && *(_QWORD *)(gptiCurrent + 1232LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL) )
        goto LABEL_60;
    }
    v27 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v27) && !v27 );
LABEL_60:
  v14 = 1;
LABEL_17:
  v17 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(v17 + 64) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v17, v16);
  return v14;
}
