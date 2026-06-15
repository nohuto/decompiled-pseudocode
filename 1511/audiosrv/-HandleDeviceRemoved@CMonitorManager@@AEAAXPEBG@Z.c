/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800937E8
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180095140 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180093480 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800958EC (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, const unsigned __int16 *a2)
{
  struct IUnknown *v4; // rbx
  __int64 v5; // rcx
  char v6; // r14
  _QWORD *v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rdi
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-50h] BYREF
  char v11; // [rsp+30h] [rbp-48h]
  _QWORD *v12; // [rsp+80h] [rbp+8h] BYREF
  struct IUnknown *v13; // [rsp+90h] [rbp+18h] BYREF
  struct IUnknown *v14; // [rsp+98h] [rbp+20h] BYREF

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
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               v5,
               &v12);
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
