/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014404
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x1800211F0 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000B288 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x18000D724 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000EBFC (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000EC90 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000FAE0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18000FD70 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012510 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180013F9C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180014DA4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18001CA98 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001CD34 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001D14C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D1F0 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // r15
  struct CApplication *v5; // rdi
  int v6; // esi
  const GUID *v7; // r8
  _DWORD *v8; // rcx
  int v9; // edx
  int v10; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v13; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v14; // [rsp+48h] [rbp-18h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  CApplicationManager *v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  v14 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&v14);
  v5 = (struct CApplication *)*((_QWORD *)a2 + 28);
  v17 = 0;
  v6 = 0;
  LODWORD(v16) = 0;
  CProcess::CleanupProcessTerminationWatcher(a2, 0);
  *((_DWORD *)a2 + 104) = 2;
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 43), *((_DWORD *)a2 + 42), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 43), *((_DWORD *)a2 + 42), 0, 1.0, (int *)&v16);
    v6 = (int)v16;
  }
  CProcess::SimulateStreamStateChange(a2, 0, &v17);
  if ( v17 || v6 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 43), 3u);
  if ( v5 && (unsigned int)TsSessionIsActiveMediaApplication(v5) )
  {
    lpCriticalSection = v4;
    v13 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v5) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 1);
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( (*((_BYTE *)a2 + 440) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  v8 = (_DWORD *)((char *)a2 + 472);
  if ( *((_DWORD *)a2 + 118) )
  {
    v9 = 0;
    do
    {
      *v8 = 0;
      ++v9;
      ++v8;
    }
    while ( (unsigned __int64)v9 < 2 );
  }
  if ( (*((_DWORD *)a2 + 110) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 111) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 111) = 0;
  }
  if ( *((_DWORD *)a2 + 112) )
    *((_DWORD *)a2 + 112) = 0;
  *((_DWORD *)a2 + 116) = 0;
  v10 = *((_DWORD *)a2 + 120);
  if ( v10 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 28), -v10);
    *((_DWORD *)a2 + 120) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1, v7);
  CApplicationManager::Unregister(v3, a2);
  if ( v15 )
    LeaveCriticalSection(v14);
  return 0LL;
}
