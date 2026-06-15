/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18007C714
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18007DE80 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18005072C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x18007E5EC (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, const unsigned __int16 *a2)
{
  struct IUnknown *v4; // rbx
  __int64 v5; // rcx
  char v6; // bp
  _QWORD *v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rdi
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-40h] BYREF
  char v11; // [rsp+30h] [rbp-38h]
  _QWORD *v12; // [rsp+70h] [rbp+8h] BYREF
  struct IUnknown *v13; // [rsp+80h] [rbp+18h] BYREF
  struct IUnknown *v14; // [rsp+88h] [rbp+20h] BYREF

  do
  {
    v4 = 0LL;
    v13 = 0LL;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
    v6 = 0;
    v7 = (_QWORD *)*((_QWORD *)this + 14);
    v12 = v7;
    while ( v7 )
    {
      Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, &v12);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v14, *Next);
      v9 = v14;
      if ( !_wcsicoll((const wchar_t *)v14[9].lpVtbl, a2) || !_wcsicoll((const wchar_t *)v9[10].lpVtbl, a2) )
      {
        ATL::AtlComPtrAssign(&v13, v9);
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
        v4 = v13;
        if ( v13 )
        {
          CMonitorManager::RemoveMonitor(this, (const struct CMonitorManager::CaptureMonitor *const)v13);
          v6 = 1;
        }
        break;
      }
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      v7 = v12;
    }
    if ( v11 )
      ATL::CCritSecLock::Unlock(&v10);
    if ( v4 )
      ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  }
  while ( v6 );
}
