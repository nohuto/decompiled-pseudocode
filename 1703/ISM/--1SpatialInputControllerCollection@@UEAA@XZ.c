/*
 * XREFs of ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800781E4
 * Callers:
 *     ??_ESpatialInputControllerCollection@@UEAAPEAXI@Z @ 0x1800781A0 (--_ESpatialInputControllerCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800181A8 (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x18007AF0C (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionD.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
void __fastcall SpatialInputControllerCollection::~SpatialInputControllerCollection(
        SpatialInputControllerCollection *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rcx
  char *v12; // r14

  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>((__int64)this + 2944);
  v2 = *((_QWORD *)this + 367);
  if ( v2 )
  {
    *((_QWORD *)this + 367) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 366);
  if ( v3 )
  {
    *((_QWORD *)this + 366) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 365);
  if ( v4 )
  {
    *((_QWORD *)this + 365) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = *((_QWORD *)this + 364);
  if ( v5 )
  {
    *((_QWORD *)this + 364) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 363);
  if ( v6 )
  {
    *((_QWORD *)this + 363) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 362);
  if ( v7 )
  {
    *((_QWORD *)this + 362) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  WindowsDeleteString(*((HSTRING *)this + 361));
  *((_QWORD *)this + 361) = 0LL;
  v8 = *((_QWORD *)this + 360);
  if ( v8 )
  {
    *((_QWORD *)this + 360) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 359);
  if ( v9 )
  {
    *((_QWORD *)this + 359) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
  v10 = *((_QWORD *)this + 353);
  if ( v10 )
  {
    *((_QWORD *)this + 353) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 352);
  if ( v11 )
  {
    *((_QWORD *)this + 352) = 0LL;
    if ( !_InterlockedDecrement(v11 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 32LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v12 = (char *)this + 2800;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Erase(
    (char *)this + 2800,
    *(_QWORD *)(*((_QWORD *)this + 350) + 8LL));
  *(_QWORD *)(*(_QWORD *)v12 + 8LL) = *(_QWORD *)v12;
  **(_QWORD **)v12 = *(_QWORD *)v12;
  *(_QWORD *)(*(_QWORD *)v12 + 16LL) = *(_QWORD *)v12;
  *((_QWORD *)this + 351) = 0LL;
  std::_Deallocate(*((char **)this + 350), 1uLL, 0x38uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 69);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
