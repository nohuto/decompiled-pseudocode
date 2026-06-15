/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10
 * Callers:
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180003EC0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x1800044A0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E6C0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 * Callees:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180002CC0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x180003788 (-GrantExemptionForBCMStartupLatency@@YAHXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180004998 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180004BB8 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004C2C (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004D74 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180004E8C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?StartSoundLevelChangeCompletionTimer@CApplication@@IEAAXK@Z @ 0x18001BEF4 (-StartSoundLevelChangeCompletionTimer@CApplication@@IEAAXK@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001BF8C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001C150 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18001C6A0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180029104 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18002A328 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18009C778 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009CBF0 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18009F240 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18009F60C (WPP_SF_SSSSSSS.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800A0B00 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct CApplication *v2; // r13
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  bool v6; // r8
  int v7; // r15d
  int v8; // r14d
  _QWORD *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  int v13; // ecx
  unsigned int v14; // r14d
  BOOL v15; // edi
  signed int v16; // eax
  unsigned int v17; // edi
  struct _RTL_CRITICAL_SECTION *v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  int v23; // edi
  int v24; // edi
  __int64 v25; // rcx
  int v26; // ebx
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  struct TSSession *v29; // rbx
  _QWORD *v30; // rdx
  struct _RTL_CRITICAL_SECTION *v31; // rdi
  TraceLoggingHProvider v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  BOOL v35; // edi
  int v36; // r12d
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // edi
  _QWORD *v40; // rax
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rdx
  bool v45; // r8
  __int64 v46; // rdx
  bool v47; // r8
  const wchar_t *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  bool v51; // r8
  const wchar_t *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r10
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r11
  __int64 v59; // rax
  __int64 v60; // r10
  __int64 *Next; // rax
  __int64 *v62; // rax
  __int64 v63; // rdx
  bool v64; // r8
  LPCRITICAL_SECTION v65; // [rsp+50h] [rbp-B0h] BYREF
  char v66; // [rsp+58h] [rbp-A8h]
  _QWORD *v67; // [rsp+60h] [rbp-A0h] BYREF
  int v68; // [rsp+68h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v69; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION v70; // [rsp+78h] [rbp-88h] BYREF
  char v71; // [rsp+80h] [rbp-80h]
  LPCRITICAL_SECTION v72; // [rsp+88h] [rbp-78h] BYREF
  char v73; // [rsp+90h] [rbp-70h]
  LPCRITICAL_SECTION v74; // [rsp+98h] [rbp-68h] BYREF
  char v75; // [rsp+A0h] [rbp-60h]
  _QWORD *v76; // [rsp+A8h] [rbp-58h]
  LPCRITICAL_SECTION v77; // [rsp+B0h] [rbp-50h] BYREF
  char v78; // [rsp+B8h] [rbp-48h]
  LPCRITICAL_SECTION v79; // [rsp+C0h] [rbp-40h] BYREF
  char v80; // [rsp+C8h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+D0h] [rbp-30h] BYREF
  char v82; // [rsp+D8h] [rbp-28h]
  LPCRITICAL_SECTION v83; // [rsp+E0h] [rbp-20h] BYREF
  char v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  int v86; // [rsp+150h] [rbp+50h]
  struct CApplication *v87; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v88; // [rsp+160h] [rbp+60h]
  _QWORD *v89; // [rsp+168h] [rbp+68h] BYREF

  v87 = a2;
  v85 = -2LL;
  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v69 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v83 = (LPCRITICAL_SECTION)((char *)this + 24);
  v84 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v83);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v48 = L"INTERACTIVE";
    if ( !*((_DWORD *)v2 + 28) )
      v48 = L"NOT_INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49,
      (unsigned int)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
      *((_QWORD *)v2 + 2),
      (__int64)v48);
  }
  if ( *((_DWORD *)v2 + 28) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(v2) )
      CApplication::CleanupBCMStartupLatencyGracePeriod(v2, v5, v6);
    *(_QWORD *)((char *)v2 + 468) = 0LL;
    *(_QWORD *)((char *)v2 + 476) = 0LL;
    *(_QWORD *)((char *)v2 + 484) = 0LL;
    v7 = 1;
    *((_DWORD *)v2 + 123) = 1;
    v8 = *((_DWORD *)v2 + 29);
    v68 = v8;
    v65 = v4;
    v66 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v65);
    v9 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = v9[2];
        v9 = (_QWORD *)*v9;
        v76 = v9;
        if ( *(_DWORD *)(v10 + 116) != v8 )
          goto LABEL_46;
        v70 = v4;
        v71 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v70);
        v77 = v4;
        v78 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v77);
        lpCriticalSection = v4;
        v82 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        if ( *(_DWORD *)(v10 + 480) )
        {
          v11 = *(_DWORD *)(v10 + 484);
        }
        else if ( *(_DWORD *)(v10 + 112) )
        {
          v11 = 2;
        }
        else
        {
          v49 = (int)CApplication::Category(v10);
          if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v10) )
          {
            v11 = 2;
          }
          else
          {
            if ( !dword_1800C4CA0[v49] )
            {
              v11 = 0;
              v88 = 0;
              v4 = v69;
              goto LABEL_12;
            }
            v11 = 2 - ((unsigned int)CApplication::HasDuckedStream((CApplication *)v10, v50, v51) != 0);
          }
          v4 = v69;
        }
        v88 = v11;
