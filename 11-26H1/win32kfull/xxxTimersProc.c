/*
 * XREFs of xxxTimersProc @ 0x140098800
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14011CAC0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x140158FB0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z @ 0x1402A7E4C (--$ManualLock@X@-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxTimersProc(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v21; // rcx
  int v22; // edi
  _QWORD *v23; // rbx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 UserSessionState; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // r8
  _QWORD *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 result; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rbp
  __int64 v50; // rax
  int v51; // edx
  int v52; // eax
  int v53; // ecx
  __int64 v54; // rax
  __int64 *v55; // rcx
  __int64 v56; // rax
  __int64 **v57; // rdx
  __int64 v58; // rbp
  ULONG_PTR *v59; // rax
  ULONG_PTR v60; // rcx
  ULONG_PTR *v61; // rax
  unsigned int v62; // eax
  int v63; // ecx
  unsigned int v64; // eax
  int v65; // eax
  _QWORD *v66; // rcx
  _QWORD *v67; // rbx
  int v68; // ecx
  __int64 v69; // r8
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // eax
  int v73; // ecx
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rdi
  int v77; // edx
  int v78; // r8d
  int v79; // ecx
  bool v80; // zf
  unsigned int v81; // ecx
  unsigned int v82; // eax
  __int64 v83; // rax
  _QWORD *v84; // r8
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v86; // [rsp+38h] [rbp-50h]
  int v87; // [rsp+A8h] [rbp+20h]

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 62712) = 1;
  v4 = 0LL;
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 18712) = 0;
  while ( 1 )
  {
    *(_BYTE *)(W32GetUserSessionState(v6, v5) + 18713) = 0;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v87 = v7;
    v10 = v7 - *(_DWORD *)(W32GetUserSessionState(v9, v8) + 57576);
    v13 = 0x7FFFFFFF;
    v14 = 0x7FFFFFFF;
    *(_DWORD *)(W32GetUserSessionState(v12, v11) + 57576) = v7;
    v17 = W32GetUserSessionState(v16, v15) + 57536;
    v18 = *(_QWORD **)v17;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v19);
    if ( CurrentThreadWin32Thread )
      v21 = *CurrentThreadWin32Thread;
    else
      v21 = 0LL;
    BugCheckParameter3 = *(_QWORD *)(v21 + 448);
    *(_QWORD *)(v21 + 448) = &BugCheckParameter3;
    v86 = 0LL;
    if ( v18 != (_QWORD *)v17 )
    {
      while ( 1 )
      {
        v22 = *((_DWORD *)v18 - 6);
        v23 = v18 - 9;
        if ( (v22 & 0x20) == 0 )
        {
          v24 = *(_DWORD *)(v18 - 3) & 0xC00;
          if ( v24 != 1024 )
          {
            if ( (v22 & 0x1000) == 0 )
            {
              if ( (v22 & 8) != 0 || v24 == 2048 )
              {
                *((_DWORD *)v23 + 12) = v22 & 0xFFFFF7F7;
                LOWORD(v22) = -2049;
              }
              else
              {
                _m_prefetchw((char *)v23 + 52);
                v25 = *((_DWORD *)v23 + 13);
                *((_DWORD *)v23 + 13) = v25 - v10;
                if ( v25 <= v10 )
                {
                  v49 = v86;
                  v86 = v18 - 9;
                  HMLockObject(v18 - 9);
                  if ( v49 )
                    HMUnlockObject(v49);
                  v50 = v23[3];
                  v51 = *((_DWORD *)v23 + 10);
                  *((_DWORD *)v23 + 13) = v51;
                  v52 = *(_DWORD *)(*(_QWORD *)(v50 + 456) + 1020LL);
                  if ( v52 )
                  {
                    v62 = v51 + v52;
                    v63 = 0x7FFFFFFF;
                    if ( v62 < 0x7FFFFFFF )
                      v63 = v62;
                    *((_DWORD *)v23 + 13) = v63;
                  }
                  EtwTraceTimerProc(v18 - 9);
                  v53 = *((_DWORD *)v23 + 12);
                  if ( (v53 & 1) == 0 )
                  {
                    if ( (v53 & 0x10) != 0 )
                    {
                      v53 |= 0x20u;
                      *((_DWORD *)v23 + 12) = v53;
                    }
                    if ( *((_DWORD *)v23 + 34) == *((_DWORD *)v23 + 35) )
                      *((_DWORD *)v23 + 35) = v87;
                    if ( (v53 & 4) != 0 )
                    {
                      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *))v23[4])(0LL, 280LL, v23[14], v18 - 9);
                      *((_DWORD *)v23 + 34) = *((_DWORD *)v23 + 35);
                    }
                    else
                    {
                      v54 = v23[3];
                      *((_DWORD *)v23 + 12) = v53 | 1;
                      v55 = v23 + 7;
                      ++*(_DWORD *)(v54 + 636);
                      v56 = v23[3] + 1344LL;
                      v57 = *(__int64 ***)(v23[3] + 1352LL);
                      if ( *v57 != (__int64 *)v56 )
                        goto LABEL_47;
                      *v55 = v56;
                      v23[8] = v57;
                      *v57 = v55;
                      *(_QWORD *)(v56 + 8) = v55;
                      v58 = v23[3];
                      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v58 + 520), 0, 0) & 1) == 0 )
                      {
                        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v58 + 480) + 8LL), 0x10u);
                        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v58 + 480) + 4LL), 0x10u);
                        W32GetUserSessionState(0LL, v57);
                        if ( (*(_DWORD *)(*(_QWORD *)(v58 + 480) + 16LL) & 0x10) != 0 )
                          KeSetEvent(*(PRKEVENT *)(v58 + 760), 2, 0);
                      }
                      ++*(_DWORD *)(*(_QWORD *)(v23[3] + 456LL) + 1032LL);
                    }
                  }
                }
              }
              v18 = (_QWORD *)*v18;
              if ( (v23[6] & 0x1000) != 0 || (*(_BYTE *)(_HMPheFromObjectWorker(v23) + 25) & 1) != 0 )
              {
                if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
                {
                  if ( (v23[6] & 0x1000) == 0 )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1591LL);
                  if ( (*(_BYTE *)(_HMPheFromObjectWorker(v23) + 25) & 1) == 0 )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1593LL);
                }
              }
              else
              {
                if ( (v22 & 0x800) != 0 )
                  *((_DWORD *)v23 + 12) &= ~0x800u;
                v27 = *((unsigned int *)v23 + 13);
                if ( (unsigned int)v27 < v13 )
                  v13 = *((_DWORD *)v23 + 13);
                if ( (v23[6] & 0x200) != 0 )
                {
                  UserSessionState = W32GetUserSessionState(v26, v27);
                  v30 = *((unsigned int *)v23 + 11);
                  if ( (unsigned int)v30 <= *(_DWORD *)(UserSessionState + 62732) )
                    LODWORD(v30) = *(_DWORD *)(W32GetUserSessionState(v30, v29) + 62732);
                  v31 = (unsigned int)(*((_DWORD *)v23 + 13) + v30);
                  if ( (unsigned int)v31 >= 0x7FFFFFFF )
                  {
                    LODWORD(v27) = 0x7FFFFFFF;
                  }
                  else
                  {
                    v32 = W32GetUserSessionState(v31, v29);
                    v34 = *((unsigned int *)v23 + 11);
                    if ( (unsigned int)v34 <= *(_DWORD *)(v32 + 62732) )
                      LODWORD(v34) = *(_DWORD *)(W32GetUserSessionState(v34, v33) + 62732);
                    LODWORD(v27) = v34 + *((_DWORD *)v23 + 13);
                  }
                  v35 = *(_DWORD *)(*(_QWORD *)(v23[3] + 456LL) + 1024LL);
                  if ( v35 )
                  {
                    v64 = v27 + v35;
                    LODWORD(v27) = 0x7FFFFFFF;
                    if ( v64 < 0x7FFFFFFF )
                      LODWORD(v27) = v64;
                  }
                }
                if ( (unsigned int)v27 < v14 )
                  v14 = v27;
              }
              goto LABEL_27;
            }
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1537LL);
          }
        }
        v18 = (_QWORD *)*v18;
LABEL_27:
        if ( v18 == (_QWORD *)v17 )
        {
          LODWORD(v7) = v87;
          v4 = 0LL;
          break;
        }
      }
    }
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
    if ( !*(_BYTE *)(W32GetUserSessionState(v37, v36) + 18713) )
      break;
    if ( BugCheckParameter3 != -1LL )
    {
      v59 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v6);
      if ( v59 )
        v60 = *v59;
      else
        v60 = 0LL;
      Win32HM_UnlockFromThread<1>(v60, &BugCheckParameter3);
    }
  }
  v38 = *(_QWORD **)(v17 + 16);
  v39 = (_QWORD *)(v17 + 16);
  if ( v38 != (_QWORD *)(v17 + 16) )
  {
    do
    {
      v65 = *((_DWORD *)v38 - 3);
      v66 = v38;
      v38 = (_QWORD *)*v38;
      *((_DWORD *)v66 - 5) += v65;
    }
    while ( v38 != v39 );
    v67 = *(_QWORD **)v17;
    while ( v67 != (_QWORD *)v17 )
    {
      v39 = v67;
      v67 = (_QWORD *)*v67;
      v68 = *((_DWORD *)v39 - 6);
      if ( (v68 & 0x20) == 0 )
      {
        v69 = *(_QWORD *)(*(v39 - 6) + 456LL);
        v70 = *(_DWORD *)(v69 + 1028);
        if ( v70 )
        {
          if ( (v68 & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1680LL);
          }
          else
          {
            v71 = *((_DWORD *)v39 - 5);
            if ( v70 <= 0 )
            {
              if ( v71 <= -v70 )
                *(_DWORD *)(v69 + 1028) = -v71;
            }
            else
            {
              v72 = v71 + v70;
              v73 = 0x7FFFFFFF;
              if ( v72 < 0x7FFFFFFF )
                v73 = v72;
              *((_DWORD *)v39 - 5) = v73;
            }
          }
        }
      }
    }
    v74 = *(_QWORD **)(v17 + 16);
    while ( v74 != (_QWORD *)(v17 + 16) )
    {
      v75 = v74;
      v74 = (_QWORD *)*v74;
      if ( *((int *)v75 - 3) > 0 )
      {
        *((_DWORD *)v75 - 3) = 0;
        if ( (_QWORD *)v74[1] != v75 )
          goto LABEL_47;
        v39 = (_QWORD *)v75[1];
        if ( (_QWORD *)*v39 != v75 )
          goto LABEL_47;
        *v39 = v74;
        v74[1] = v39;
      }
    }
    if ( *(_QWORD *)(v17 + 16) != v17 + 16 )
    {
      v76 = *(_QWORD **)v17;
      Win32HMThreadLockBase<tagTIMER,1,1>::ManualLock<void>(&BugCheckParameter3);
      for ( ; v76 != (_QWORD *)v17; v76 = (_QWORD *)*v76 )
      {
        v77 = *((_DWORD *)v76 - 6);
        if ( (v77 & 0x20) == 0 )
        {
          v78 = *(_DWORD *)(*(_QWORD *)(*(v76 - 6) + 456LL) + 1028LL);
          if ( v78 )
          {
            if ( (v77 & 0x1000) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1745LL);
            }
            else
            {
              v79 = *((_DWORD *)v76 - 5);
              v80 = v78 + v79 == 0;
              v81 = v78 + v79;
              *((_DWORD *)v76 - 5) = v81;
              if ( v80 )
              {
                Win32HM_ExchangeThreadLock<1>((__int64)(v76 - 9), (__int64)&BugCheckParameter3);
                xxxReadyTimer((struct tagTIMER *)(v76 - 9), v7);
                _HMPheFromObjectWorker(v76 - 9);
              }
              else
              {
                if ( v81 < v13 )
                  v13 = v81;
                v82 = CoalescableDueTime((const struct tagTIMER *)(v76 - 9));
                if ( v82 < v14 )
                  v14 = v82;
              }
            }
          }
        }
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
      v4 = 0LL;
    }
    v6 = *(_QWORD **)(v17 + 16);
    if ( v6 != (_QWORD *)(v17 + 16) )
    {
      while ( 1 )
      {
        v83 = *v6;
        v39 = v6;
        v6 = (_QWORD *)v83;
        *((_DWORD *)v39 - 3) = 0;
        if ( *(_QWORD **)(v83 + 8) != v39 )
          break;
        v84 = (_QWORD *)v39[1];
        if ( (_QWORD *)*v84 != v39 )
          break;
        *v84 = v83;
        *(_QWORD *)(v83 + 8) = v84;
        if ( v83 == v17 + 16 )
          goto LABEL_31;
      }
LABEL_47:
      __fastfail(3u);
    }
  }
LABEL_31:
  *(_DWORD *)(W32GetUserSessionState(v6, v39) + 62728) = v13;
  *(_DWORD *)(W32GetUserSessionState(v41, v40) + 62736) = v14;
  v44 = W32GetUserSessionState(v43, v42);
  if ( v13 == v14 )
    KeSetTimer(*(PKTIMER *)(v44 + 57568), (LARGE_INTEGER)(-10000LL * (int)v13), 0LL);
  else
    KeSetCoalescableTimer(*(PKTIMER *)(v44 + 57568), (LARGE_INTEGER)(-10000LL * (int)v13), 0, v14 - v13, 0LL);
  result = W32GetUserSessionState(v46, v45);
  *(_BYTE *)(result + 62712) = 0;
  if ( BugCheckParameter3 != -1LL )
  {
    v61 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v48);
    if ( v61 )
      v4 = *v61;
    return Win32HM_UnlockFromThread<1>(v4, &BugCheckParameter3);
  }
  return result;
}
