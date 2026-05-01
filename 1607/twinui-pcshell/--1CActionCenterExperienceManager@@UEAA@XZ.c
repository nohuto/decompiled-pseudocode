/*
 * XREFs of ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18001009C
 * Callers:
 *     ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x180010040 (--_GCActionCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800182A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18001B6EC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180026F78 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CActionCenterExperienceManager::~CActionCenterExperienceManager(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &CActionCenterExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>>,1,0>'};
  *((_QWORD *)this + 2) = &CActionCenterExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 4) = &CActionCenterExperienceManager::`vftable'{for `IEdgeUiInvocation'};
  *((_QWORD *)this + 5) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 6) = &CActionCenterExperienceManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 7) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 8) = &CActionCenterExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 9) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 12) = &CActionCenterExperienceManager::`vftable';
  v2 = *((_QWORD *)this + 73);
  if ( v2 )
  {
    *((_QWORD *)this + 73) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  v3 = *((_QWORD *)this + 70);
  if ( v3 )
  {
    *((_QWORD *)this + 70) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
  v4 = *((_QWORD *)this + 68);
  if ( v4 )
  {
    *((_QWORD *)this + 68) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 66);
  if ( v5 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 65);
  if ( v6 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 62);
  if ( v7 )
  {
    *((_QWORD *)this + 62) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 61);
  if ( v8 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 60);
  if ( v9 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 58);
  if ( v10 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  WindowsDeleteString(*((HSTRING *)this + 55));
  *((_QWORD *)this + 55) = 0LL;
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 384));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 352));
  v11 = *((_QWORD *)this + 41);
  if ( v11 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CActionCenterExperienceManager *)((char *)this + 112));
  v12 = *((_QWORD *)this + 13);
  if ( v12 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 11);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v13);
}
