/*
 * XREFs of ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x180005B70
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000B4D0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BC00 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000C3B0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000CE00 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
        _QWORD *a1,
        const struct SaDeviceParams **a2,
        struct CEndpointCharacteristics **a3,
        enum _AUDCLNT_SHAREMODE *a4,
        unsigned int *a5,
        struct SaDeviceResourceParams **a6)
{
  CSaDeviceProxy *v10; // rbx
  CSaDeviceProxy *v11; // rax
  CSaDeviceProxy *v12; // rdi
  int v13; // ebp
  int (*v14)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // r14
  void (__fastcall *v15)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rsi
  signed __int64 v16; // rax
  signed __int32 v17; // ecx
  signed __int64 v18; // rtt
  struct IDeviceGraphObjectsStore *v19; // rbx
  void (__fastcall *v20)(struct IDeviceGraphObjectsStore *); // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  CSaDeviceProxy *v23; // [rsp+38h] [rbp-40h]
  CSaDeviceProxy *v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-30h]
  struct IDeviceGraphObjectsStore *v26; // [rsp+80h] [rbp+8h] BYREF

  v25 = -2LL;
  *a1 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v11 = (CSaDeviceProxy *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v24 = v11;
  if ( v11 )
  {
    *((_QWORD *)v11 + 5) = 1LL;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
    *((_QWORD *)v11 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *((_QWORD *)v11 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v11 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v12 = &CSaDeviceProxy::`vftable'{for `IInspectable'};
    *((_QWORD *)v12 + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *((_QWORD *)v12 + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v12 + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 7) = 0LL;
    *((_QWORD *)v12 + 8) = 0LL;
    *((_QWORD *)v12 + 10) = 0LL;
    *((_QWORD *)v12 + 12) = 0LL;
    v10 = v12;
    v23 = v12;
    v24 = 0LL;
    v13 = CSaDeviceProxy::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
    if ( v13 >= 0 )
    {
      *a1 = (char *)v12 + 8;
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v12 + 1) + 8LL))((_QWORD *)v12 + 1);
      v13 = 0;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v10 )
  {
    v26 = 0LL;
    v14 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
    if ( v14 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
      CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        g_DeviceGraphStore,
        **((const unsigned __int16 ***)v10 + 6),
        &v26);
    else
      ((void (__fastcall *)(CDeviceGraphStore *, _QWORD, struct IDeviceGraphObjectsStore **))v14)(
        g_DeviceGraphStore,
        **((_QWORD **)v10 + 6),
        &v26);
    v15 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v26 + 64LL);
    if ( (char *)v15 == (char *)CDeviceGraphObjectsStore::Lock )
      CDeviceGraphObjectsStore::Lock(v26, &lpCriticalSection);
    else
      v15(v26, &lpCriticalSection);
    v16 = *((_QWORD *)v10 + 5);
    while ( v16 >= 0 )
    {
      v17 = v16 - 1;
      v18 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 5, v16 - 1, v16);
      if ( v18 == v16 )
        goto LABEL_14;
    }
    v17 = _InterlockedDecrement((volatile signed __int32 *)(2 * v16 + 16));
LABEL_14:
    if ( !v17 )
    {
      (*(void (__fastcall **)(CSaDeviceProxy *, __int64))(*(_QWORD *)v23 + 48LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    v19 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      v20 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v19 + 16LL);
      if ( (char *)v20 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v19);
      else
        v20(v19);
    }
  }
  return (unsigned int)v13;
}
