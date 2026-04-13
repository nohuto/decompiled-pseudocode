/*
 * XREFs of ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x180018B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180021380 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
ContentManagement::ContentManagementService *__fastcall ContentManagement::ContentManagementService::`scalar deleting destructor'(
        ContentManagement::ContentManagementService *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &ContentManagement::ContentManagementService::`vftable';
  *((_QWORD *)this + 1) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 4) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 5) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessCreativeEvent'};
  *((_QWORD *)this + 6) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 7) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessStartMenuEvent'};
  *((_QWORD *)this + 8) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>,1,0>'};
  ContentManagement::ContentManagementService::CloseConnection(this);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 10);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v6));
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
