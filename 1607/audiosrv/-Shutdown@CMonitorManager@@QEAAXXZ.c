/*
 * XREFs of ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18007EB48
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x180052260 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18007B22C (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x18007E578 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18007ED08 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18007EDAC (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::Shutdown(CMonitorManager *this)
{
  CMonitorManager *v1; // rdi
  int v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  CMonitorManager::CaptureMonitor *v5; // rbx
  LPCRITICAL_SECTION v6; // [rsp+28h] [rbp-40h] BYREF
  char v7; // [rsp+30h] [rbp-38h]
  CMonitorManager *v8; // [rsp+70h] [rbp+8h] BYREF
  CMonitorManager::CaptureMonitor *v9; // [rsp+78h] [rbp+10h] BYREF

  v8 = this;
  v1 = _MonitorManager;
  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 16));
  if ( *((_DWORD *)v1 + 14) != 1 )
  {
    v2 = -2147024809;
LABEL_15:
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        v2);
    }
    goto LABEL_19;
  }
  *((_DWORD *)v1 + 14) = 2;
  v3 = *((_QWORD *)v1 + 8);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v3 + 56LL))(v3, v1);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 72));
  while ( *((_QWORD *)v1 + 16) )
  {
    v4 = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
           (__int64 **)v1 + 14,
           &v8);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v9, *v4);
    if ( v8 )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v9;
    CMonitor::StopIfRunning(*((CMonitor **)v9 + 8));
    CMonitorManager::CaptureMonitor::UninitializeSynchronously(v5);
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 72));
  ATL::CCritSecLock::Unlock(&v6);
  CMonitorManager::CleanupMonitorRestartTimer(v1);
  ATL::CCritSecLock::Lock(&v6);
  ATL::CComPtrBase<IPart>::Release((_QWORD *)v1 + 8);
  *((_DWORD *)v1 + 14) = 3;
  if ( v2 < 0 )
    goto LABEL_15;
LABEL_19:
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
}