LABEL_12:
        if ( v82 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v82 = 0;
        }
        if ( *(_DWORD *)(v10 + 472) )
          v12 = *(_DWORD *)(v10 + 476);
        else
          v12 = v11;
        v72 = v4;
        v73 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v72);
        if ( *(_DWORD *)(v10 + 488) )
        {
          v13 = *(_DWORD *)(v10 + 492);
        }
        else if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v10) )
        {
          v13 = 2;
        }
        else
        {
          v38 = CApplication::Category(v10);
          if ( v38 )
          {
            if ( v11 && dword_1800C4CA0[v38] )
              v13 = 2;
            else
              v13 = 1;
          }
          else
          {
            v13 = 2;
          }
        }
        v86 = v13;
        if ( v73 )
        {
          LeaveCriticalSection(v72);
          v73 = 0;
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v52 = L"(override)";
          if ( !*(_DWORD *)(v10 + 488) )
            v52 = L" ";
          SoundLevelToString(v12);
          v53 = SoundLevelToString(v11);
          WPP_SF_SSSSSSS(*(_QWORD *)(v54 + 16), v55, v56, *(_QWORD *)(v10 + 16), v53, v55, v56, v57, v58, (__int64)v52);
        }
        if ( v78 )
        {
          LeaveCriticalSection(v77);
          v78 = 0;
        }
        v14 = 209;
        do
        {
          v15 = 0;
          switch ( v14 & 7 )
          {
            case 1u:
              v33 = *(_DWORD *)(v10 + 120);
              v34 = v33 != v12;
              v35 = (v33 == 0) != (v12 == 0);
              *(_DWORD *)(v10 + 120) = v12;
              if ( v33 != v12 )
              {
                if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  v59 = SoundLevelToString(v12);
                  WPP_SF_SS(
                    *(_QWORD *)(v60 + 16),
                    13,
                    (unsigned int)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
                    *(_QWORD *)(v10 + 16),
                    v59);
                }
                if ( v35 )
                {
                  LODWORD(v89) = 0;
                  v36 = 0;
                  v67 = *(_QWORD **)(v10 + 64);
                  if ( v67 )
                  {
                    do
                    {
                      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v34, &v67);
                      v34 = *Next;
                      if ( !*(_DWORD *)(*Next + 416) )
                      {
                        CProcess::SimulateStreamStateChange((CProcess *)v34, v12 != 0, (int *)&v89);
                        v36 |= (unsigned int)v89;
                      }
                    }
                    while ( v67 );
                    if ( v36 )
                      CApplicationManager::UpdateVolumeForAllAppsInSession(
                        g_ApplicationManager,
                        *(unsigned int *)(v10 + 116),
                        3LL);
                  }
                }
                v74 = (LPCRITICAL_SECTION)(v10 + 24);
                v75 = 0;
                ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v74);
                v89 = *(_QWORD **)(v10 + 64);
                while ( v89 )
                {
                  v62 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v37, &v89);
                  v37 = *v62;
                  if ( !*(_DWORD *)(*v62 + 416) )
                    CProcess::RecalculateVolume(v37, 3LL);
                }
                if ( v75 )
                {
                  LeaveCriticalSection(v74);
                  v75 = 0;
                }
                EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 128));
                *(_DWORD *)(v10 + 176) = 1;
                CApplication::StartSoundLevelChangeCompletionTimer((CApplication *)v10);
                v18 = (struct _RTL_CRITICAL_SECTION *)(v10 + 128);
                goto LABEL_36;
              }
              break;
            case 2u:
              EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 184));
              v16 = v88;
              *(_DWORD *)(v10 + 228) = v88;
              if ( v16 < *(_DWORD *)(v10 + 232) )
                v15 = *(_DWORD *)(v10 + 176) != 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 184));
              if ( !v15 )
              {
                EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 184));
                if ( *(_DWORD *)(v10 + 224) )
                {
                  v18 = (struct _RTL_CRITICAL_SECTION *)(v10 + 184);
                }
                else
                {
                  *(_DWORD *)(v10 + 224) = 1;
                  while ( 1 )
                  {
                    v17 = *(_DWORD *)(v10 + 228);
                    if ( v17 == *(_DWORD *)(v10 + 232) && !*(_DWORD *)(v10 + 516) )
                      break;
                    *(_DWORD *)(v10 + 232) = v17;
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 184));
                    CApplication::SendSoundLevelNotification(v10, v17);
                    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 184));
                    *(_DWORD *)(v10 + 516) = 0;
                  }
                  *(_DWORD *)(v10 + 224) = 0;
                  v18 = (struct _RTL_CRITICAL_SECTION *)(v10 + 184);
                }
