/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000B1E0
 * Callers:
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x1800492B0 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x1800492C0 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x1800492D0 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800668DC (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18000AEC0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000C3B0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000CE00 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  const unsigned __int16 **v1; // rax
  const unsigned __int16 *v3; // rdi
  int (*v4)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rsi
  void (__fastcall *v5)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rdi
  signed __int64 v6; // rax
  unsigned __int32 v7; // esi
  volatile signed __int32 *v8; // rdi
  void (__fastcall *v9)(volatile signed __int32 *); // rbp
  CSaDeviceProxy *(__fastcall *v11)(CSaDeviceProxy *, char); // rdi
  signed __int64 v12; // rtt
  struct IDeviceGraphObjectsStore *v13; // [rsp+58h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+18h] BYREF

  v1 = (const unsigned __int16 **)*((_QWORD *)this + 6);
  v13 = 0LL;
  v3 = *v1;
  v4 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v4 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v3, &v13);
  else
    ((void (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))v4)(
      g_DeviceGraphStore,
      v3,
      &v13);
  v5 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v13 + 64LL);
  if ( (char *)v5 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock(v13, &lpCriticalSection);
  else
    v5(v13, &lpCriticalSection);
  v6 = *((_QWORD *)this + 5);
  while ( v6 >= 0 )
  {
    v7 = v6 - 1;
    v12 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v6 - 1, v6);
    if ( v12 == v6 )
      goto LABEL_8;
  }
  v7 = _InterlockedDecrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_8:
  if ( !v7 )
  {
    v11 = *(CSaDeviceProxy *(__fastcall **)(CSaDeviceProxy *, char))(*(_QWORD *)this + 48LL);
    if ( v11 == CSaDeviceProxy::`vector deleting destructor' )
      CSaDeviceProxy::`vector deleting destructor'(this, 1);
    else
      v11(this, 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  v8 = (volatile signed __int32 *)v13;
  if ( v13 )
  {
    v13 = 0LL;
    v9 = *(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 96LL))(v8, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    else
    {
      v9(v8);
    }
  }
  return v7;
}
