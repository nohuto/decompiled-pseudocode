/*
 * XREFs of ?ConvertToStoreRecord@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x180056A14
 * Callers:
 *     ?InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z @ 0x180056C08 (-InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@5678@@Z @ 0x180015B74 (--$Make@V-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18005784C (--$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CreativeFramework::Actions::ConvertToStoreRecord(_QWORD *a1, const WCHAR *a2, const WCHAR *a3)
{
  const WCHAR *v6; // rbx
  int v7; // r14d
  __int64 v8; // rdi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v19; // [rsp+28h] [rbp-58h] BYREF
  int v20; // [rsp+30h] [rbp-50h]
  const WCHAR *v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  _QWORD *v23; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v24; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v22 = -2LL;
  v23 = a1;
  v20 = 0;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::permission>((__int64 *)&v19);
  if ( v19 )
  {
    v6 = v19;
    v21 = v19;
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  wil::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(&v18);
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const WCHAR **)a2;
  v19 = a2;
  v8 = v18;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v19);
  v10 = (*(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v8 + 56LL))(v8, v9[1].Reserved.Reserved1);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v10);
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    a3 = *(const WCHAR **)a3;
  v19 = a3;
  v11 = v18;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v19);
  v13 = (*(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v11 + 104LL))(v11, v12[1].Reserved.Reserved1);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v13);
  v14 = v18;
  v18 = 0LL;
  v15 = (*(__int64 (__fastcall **)(const WCHAR *, __int64))(*(_QWORD *)v6 + 104LL))(v6, v14);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v20 = 1;
  *a1 = 0LL;
  v16 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a1);
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v16);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v6 + 16LL))(v6);
  return a1;
}
