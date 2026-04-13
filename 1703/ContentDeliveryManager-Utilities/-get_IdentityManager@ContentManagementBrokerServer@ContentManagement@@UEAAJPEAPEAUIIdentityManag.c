/*
 * XREFs of ?get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManager@2@@Z @ 0x18000F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180006DF8 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_IdentityManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IIdentityManager **a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  CreativeFramework::LockScreenCategoryConfig *v9; // rcx
  int IsCallerInAllowedAppList; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v13; // [rsp+48h] [rbp+10h]

  v3 = 2LL;
  do
  {
    *a2 = 0LL;
    --v3;
  }
  while ( v3 );
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = v4;
  v13 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x32C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v7 = v4 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 1));
  v5[7] = 1LL;
  *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil>>>,1,1>'};
  v8 = v5 + 4;
  v5[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v9 = (CreativeFramework::LockScreenCategoryConfig *)(v5 + 5);
  v5[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v5 = v13;
  }
  *v5 = &ContentManagement::IdentityManager::`vftable'{for `IInspectable'};
  *v7 = &ContentManagement::IdentityManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *v8 = &ContentManagement::IdentityManager::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)v9 = &ContentManagement::IdentityManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil>,1,0>'};
  IsCallerInAllowedAppList = CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
                               v9,
                               (const unsigned __int16 *const *)&ContentManagement::IdentityManager::`vftable'{for `IWeakReferenceSource'});
  v6 = IsCallerInAllowedAppList;
  if ( IsCallerInAllowedAppList >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct ContentManagement::IIdentityManager **))*v5)(
           v5,
           &GUID_4d87b505_273b_4fd3_b58f_2cbb586e954e,
           a2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)IsCallerInAllowedAppList);
    if ( !v5 )
      goto LABEL_12;
  }
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
LABEL_12:
  if ( v6 < 0 )
    goto LABEL_13;
  return 0LL;
}
