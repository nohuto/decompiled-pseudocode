/*
 * XREFs of ??_GCMonitorManager@@IEAAPEAXI@Z @ 0x18007B068
 * Callers:
 *     ?Release@CMonitorManager@@UEAAKXZ @ 0x18007E420 (-Release@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800333F0 (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x18007AB0C (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 */

CMonitorManager *__fastcall CMonitorManager::`scalar deleting destructor'(CMonitorManager *this)
{
  __int64 v2; // rcx

  *((_DWORD *)this + 14) = 4;
  *(_QWORD *)this = &CMonitorManager::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll((__int64 *)this + 25);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll((__int64)this + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  operator delete(this);
  return this;
}