LABEL_36:
                LeaveCriticalSection(v18);
              }
              break;
            case 3u:
              EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 240));
              *(_DWORD *)(v10 + 284) = v86;
              if ( v86 == 1 )
                v15 = *(_DWORD *)(v10 + 176) != 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 240));
              if ( !v15 )
              {
                EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 240));
                if ( *(_DWORD *)(v10 + 280) )
                {
                  v18 = (struct _RTL_CRITICAL_SECTION *)(v10 + 240);
                }
                else
                {
                  *(_DWORD *)(v10 + 280) = 1;
                  if ( *(_DWORD *)(v10 + 284) )
                  {
                    v31 = (struct _RTL_CRITICAL_SECTION *)(v10 + 24);
                    do
                    {
                      LODWORD(v89) = *(_DWORD *)(v10 + 284);
                      *(_DWORD *)(v10 + 284) = 0;
                      LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 240));
                      v79 = v31;
                      v80 = 0;
                      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v79);
                      v32 = WPP_GLOBAL_Control;
                      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_D(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          16LL,
                          &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
                          (unsigned int)v89);
                      }
                      v67 = *(_QWORD **)(v10 + 64);
                      if ( v67 )
                      {
                        v39 = (unsigned int)v89;
                        do
                        {
                          v40 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v32, &v67);
                          CProcess::NotifyPLM(*v40, v39);
                        }
                        while ( v67 );
                        v31 = (struct _RTL_CRITICAL_SECTION *)(v10 + 24);
                      }
                      if ( v80 )
                      {
                        LeaveCriticalSection(v79);
                        v80 = 0;
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 240));
                    }
                    while ( *(_DWORD *)(v10 + 284) );
                    v7 = 1;
                  }
                  *(_DWORD *)(v10 + 280) = 0;
                  v18 = (struct _RTL_CRITICAL_SECTION *)(v10 + 240);
                }
                goto LABEL_36;
              }
              break;
            case 4u:
              Sleep(0xAu);
              break;
          }
          v14 >>= 3;
        }
        while ( v14 );
        if ( !v88 && !v12 )
        {
          if ( v86 == 1 )
          {
            *(_QWORD *)(v10 + 468) = 0LL;
            *(_QWORD *)(v10 + 476) = 0LL;
            *(_QWORD *)(v10 + 484) = 0LL;
            *(_DWORD *)(v10 + 492) = 1;
            *(_DWORD *)(v10 + 468) = 1;
            *(_DWORD *)(v10 + 488) = 1;
            *(_DWORD *)(v10 + 492) = 1;
            goto LABEL_42;
          }
          if ( *(_DWORD *)(v10 + 468) != 6 )
          {
            *(_DWORD *)(v10 + 468) = 6;
LABEL_42:
            *(_QWORD *)(v10 + 480) = 1LL;
            *(_QWORD *)(v10 + 472) = 1LL;
          }
        }
        if ( v71 )
        {
          LeaveCriticalSection(v70);
          v71 = 0;
        }
        v8 = v68;
        v9 = v76;
        v4 = v69;
