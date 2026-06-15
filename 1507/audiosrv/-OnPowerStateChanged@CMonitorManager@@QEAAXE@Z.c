/*
 * XREFs of ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180097464
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003A1E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180004D54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4 (-GetNext@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18009AEDC (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::OnPowerStateChanged(CMonitorManager *this, unsigned __int8 a2)
{
  CMonitorManager *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *Next; // rax
  CMonitor **v7; // rbx
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+40h] [rbp-28h]
  _QWORD *v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v10 = this;
  v3 = _MonitorManager;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Cu,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      a2);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 72));
  v5 = (_QWORD *)*((_QWORD *)v3 + 14);
  v10 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(v4, &v10);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, *Next);
    v7 = (CMonitor **)v11;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Du,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        *(const wchar_t **)(v11 + 72),
        *(_WORD **)(*(_QWORD *)(v11 + 64) + 64LL));
    }
    CMonitor::OnPowerStateChanged(v7[8], a2);
    (*((void (__fastcall **)(CMonitor **))*v7 + 2))(v7);
    v5 = v10;
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
}
