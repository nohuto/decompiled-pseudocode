/*
 * XREFs of ??$MakeAndInitialize@VSimpleTimeProvider@?A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteractionDevices@@@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractionDevices@@@Z @ 0x18009B628
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004FF64 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@VFtmBase@WRL@Micr.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<`anonymous namespace'::SimpleTimeProvider,SpatialInteractionDevices::IHapticsTimerProvider>(
        _QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int ActivationFactory; // ebx
  HANDLE *p_LockSemaphore; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  HRESULT v8; // eax
  ULONG_PTR SpinCount; // rcx
  HSTRING v10; // rbp
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    p_LockSemaphore = &v3->LockSemaphore;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>(&v3->LockSemaphore);
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    v4->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `SpatialInteractionDevices::IHapticsTimerProvider'};
    *(_QWORD *)&v4->LockCount = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v4->OwningThread = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
    *p_LockSemaphore = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v4[1].OwningThread = HANDLE_FLAG_INHERIT;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    v4->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)off_1800A9860;
    *(_QWORD *)&v4->LockCount = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v4->OwningThread = off_1800A97C8;
    *p_LockSemaphore = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v4[1].LockSemaphore = 0LL;
    v4[1].SpinCount = 0LL;
    InitializeCriticalSectionEx(v4 + 2, 0, 0);
    string = 0LL;
    v2 = v4;
    v8 = WindowsCreateStringReference(L"Windows.System.Threading.ThreadPoolTimer", 0x28u, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      JUMPOUT(0x18009B7D1LL);
    }
    SpinCount = v4[1].SpinCount;
    v10 = string;
    if ( SpinCount )
    {
      v4[1].SpinCount = 0LL;
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
    }
    ActivationFactory = RoGetActivationFactory(v10, &GUID_1a8a9d02_e482_461b_b8c7_8efad1cce590, &v4[1].SpinCount);
    if ( ActivationFactory >= 0 )
      ActivationFactory = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, _QWORD *))v2->DebugInfo->Type)(
                            v2,
                            &GUID_2961038b_b15c_4430_90c9_29048094d5ef,
                            a1);
  }
  else
  {
    ActivationFactory = -2147024882;
  }
  if ( v2 )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v2->DebugInfo->ProcessLocksList.Flink)(v2);
  return (unsigned int)ActivationFactory;
}