LABEL_46:
        if ( !v9 )
        {
          v2 = v87;
          break;
        }
      }
    }
    if ( v66 )
      LeaveCriticalSection(v65);
  }
  else
  {
    v7 = 1;
    if ( dword_1800C4CA0[(int)CApplication::Category((__int64)v2)] )
    {
      if ( !dword_1800C4CA0[(int)CApplication::RawCategory(v2)] && *((_DWORD *)v2 + 30) )
        CApplication::RestrictAudioPlaybackToPrimaryCategories(v2, v63, v64);
    }
    else if ( (unsigned int)CApplication::IsBackgroundAudioCapable(v2) )
    {
      if ( !(unsigned int)CApplication::HasBackgroundAudioTask(v2)
        && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v2, v44, v45)
        && (unsigned int)GrantExemptionForBCMStartupLatency() )
      {
        CApplication::BeginBCMStartupLatencyGracePeriod(v2, v46, v47);
      }
    }
    else if ( *((_DWORD *)v2 + 117) != 1 )
    {
      *((_DWORD *)v2 + 117) = 1;
      *((_QWORD *)v2 + 59) = 1LL;
      *((_QWORD *)v2 + 60) = 1LL;
      *((_DWORD *)v2 + 122) = 1;
      *((_DWORD *)v2 + 123) = 1;
    }
    CApplicationManager::ApplyPBMPolicy(this, v2, 0xD1u);
  }
  v70 = v4;
  v71 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v70);
  v19 = *((_DWORD *)v2 + 29);
  v65 = (LPCRITICAL_SECTION)((char *)v2 + 24);
  v66 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v65);
  v21 = 0;
  v87 = (struct CApplication *)*((_QWORD *)v2 + 8);
  if ( v87 )
  {
    while ( 1 )
    {
      v41 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v20, (_QWORD **)&v87);
      v20 = *v41;
      if ( !*(_DWORD *)(*v41 + 416) )
      {
        if ( *(_DWORD *)(v20 + 464) )
          break;
      }
      if ( !v87 )
        goto LABEL_51;
    }
    v21 = 1;
  }
LABEL_51:
  if ( v66 )
    LeaveCriticalSection(v65);
  if ( v21 && *((_DWORD *)v2 + 28) )
    goto LABEL_175;
  v65 = (LPCRITICAL_SECTION)((char *)v2 + 24);
  v66 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v65);
  v23 = 0;
  v87 = (struct CApplication *)*((_QWORD *)v2 + 8);
  if ( v87 )
  {
    while ( 1 )
    {
      v42 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v22, (_QWORD **)&v87);
      v22 = *v42;
      if ( !*(_DWORD *)(*v42 + 416) )
      {
        if ( *(_DWORD *)(v22 + 468) )
          break;
      }
      if ( !v87 )
        goto LABEL_55;
    }
    v23 = 1;
  }
LABEL_55:
  if ( v66 )
    LeaveCriticalSection(v65);
  if ( v23 && (unsigned int)CApplication::IsBackgroundAudioCapable(v2) )
LABEL_175:
    v24 = 1;
  else
    v24 = 0;
  v65 = (LPCRITICAL_SECTION)((char *)v2 + 24);
  v66 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v65);
  v26 = 0;
  v87 = (struct CApplication *)*((_QWORD *)v2 + 8);
  if ( v87 )
  {
    while ( 1 )
    {
      v43 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v25, (_QWORD **)&v87);
      v25 = *v43;
      if ( !*(_DWORD *)(*v43 + 416) )
      {
        if ( *(_DWORD *)(v25 + 452) )
          break;
      }
      if ( !v87 )
        goto LABEL_60;
    }
    v26 = 1;
  }
LABEL_60:
  if ( v66 )
    LeaveCriticalSection(v65);
  if ( !v26 )
    v7 = 0;
  if ( !v24 || v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v27 = qword_1800E68A0;
    while ( 1 )
    {
      v28 = v27;
      if ( !v27 )
        break;
      v27 = (_QWORD *)*v27;
      v29 = (struct TSSession *)v28[2];
      if ( v19 == *(_DWORD *)v29 )
      {
        v30 = (_QWORD *)*((_QWORD *)v29 + 13);
        if ( v30 )
        {
          while ( (struct CApplication *)v30[2] != v2 )
          {
            v30 = (_QWORD *)*v30;
            if ( !v30 )
              goto LABEL_69;
          }
          ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt((char *)v29 + 104, v30);
          TsSessionSendAppManagerNotification(v29);
        }
        break;
      }
    }
LABEL_69:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  else
  {
    TsSessionIdAddActiveMediaApp(v19, v2);
  }
  if ( v71 )
    LeaveCriticalSection(v70);
  if ( v84 )
    LeaveCriticalSection(v83);
}
