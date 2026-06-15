/*
 * XREFs of ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x18007DA74
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800303F0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18005072C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SS @ 0x1800615EC (WPP_SF_SS.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180081194 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::OnPowerStateChanged(CMonitorManager *this, unsigned __int8 a2)
{
  CMonitorManager *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *Next; // rax
  CMonitor **v7; // rbx
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  _QWORD *v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = this;
  v3 = _MonitorManager;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, a2);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 72));
  v5 = (_QWORD *)*((_QWORD *)v3 + 14);
  v10 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &v10);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, *Next);
    v7 = (CMonitor **)v11;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        *(const wchar_t **)(v11 + 72),
        *(const wchar_t **)(*(_QWORD *)(v11 + 64) + 64LL));
    }
    CMonitor::OnPowerStateChanged(v7[8], a2);
    (*((void (__fastcall **)(CMonitor **))*v7 + 2))(v7);
    v5 = v10;
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
}
