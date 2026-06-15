/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012CCC
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18001E150 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000AE10 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x18000CECC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000E448 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000EC6C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000F1B0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18000F43C (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800128D4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180013768 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18001A9F0 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001ABB4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001B190 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001B22C (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // r15
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct CApplication *v5; // rsi
  int v6; // r14d
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int i; // ecx
  int v11; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v15; // [rsp+48h] [rbp-18h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  CApplicationManager *v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF

  v17 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  v15 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v16 = 0;
  ATL::CCritSecLock::Lock(&v15);
  v5 = (struct CApplication *)*((_QWORD *)a2 + 28);
  v18 = 0;
  v6 = 0;
  LODWORD(v17) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CProcess::CleanupProcessTerminationWatcher(a2, 0);
  *((_DWORD *)a2 + 104) = 2;
  v7 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 43), *((_DWORD *)a2 + 42), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 43), *((_DWORD *)a2 + 42), 0, 1.0, (int *)&v17);
    v6 = (int)v17;
  }
  CProcess::SimulateStreamStateChange(a2, 0, &v18);
  if ( v18 || v6 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 43), 3u);
  if ( v5 && (unsigned int)TsSessionIsActiveMediaApplication(v5) )
  {
    lpCriticalSection = v4;
    v14 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v5) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 1);
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( (*((_BYTE *)a2 + 440) & 1) != 0 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
    v14 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    *((_DWORD *)a2 + 120) = 0;
    *((_DWORD *)a2 + 110) &= ~1u;
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
  }
  v9 = (_DWORD *)((char *)a2 + 472);
  if ( *((_DWORD *)a2 + 118) )
  {
    for ( i = 0; i < 2; ++i )
      *v9++ = 0;
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
  v11 = *((_DWORD *)a2 + 121);
  if ( v11 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 28), -v11);
    *((_DWORD *)a2 + 121) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v16 )
    LeaveCriticalSection(v15);
  return 0LL;
}
