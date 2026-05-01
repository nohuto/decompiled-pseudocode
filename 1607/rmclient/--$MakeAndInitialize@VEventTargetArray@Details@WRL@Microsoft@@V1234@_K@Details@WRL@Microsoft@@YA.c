/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002F30
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002260 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800029B0 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 * Callees:
 *     ??0?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180003160 (--0-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000317C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180004440 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??3@YAXPEAX@Z @ 0x180005B08 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006598 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800082E4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180009238 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@De.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned int v2; // esi
  _QWORD *v3; // rbx
  _QWORD *v6; // rax
  volatile int *v7; // rdx
  _QWORD *v8; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  void (*v10)(void); // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  bool v13; // cf
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // rax
  _QWORD *v16; // r15
  char *v17; // rbp
  unsigned __int64 i; // rdi
  unsigned __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rcx

  v2 = 0;
  v3 = 0LL;
  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( !v6 )
    goto LABEL_22;
  v9 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v6 + 3) = 1;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( v9 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v10();
  }
  v8[2] = 0LL;
  *v8 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v8[3] = 0LL;
  v8[4] = 0LL;
  v3 = v8;
  v11 = *a2;
  v12 = 8 * v11;
  if ( !is_mul_ok(v11, 8uLL) )
    v12 = -1LL;
  v13 = __CFADD__(v12, 8LL);
  v14 = v12 + 8;
  if ( v13 )
    v14 = -1LL;
  v15 = (unsigned __int64 *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  if ( v15 )
  {
    v16 = v15 + 1;
    *v15 = v11;
    v17 = (char *)(v15 + 1);
    for ( i = v11; i; --i )
    {
      Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(v17);
      v17 += 8;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v3[2] = v16;
  v19 = 8 * v11;
  if ( !is_mul_ok(v11, 8uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v3[2];
  v3[4] = v20;
  if ( !v21 )
  {
LABEL_21:
    operator delete((void *)v3[4]);
    v3[2] = 0LL;
    v3[4] = 0LL;
LABEL_22:
    v2 = -2147024882;
    goto LABEL_23;
  }
  if ( !v20 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
    goto LABEL_21;
  }
  v3[3] = v21;
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(v3);
  *a1 = v3;
LABEL_23:
  if ( v3 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v3 + 12), v7) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v2;
}
