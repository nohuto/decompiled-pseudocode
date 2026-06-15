/*
 * XREFs of ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000CEA0
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x1800163F0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     WPP_SF_SSd @ 0x180005404 (WPP_SF_SSd.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000F7D0 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000F90C (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18000FD70 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180013F9C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180014870 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ReviveProcessesPendingTermination(CApplication *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF

  v5 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0;
  v10 = 1;
  CApplicationManager::GetApplicationPBMStatus(
    g_ApplicationManager,
    this,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v9,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v8,
    (enum _PLM_EXEMPTION *)&v10);
  v2 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)(v3 + 416) == 1 )
    {
      *(_DWORD *)(v3 + 416) = 0;
      if ( v8 )
      {
        v9 = 0;
        CProcess::SimulateStreamStateChange((CProcess *)v3, v8 != 0, &v9);
        if ( v9 )
          CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(v3 + 172), 3LL);
      }
      CProcess::RecalculateVolume(v3, 3LL);
      if ( (*(_BYTE *)(v3 + 440) & 1) != 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v4) = *(_DWORD *)(v3 + 168);
          WPP_SF_SSd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x35u,
            &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
            L"SoundLevelChanged",
            *(const wchar_t **)(v3 + 184),
            v4,
            v5);
        }
        CProcess::SendPBMNotification(v3, 0LL);
      }
      CProcess::NotifyPLM(v3, v10);
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
