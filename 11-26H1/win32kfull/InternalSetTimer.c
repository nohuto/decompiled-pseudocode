/*
 * XREFs of InternalSetTimer @ 0x140021294
 * Callers:
 *     IncrementCompositedCount @ 0x1400109DC (IncrementCompositedCount.c)
 *     NtUserSetTimer @ 0x140021060 (NtUserSetTimer.c)
 *     _SetTimer @ 0x1400211F0 (_SetTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x14002AE28 (SetDeepDelayableVisRITTimer.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x14019B840 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401D0068 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401D034C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     _SetSystemTimer @ 0x1401DA8CC (_SetSystemTimer.c)
 *     SetRITTimer @ 0x1401F74F0 (SetRITTimer.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     zzzStartFade @ 0x14021AFA8 (zzzStartFade.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402347B4 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x140235D08 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402D938C (MNSetTimerToCloseHierarchy.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14009906C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14009AE70 (-SetDelayableTimer@@YAXKK@Z.c)
 *     GetAppCompatFlags2QuadWord @ 0x1400A8130 (GetAppCompatFlags2QuadWord.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x14011CAC0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x14019C508 (-ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1401A65C8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x1401BCE40 (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  signed __int32 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rsi
  int v17; // ebx
  unsigned int v18; // ebp
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTIMER *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 UserSessionState; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // r15
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // esi
  unsigned int v51; // r15d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // ebp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  bool v75; // bl
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  _QWORD *v81; // rax
  struct tagTIMER *v82[9]; // [rsp+30h] [rbp-48h] BYREF

  v82[0] = 0LL;
  v9 = (signed __int32 *)(W32GetUserSessionState(a1, a2) + 57536);
  if ( *(_DWORD *)(W32GetUserSessionState(v11, v10) + 68428) )
  {
    UserSetLastError(641LL);
    return 0LL;
  }
  v13 = 10;
  if ( a3 >= 0xA )
    v13 = a3;
  if ( v13 > 0x7FFFFFFF )
    v13 = 0x7FFFFFFF;
  v16 = PtiCurrent();
  if ( !v16 || (a6 & 4) != 0 )
  {
    v16 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v15, v14) + 18696);
  }
  else if ( a1 )
  {
    v16 = *(struct tagTHREADINFO **)(a1 + 16);
  }
  v17 = a5;
  if ( a5 == -1 || !a5 && v16 && (GetAppCompatFlags2QuadWord(v16) & 0x800000000LL) != 0 )
    v18 = a6 & 0xFFFFFDFF;
  else
    v18 = a6 | 0x200;
  if ( (unsigned int)FindTimer(a1, a2, v18, 0, v82) )
  {
    v22 = v82[0];
    if ( (*((_DWORD *)v82[0] + 12) & 1) != 0 )
    {
      if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
        DecTimerCountAndClearReadyFlag(v22);
      else
        DecTimerCount(v22);
    }
    if ( *((struct tagTHREADINFO **)v22 + 3) != v16
      && (_InterlockedCompareExchange((volatile signed __int32 *)v16 + 130, 0, 0) & 1) != 0 )
    {
      LODWORD(v82[0]) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 997LL);
    }
    goto LABEL_43;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v16 + 130, 0, 0) & 1) != 0 )
  {
    LODWORD(v82[0]) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 928LL);
    return 0LL;
  }
  LOBYTE(v19) = 16;
  v22 = (struct tagTIMER *)HMAllocObject(v16, 0LL, v19, 144LL);
  result = 0LL;
  if ( v22 )
  {
    *((_QWORD *)v22 + 13) = 0LL;
    if ( a1 )
    {
      v32 = a2;
    }
    else
    {
      v25 = *(_DWORD *)(W32GetUserSessionState(v21, v20) + 62672);
      while ( 1 )
      {
        UserSessionState = W32GetUserSessionState(v24, v23);
        if ( --*(_DWORD *)(UserSessionState + 62672) < 0 )
          *(_DWORD *)(W32GetUserSessionState(v28, v27) + 62672) = 32511;
        v30 = *(unsigned int *)(W32GetUserSessionState(v28, v27) + 62672);
        if ( !_bittestandset(v9 + 11, v30) )
          break;
        if ( *(_DWORD *)(W32GetUserSessionState(v31, v30) + 62672) == v25 )
        {
          UserSetLastError(8LL);
          HMFreeObject(v22);
          return 0LL;
        }
      }
      v32 = *(_DWORD *)(W32GetUserSessionState(v31, v30) + 62672) + 256;
    }
    *((_QWORD *)v22 + 14) = v32;
    v33 = (_QWORD *)((char *)v22 + 72);
    v34 = *(_QWORD *)v9;
    if ( *(signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_70;
    *v33 = v34;
    *((_QWORD *)v22 + 10) = v9;
    *(_QWORD *)(v34 + 8) = v33;
    *(_QWORD *)v9 = v33;
    v35 = (__int64 *)((char *)v22 + 120);
    v36 = (BYTE1(a1) + (unsigned __int8)*((_QWORD *)v22 + 14)) & 0x3F;
    v37 = W32GetUserSessionState(v33, v20) + 16 * (v36 + 3853);
    v38 = *(__int64 ***)(v37 + 8);
    if ( *v38 != (__int64 *)v37 )
      goto LABEL_70;
    *v35 = v37;
    *((_QWORD *)v22 + 16) = v38;
    *v38 = v35;
    *(_QWORD *)(v37 + 8) = v35;
    v17 = a5;
    if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_QWORD *)v22 + 8) = (char *)v22 + 56;
      *((_QWORD *)v22 + 7) = (char *)v22 + 56;
    }
LABEL_43:
    v82[1] = (struct tagTIMER *)a1;
    v82[0] = (struct tagTIMER *)((char *)v22 + 104);
    HMAssignmentLock(v82, 0LL);
    *((_DWORD *)v22 + 10) = v13;
    *((_DWORD *)v22 + 13) = v13;
    *((_QWORD *)v22 + 4) = a4;
    if ( (v18 & 0x200) != 0 )
      *((_DWORD *)v22 + 11) = v17;
    *((_DWORD *)v22 + 34) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_DWORD *)v22 + 12) = v18 | 8;
    v39 = *((_QWORD *)v22 + 3);
    v40 = *((_QWORD *)v16 + 57);
    if ( v39 )
    {
      if ( *(_QWORD *)(v39 + 456) == v40 )
        goto LABEL_49;
      v41 = (_QWORD *)((char *)v22 + 88);
      v80 = *((_QWORD *)v22 + 11);
      if ( *(struct tagTIMER **)(v80 + 8) != (struct tagTIMER *)((char *)v22 + 88)
        || (v81 = (_QWORD *)*((_QWORD *)v22 + 12), (_QWORD *)*v81 != v41) )
      {
LABEL_70:
        __fastfail(3u);
      }
      *v81 = v80;
      *(_QWORD *)(v80 + 8) = v81;
      *((_QWORD *)v22 + 12) = (char *)v22 + 88;
      *v41 = v41;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v16 + 130, 0, 0) & 1) != 0 )
        goto LABEL_49;
      v40 = *((_QWORD *)v16 + 57);
    }
    else
    {
      v41 = (_QWORD *)((char *)v22 + 88);
    }
    v42 = (__int64 *)(v40 + 1096);
    v43 = *v42;
    if ( *(__int64 **)(*v42 + 8) == v42 )
    {
      *v41 = v43;
      v41[1] = v42;
      *(_QWORD *)(v43 + 8) = v41;
      *v42 = (__int64)v41;
LABEL_49:
      *((_QWORD *)v22 + 3) = v16;
      ApplyTimerDelay(v22);
      EtwTraceInternalSetTimer();
      if ( !*(_BYTE *)(W32GetUserSessionState(v45, v44) + 18712) )
      {
        if ( *(_BYTE *)(W32GetUserSessionState(v47, v46) + 62712) )
        {
          *(_BYTE *)(W32GetUserSessionState(v49, v48) + 18713) = 1;
        }
        else
        {
          v50 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
              - *(_DWORD *)(W32GetUserSessionState(v49, v48) + 57576);
          v51 = CoalescableDueTime(v22);
          if ( v50 <= *(_DWORD *)(W32GetUserSessionState(v53, v52) + 62728)
            && v50 <= *(_DWORD *)(W32GetUserSessionState(v55, v54) + 62736) )
          {
            v56 = *((_QWORD *)v22 + 3);
            v57 = *(_QWORD *)(v56 + 456);
            if ( !*(_DWORD *)(v57 + 1028) )
            {
              v58 = v51 + v50;
              if ( v51 + v50 >= v51 )
              {
                *((_DWORD *)v22 + 12) &= ~8u;
                *((_DWORD *)v22 + 13) += v50;
                v60 = *(unsigned int *)(W32GetUserSessionState(v56, v57) + 62728);
                if ( (unsigned int)v60 > *((_DWORD *)v22 + 13)
                  || *(_DWORD *)(W32GetUserSessionState(v60, v59) + 62736) > v58 )
                {
                  v61 = W32GetUserSessionState(v60, v59);
                  v64 = *((_DWORD *)v22 + 13);
                  if ( v64 >= *(_DWORD *)(v61 + 62728) )
                    v64 = *(_DWORD *)(W32GetUserSessionState(v63, v62) + 62728);
                  *(_DWORD *)(W32GetUserSessionState(v63, v62) + 62728) = v64;
                  if ( *(_DWORD *)(W32GetUserSessionState(v66, v65) + 62736) < v58 )
                    v58 = *(_DWORD *)(W32GetUserSessionState(v68, v67) + 62736);
                  *(_DWORD *)(W32GetUserSessionState(v68, v67) + 62736) = v58;
                  v71 = *(_DWORD *)(W32GetUserSessionState(v70, v69) + 62736) - v50;
                  v74 = W32GetUserSessionState(v73, v72);
                  SetDelayableTimer(*(_DWORD *)(v74 + 62728) - v50, v71);
                }
              }
            }
          }
          if ( (*((_DWORD *)v22 + 12) & 8) != 0 )
          {
            v75 = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent();
            *(_BYTE *)(W32GetUserSessionState(v77, v76) + 18712) = v75;
            if ( *(_BYTE *)(W32GetUserSessionState(v79, v78) + 18712) != 1 )
            {
              LODWORD(v82[0]) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1149LL);
            }
          }
        }
      }
      result = *((_QWORD *)v22 + 14);
      if ( !result )
        return 1LL;
      return result;
    }
    goto LABEL_70;
  }
  return result;
}
