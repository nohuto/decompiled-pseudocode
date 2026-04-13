/*
 * XREFs of ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x180003B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000256C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180002FC8 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_AppManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IAppManager **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  CreativeFramework::LockScreenCategoryConfig *v8; // rcx
  int IsCallerInAllowedAppList; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+18h]
  _QWORD *v18; // [rsp+68h] [rbp+20h]

  *a2 = 0LL;
  v16 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v17 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_11:
    v10 = (unsigned int)v5;
    v11 = 163LL;
LABEL_14:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v11,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v10);
    goto LABEL_16;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  v4[7] = 1LL;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>>>,1,1>'};
  v7 = v4 + 4;
  v4[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v8 = (CreativeFramework::LockScreenCategoryConfig *)(v4 + 5);
  v4[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v17;
  }
  *v4 = &ContentManagement::AppManager::`vftable'{for `IInspectable'};
  *v6 = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *v7 = &ContentManagement::AppManager::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)v8 = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>,1,0>'};
  v18 = v4;
  v17 = 0LL;
  IsCallerInAllowedAppList = CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
                               v8,
                               (const unsigned __int16 *const *)&ContentManagement::AppManager::`vftable'{for `IWeakReferenceSource'});
  v5 = IsCallerInAllowedAppList;
  if ( IsCallerInAllowedAppList >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD))*v4)(v4, &GUID_05e033e9_71df_4144_a1c6_a80806e71984, &v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      53LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)IsCallerInAllowedAppList);
    if ( !v4 )
      goto LABEL_10;
  }
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
LABEL_10:
  if ( v5 < 0 )
    goto LABEL_11;
  v12 = (**v16)(v16, &GUID_05e033e9_71df_4144_a1c6_a80806e71984, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v11 = 164LL;
    goto LABEL_14;
  }
  v5 = 0;
LABEL_16:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v13)[2])(v13);
  }
  return (unsigned int)v5;
}
