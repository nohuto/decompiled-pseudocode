/*
 * XREFs of xxxTimersProc_Old @ 0x14009A98C
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14009AE70 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14011CAC0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x140158FB0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ @ 0x1401BFDE8 (--1-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z @ 0x1402A7E4C (--$ManualLock@X@-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z.c)
 */

__int64 __fastcall xxxTimersProc_Old(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  _QWORD *v20; // rdi
  int v21; // esi
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rdi
  int v31; // ecx
  __int64 v32; // r8
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rsi
  _QWORD *v40; // rdi
  int v41; // r8d
  int v42; // edx
  int v43; // ecx
  bool v44; // zf
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 result; // rax
  __int64 v55; // rcx
  struct tagTHREADINFO *v56; // rax
  unsigned int v57; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+28h] [rbp-20h] BYREF
  int v59; // [rsp+A8h] [rbp+60h]

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 62712) = 1;
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 18712) = 0;
  while ( 2 )
  {
    *(_BYTE *)(W32GetUserSessionState(v5, v4) + 18713) = 0;
    v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v57 = v6;
    v9 = v6 - *(_DWORD *)(W32GetUserSessionState(v8, v7) + 57576);
    v12 = 0x7FFFFFFF;
    v13 = 0x7FFFFFFF;
    v59 = 0x7FFFFFFF;
    *(_DWORD *)(W32GetUserSessionState(v11, v10) + 57576) = v6;
    v16 = W32GetUserSessionState(v15, v14) + 57536;
    v17 = *(_QWORD **)v16;
    v19 = PtiCurrent(v18);
    BugCheckParameter3[0] = *((_QWORD *)v19 + 56);
    *((_QWORD *)v19 + 56) = BugCheckParameter3;
    BugCheckParameter3[1] = 0LL;
    if ( v17 == (_QWORD *)v16 )
      goto LABEL_28;
    do
    {
      v20 = v17 - 9;
      Win32HM_ExchangeThreadLock<1>((__int64)(v17 - 9), (__int64)BugCheckParameter3);
      v21 = *((_DWORD *)v17 - 6);
      if ( (v21 & 0x20) != 0 )
        goto LABEL_25;
      v22 = *(_DWORD *)(v17 - 3) & 0xC00;
      if ( v22 == 1024 )
        goto LABEL_25;
      if ( (v21 & 0x1000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1537LL);
LABEL_25:
        v17 = (_QWORD *)*v17;
        continue;
      }
      _m_prefetchw((char *)v20 + 52);
      if ( (v21 & 8) != 0 || v22 == 2048 )
      {
        *((_DWORD *)v20 + 12) = v21 & 0xFFFFF7F7;
        LOWORD(v21) = -2049;
      }
      else
      {
        v23 = *((_DWORD *)v20 + 13);
        *((_DWORD *)v20 + 13) = v23 - v9;
        if ( v23 <= v9 )
          xxxReadyTimer((struct tagTIMER *)(v17 - 9), v57);
      }
      v17 = (_QWORD *)*v17;
      if ( (v20[6] & 0x1000) != 0 || (*(_BYTE *)(_HMPheFromObjectWorker(v20) + 25) & 1) != 0 )
      {
        if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( (v20[6] & 0x1000) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1591LL);
          if ( (*(_BYTE *)(_HMPheFromObjectWorker(v20) + 25) & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1593LL);
        }
      }
      else
      {
        if ( (v21 & 0x800) != 0 )
          *((_DWORD *)v20 + 12) &= ~0x800u;
        if ( *((_DWORD *)v20 + 13) < v12 )
          v12 = *((_DWORD *)v20 + 13);
        v24 = CoalescableDueTime((const struct tagTIMER *)v20);
        if ( v24 < v13 )
          v13 = v24;
      }
    }
    while ( v17 != (_QWORD *)v16 );
    v59 = v13;
LABEL_28:
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
    if ( *(_BYTE *)(W32GetUserSessionState(v26, v25) + 18713) )
    {
      Win32HMThreadLockBase<tagTIMER,1,1>::~Win32HMThreadLockBase<tagTIMER,1,1>((ULONG_PTR)BugCheckParameter3);
      continue;
    }
    break;
  }
  v28 = *(_QWORD **)(v16 + 16);
  if ( v28 != (_QWORD *)(v16 + 16) )
  {
    do
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
      *((_DWORD *)v29 - 5) += *((_DWORD *)v29 - 3);
    }
    while ( v28 != (_QWORD *)(v16 + 16) );
    v30 = *(_QWORD **)v16;
    if ( *(_QWORD *)v16 != v16 )
    {
      do
      {
        v28 = v30;
        v30 = (_QWORD *)*v30;
        v31 = *((_DWORD *)v28 - 6);
        if ( (v31 & 0x20) == 0 )
        {
          v32 = *(_QWORD *)(*(v28 - 6) + 456LL);
          v33 = *(_DWORD *)(v32 + 1028);
          if ( v33 )
          {
            if ( (v31 & 0x1000) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1680LL);
            }
            else
            {
              v34 = *((_DWORD *)v28 - 5);
              if ( v33 <= 0 )
              {
                if ( v34 <= -v33 )
                  *(_DWORD *)(v32 + 1028) = -v34;
              }
              else
              {
                v35 = v34 + v33;
                v36 = 0x7FFFFFFF;
                if ( v35 < 0x7FFFFFFF )
                  v36 = v35;
                *((_DWORD *)v28 - 5) = v36;
              }
            }
          }
        }
      }
      while ( v30 != (_QWORD *)v16 );
      v13 = v59;
    }
    v37 = *(_QWORD **)(v16 + 16);
    while ( v37 != (_QWORD *)(v16 + 16) )
    {
      v38 = v37;
      v37 = (_QWORD *)*v37;
      if ( *((int *)v38 - 3) > 0 )
      {
        *((_DWORD *)v38 - 3) = 0;
        if ( (_QWORD *)v37[1] != v38 )
          goto LABEL_73;
        v28 = (_QWORD *)v38[1];
        if ( (_QWORD *)*v28 != v38 )
          goto LABEL_73;
        *v28 = v37;
        v37[1] = v28;
      }
    }
    if ( *(_QWORD *)(v16 + 16) != v16 + 16 )
    {
      v39 = *(_QWORD **)v16;
      Win32HMThreadLockBase<tagTIMER,1,1>::ManualLock<void>(BugCheckParameter3);
      for ( ; v39 != (_QWORD *)v16; v39 = (_QWORD *)*v39 )
      {
        v40 = v39 - 9;
        Win32HM_ExchangeThreadLock<1>((__int64)(v39 - 9), (__int64)BugCheckParameter3);
        v41 = *((_DWORD *)v39 - 6);
        if ( (v41 & 0x20) == 0 )
        {
          v42 = *(_DWORD *)(*(_QWORD *)(v40[3] + 456LL) + 1028LL);
          if ( v42 )
          {
            if ( (v41 & 0x1000) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1745LL);
            }
            else
            {
              v43 = *((_DWORD *)v40 + 13);
              v44 = v42 + v43 == 0;
              v45 = v42 + v43;
              *((_DWORD *)v40 + 13) = v45;
              if ( v44 )
              {
                xxxReadyTimer((struct tagTIMER *)(v39 - 9), v57);
                _HMPheFromObjectWorker(v39 - 9);
              }
              else
              {
                if ( v45 < v12 )
                  v12 = v45;
                v46 = CoalescableDueTime((const struct tagTIMER *)(v39 - 9));
                if ( v46 < v13 )
                  v13 = v46;
              }
            }
          }
        }
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
    }
    v27 = *(_QWORD **)(v16 + 16);
    if ( v27 != (_QWORD *)(v16 + 16) )
    {
      v47 = v16 + 16;
      while ( 1 )
      {
        v48 = *v27;
        v28 = v27;
        v27 = (_QWORD *)v48;
        *((_DWORD *)v28 - 3) = 0;
        if ( *(_QWORD **)(v48 + 8) != v28 )
          break;
        v49 = (_QWORD *)v28[1];
        if ( (_QWORD *)*v49 != v28 )
          break;
        *v49 = v48;
        *(_QWORD *)(v48 + 8) = v49;
        if ( v48 == v47 )
          goto LABEL_70;
      }
LABEL_73:
      __fastfail(3u);
    }
  }
LABEL_70:
  *(_DWORD *)(W32GetUserSessionState(v27, v28) + 62728) = v12;
  *(_DWORD *)(W32GetUserSessionState(v51, v50) + 62736) = v13;
  SetDelayableTimer(v12, v13);
  result = W32GetUserSessionState(v53, v52);
  *(_BYTE *)(result + 62712) = 0;
  if ( BugCheckParameter3[0] != -1LL )
  {
    v56 = PtiCurrent(v55);
    return Win32HM_UnlockFromThread<1>((ULONG_PTR)v56, BugCheckParameter3);
  }
  return result;
}
