/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40
 * Callers:
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180003910 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E7FC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18009FBE8 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x18009FE30 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800A02C8 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800A0498 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A4320 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180004998 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18001C0B8 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18001C268 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18001C6A0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180029104 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18002A328 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180033BA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18009F240 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18009F60C (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // r15d
  int v7; // r14d
  int v8; // r12d
  unsigned int v9; // r13d
  BOOL v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  BOOL v13; // esi
  __int64 v14; // rcx
  struct _TP_TIMER *v15; // r12
  void (__fastcall *v16)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // r15
  __int64 *Next; // rax
  __int64 *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  bool v22; // r8
  int v23; // eax
  int HasDuckedStream; // eax
  const wchar_t *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // r10
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-29h] BYREF
  char v35; // [rsp+58h] [rbp-21h]
  __int64 v36; // [rsp+60h] [rbp-19h]
  LPCRITICAL_SECTION v37; // [rsp+68h] [rbp-11h] BYREF
  char v38; // [rsp+70h] [rbp-9h]
  LPCRITICAL_SECTION v39; // [rsp+78h] [rbp-1h] BYREF
  char v40; // [rsp+80h] [rbp+7h]
  int v41; // [rsp+E0h] [rbp+67h]
  _QWORD *v42; // [rsp+E8h] [rbp+6Fh] BYREF
  int v43; // [rsp+F0h] [rbp+77h]
  struct _FILETIME v44; // [rsp+F8h] [rbp+7Fh] BYREF

  v36 = -2LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v39 = (LPCRITICAL_SECTION)((char *)this + 24);
  v40 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v39);
  v37 = v5;
  v38 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v37);
  lpCriticalSection = v5;
  v35 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = 2;
  v41 = 2;
  v7 = 0;
  if ( *((_DWORD *)a2 + 120) )
  {
    v8 = *((_DWORD *)a2 + 121);
LABEL_3:
    v43 = v8;
    goto LABEL_4;
  }
  if ( *((_DWORD *)a2 + 28) )
  {
    v8 = 2;
    v43 = 2;
  }
  else
  {
    v20 = (int)CApplication::Category((__int64)a2);
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    {
      v8 = 2;
      v43 = 2;
      v7 = 0;
    }
    else
    {
      if ( dword_1800C4CA0[v20] )
      {
        HasDuckedStream = CApplication::HasDuckedStream(a2, v21, v22);
        v8 = 2;
        if ( HasDuckedStream )
          v8 = 1;
        v7 = 0;
        goto LABEL_3;
      }
      v7 = 0;
      v8 = 0;
      v43 = 0;
    }
  }
LABEL_4:
  if ( v35 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v35 = 0;
  }
  if ( *((_DWORD *)a2 + 118) )
    v9 = *((_DWORD *)a2 + 119);
  else
    v9 = v8;
  lpCriticalSection = v5;
  v35 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)a2 + 122) )
  {
    v6 = *((_DWORD *)a2 + 123);
LABEL_10:
    v41 = v6;
    goto LABEL_11;
  }
  if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
    v23 = CApplication::Category((__int64)a2);
    if ( v23 && (!v8 || !dword_1800C4CA0[v23]) )
      v6 = 1;
    goto LABEL_10;
  }
