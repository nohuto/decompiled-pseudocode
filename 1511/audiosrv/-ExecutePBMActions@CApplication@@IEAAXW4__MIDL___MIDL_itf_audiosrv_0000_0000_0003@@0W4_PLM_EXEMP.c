/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18001C720
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001EAC0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?StartSoundLevelChangeCompletionTimer@CApplication@@IEAAXK@Z @ 0x18001BEF4 (-StartSoundLevelChangeCompletionTimer@CApplication@@IEAAXK@Z.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001C150 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18001CA90 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?SimulateStreamStateChange@CApplication@@IEAAXHPEAH@Z @ 0x180065B38 (-SimulateStreamStateChange@CApplication@@IEAAXHPEAH@Z.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18009F240 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // esi
  TraceLoggingHProvider *v9; // r9
  BOOL v10; // ebx
  unsigned int v11; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  unsigned int v13; // r15d
  _QWORD *v14; // rbx
  int v15; // eax
  BOOL v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r10
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v21; // [rsp+40h] [rbp-38h]
  unsigned int v22; // [rsp+90h] [rbp+18h]

  v22 = a3;
  v8 = a5;
  if ( a5 )
  {
    v9 = &WPP_GLOBAL_Control;
    while ( 1 )
    {
      v10 = 0;
      if ( (v8 & 7) == 1 )
        break;
      if ( (v8 & 7) == 2 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
        *(_DWORD *)(a1 + 228) = a2;
        if ( a2 < *(_DWORD *)(a1 + 232) )
          v10 = *(_DWORD *)(a1 + 176) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
        if ( v10 )
          goto LABEL_14;
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
        if ( *(_DWORD *)(a1 + 224) )
        {
          v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 184);
        }
        else
        {
          *(_DWORD *)(a1 + 224) = 1;
          while ( 1 )
          {
            v11 = *(_DWORD *)(a1 + 228);
            if ( v11 == *(_DWORD *)(a1 + 232) && !*(_DWORD *)(a1 + 516) )
              break;
            *(_DWORD *)(a1 + 232) = v11;
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
            CApplication::SendSoundLevelNotification(a1, v11);
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
            *(_DWORD *)(a1 + 516) = 0;
          }
          *(_DWORD *)(a1 + 224) = 0;
          v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 184);
        }
        goto LABEL_13;
      }
      if ( (v8 & 7) != 3 )
      {
        if ( (v8 & 7) != 4 )
          goto LABEL_15;
        Sleep(0xAu);
        goto LABEL_14;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
      *(_DWORD *)(a1 + 284) = a4;
      if ( a4 == 1 )
        v10 = *(_DWORD *)(a1 + 176) != 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
      if ( !v10 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
        if ( *(_DWORD *)(a1 + 280) )
        {
          v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 240);
        }
        else
        {
          *(_DWORD *)(a1 + 280) = 1;
          while ( *(_DWORD *)(a1 + 284) )
          {
            v13 = *(_DWORD *)(a1 + 284);
            *(_DWORD *)(a1 + 284) = 0;
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
            lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
            v21 = 0;
            ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids, v13);
            }
            v14 = *(_QWORD **)(a1 + 64);
            while ( v14 )
            {
              v17 = v14[2];
              v14 = (_QWORD *)*v14;
              CProcess::NotifyPLM(v17, v13);
            }
            if ( v21 )
            {
              LeaveCriticalSection(lpCriticalSection);
              v21 = 0;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
          }
          *(_DWORD *)(a1 + 280) = 0;
          v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 240);
        }
LABEL_13:
        LeaveCriticalSection(v12);
      }
LABEL_14:
      v9 = &WPP_GLOBAL_Control;
      a3 = v22;
LABEL_15:
      v8 >>= 3;
      if ( !v8 )
        return;
    }
    v15 = *(_DWORD *)(a1 + 120);
    v16 = (v15 == 0) != ((_DWORD)a3 == 0);
    *(_DWORD *)(a1 + 120) = a3;
    if ( v15 == (_DWORD)a3 )
      goto LABEL_15;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v18 = SoundLevelToString((unsigned int)a3);
      WPP_SF_SS(
        *(_QWORD *)(v19 + 16),
        13,
        (unsigned int)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *(_QWORD *)(a1 + 16),
        v18);
      a3 = v22;
    }
    if ( v16 )
    {
      a5 = 0;
      CApplication::SimulateStreamStateChange((CApplication *)a1, a3 != 0, &a5);
      if ( a5 )
        CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(a1 + 116), 3LL);
    }
    CApplication::RecalculateVolume(a1, 3LL, a3, v9);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
    *(_DWORD *)(a1 + 176) = 1;
    CApplication::StartSoundLevelChangeCompletionTimer((CApplication *)a1);
    v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
    goto LABEL_13;
  }
}
