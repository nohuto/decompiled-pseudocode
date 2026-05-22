/*
 * XREFs of ??1InputDeliveryServer@@EEAA@XZ @ 0x180068CAC
 * Callers:
 *     ??_GInputDeliveryServer@@EEAAPEAXI@Z @ 0x180068F70 (--_GInputDeliveryServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAA@XZ @ 0x180011D44 (--1-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18006A8AC (--1-$list@U-$pair@$$CBIV-$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@$$CBIV.c)
 *     ??1?$list@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18006A93C (--1-$list@U-$pair@$$CBUtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInput.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall InputDeliveryServer::~InputDeliveryServer(InputDeliveryServer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rdi
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx

  *(_QWORD *)this = &InputDeliveryServer::`vftable'{for `IInputDeliveryServer'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IInputQueueHost,Microsoft::WRL::Details::InterfaceList<IInputServiceProxyOwner,Microsoft::WRL::Details::InterfaceList<IRemoteInputDelivery,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &InputDeliveryServer::`vftable'{for `IInputServiceProxyOwner'};
  *((_QWORD *)this + 3) = &InputDeliveryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IRemoteInputDelivery,Microsoft::WRL::Details::Nil>,1,0>'};
  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v3 = *((_QWORD *)this + 32);
    if ( v3 )
    {
      *((_QWORD *)this + 32) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (char *)*((_QWORD *)this + 52);
  if ( v5 )
  {
    std::_Deallocate(v5, (__int64)(*((_QWORD *)this + 54) - (_QWORD)v5) >> 3, 8uLL);
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
  }
  std::list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::~list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>((char *)this + 400);
  v6 = (char *)*((_QWORD *)this + 44);
  if ( v6 )
  {
    std::_Deallocate(v6, (__int64)(*((_QWORD *)this + 46) - (_QWORD)v6) >> 3, 8uLL);
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
  }
  std::list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::~list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>((char *)this + 336);
  v7 = (char *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    std::_Deallocate(v7, (__int64)(*((_QWORD *)this + 38) - (_QWORD)v7) >> 3, 8uLL);
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
  }
  std::list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::~list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>((char *)this + 272);
  v9 = *((_QWORD *)this + 32);
  if ( v9 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::~KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>(
    (__int64 *)this + 15,
    v8);
  v10 = *((_QWORD *)this + 14);
  if ( v10 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 13);
  if ( v11 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 12);
  if ( v12 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 8);
  if ( v15 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 6);
  if ( v16 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 5);
  if ( v17 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *((_DWORD *)this + 9) = -1073741823;
}