LABEL_11:
  if ( v35 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v35 = 0;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v25 = L"(override)";
    SoundLevelToString(v9);
    if ( !*((_DWORD *)a2 + 120) )
      v25 = L" ";
    v26 = SoundLevelToString((unsigned int)v8);
    WPP_SF_SSSSSSS(*(_QWORD *)(v27 + 16), v28, v29, *((_QWORD *)a2 + 2), v26, (__int64)v25, v28, v29, v30, v31);
  }
  if ( v38 )
  {
    LeaveCriticalSection(v37);
    v38 = 0;
  }
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = 0;
      if ( (a3 & 7) != 1 )
        break;
      v11 = *((_DWORD *)a2 + 30);
      v12 = v11 != v9;
      v13 = (v11 == 0) != (v9 == 0);
      *((_DWORD *)a2 + 30) = v9;
      if ( v11 != v9 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v32 = SoundLevelToString(v9);
          WPP_SF_SS(
            *(_QWORD *)(v33 + 16),
            13,
            (unsigned int)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
            *((_QWORD *)a2 + 2),
            v32);
        }
        if ( v13 )
        {
          LODWORD(v42) = 0;
          lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 8);
          if ( lpCriticalSection )
          {
            do
            {
              Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                       v12,
                       (_QWORD **)&lpCriticalSection);
              v12 = *Next;
              if ( !*(_DWORD *)(*Next + 416) )
              {
                CProcess::SimulateStreamStateChange((CProcess *)v12, v9 != 0, (int *)&v42);
                v7 |= (unsigned int)v42;
              }
            }
            while ( lpCriticalSection );
            if ( v7 )
              CApplicationManager::UpdateVolumeForAllAppsInSession(
                g_ApplicationManager,
                *((unsigned int *)a2 + 29),
                3LL);
          }
        }
        v37 = (LPCRITICAL_SECTION)((char *)a2 + 24);
        v38 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v37);
        v42 = (_QWORD *)*((_QWORD *)a2 + 8);
        while ( v42 )
        {
          v19 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v14, &v42);
          v14 = *v19;
          if ( !*(_DWORD *)(*v19 + 416) )
            CProcess::RecalculateVolume(v14, 3LL);
        }
        if ( v38 )
        {
          LeaveCriticalSection(v37);
          v38 = 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 128));
        *((_DWORD *)a2 + 44) = 1;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids);
        }
        v44 = (struct _FILETIME)-4400000LL;
        v15 = (struct _TP_TIMER *)*((_QWORD *)a2 + 21);
        v16 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
        if ( v16 == CAudioThreadPool::SetTimer )
          CAudioThreadPool::SetTimer(ThreadPool, v15, &v44, 0, 0);
        else
          v16(ThreadPool, v15, &v44, 0, 0);
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 128));
        v6 = v41;
LABEL_39:
        v7 = 0;
      }
LABEL_40:
      a3 >>= 3;
      v8 = v43;
      if ( !a3 )
        goto LABEL_41;
    }
    if ( (a3 & 7) == 2 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 184));
      *((_DWORD *)a2 + 57) = v8;
      if ( v8 < *((_DWORD *)a2 + 58) )
        v10 = *((_DWORD *)a2 + 44) != 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 184));
      if ( !v10 )
        CApplication::ProcessPendingSoundLevelNotification(a2);
    }
    else
    {
      if ( (a3 & 7) != 3 )
      {
        if ( (a3 & 7) == 4 )
          Sleep(0xAu);
        goto LABEL_40;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)a2 + 6);
      *((_DWORD *)a2 + 71) = v6;
      if ( v6 == 1 )
        v10 = *((_DWORD *)a2 + 44) != 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 6);
      if ( !v10 )
        CApplication::ProcessPendingPLMExemptionChange((struct _RTL_CRITICAL_SECTION *)a2);
    }
    goto LABEL_39;
  }
LABEL_41:
  if ( !v43 && !v9 )
  {
    if ( v6 == 1 )
    {
      *(_QWORD *)((char *)a2 + 468) = 0LL;
      *(_QWORD *)((char *)a2 + 476) = 0LL;
      *(_QWORD *)((char *)a2 + 484) = 0LL;
      *((_DWORD *)a2 + 123) = 1;
      *((_DWORD *)a2 + 117) = 1;
      *((_QWORD *)a2 + 59) = 1LL;
      *((_QWORD *)a2 + 60) = 1LL;
      *((_DWORD *)a2 + 122) = 1;
      *((_DWORD *)a2 + 123) = 1;
    }
    else if ( *((_DWORD *)a2 + 117) != 6 )
    {
      *((_DWORD *)a2 + 117) = 6;
      *((_QWORD *)a2 + 59) = 1LL;
      *((_QWORD *)a2 + 60) = 1LL;
    }
  }
  if ( v40 )
  {
    LeaveCriticalSection(v39);
    v40 = 0;
  }
  return 0LL;
}
