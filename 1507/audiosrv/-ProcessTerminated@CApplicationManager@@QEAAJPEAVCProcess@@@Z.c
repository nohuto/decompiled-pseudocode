/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18002D100 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x180002948 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180003810 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800038A0 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180007814 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180007B50 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180011150 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180012330 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180012458 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CCFC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x1800A2A40 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rsi
  struct CApplication *v4; // rdi
  int v5; // ebp
  bool v6; // r8
  int v7; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  CApplicationManager *v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v11 = this;
  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (struct CApplication *)*((_QWORD *)a2 + 28);
  v12 = 0;
  v5 = 0;
  LODWORD(v11) = 0;
  CProcess::CleanupProcessTerminationWatcher((struct _TP_WAIT **)a2, 0);
  *((_DWORD *)a2 + 104) = 2;
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 43), *((_DWORD *)a2 + 42), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 43), *((_DWORD *)a2 + 42), 0, 1.0, (int *)&v11);
    v5 = (int)v11;
  }
  CProcess::SimulateStreamStateChange(a2, 0, &v12);
  if ( v12 || v5 )
    CApplicationManager::UpdateVolumeForAllAppsInSession(v3, *((unsigned int *)a2 + 43), 3LL);
  if ( v4 && (unsigned int)TsSessionIsActiveMediaApplication(v4) )
    CApplicationManager::ReevaluateActiveMediaAppStatusForApplication(v3, v4, v6);
  if ( (*((_BYTE *)a2 + 428) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 116) )
    *((_DWORD *)a2 + 116) = 0;
  if ( (*((_DWORD *)a2 + 107) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 108) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 108) = 0;
  }
  if ( *((_DWORD *)a2 + 109) )
    *((_DWORD *)a2 + 109) = 0;
  *((_DWORD *)a2 + 113) = 0;
  v7 = *((_DWORD *)a2 + 117);
  if ( v7 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 28), -v7);
    *((_DWORD *)a2 + 117) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
