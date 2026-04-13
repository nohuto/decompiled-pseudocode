/*
 * XREFs of ??$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18005784C
 * Callers:
 *     ?ConvertToStoreRecord@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x180056A14 (-ConvertToStoreRecord@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVInstallAppI.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$query@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180057FC4 (--$query@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@-$com.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
        __int64 a1)
{
  HSTRING_HEADER *v2; // rdi
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+28h] [rbp-50h]
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = (const WCHAR *)-2LL;
  v6 = 0;
  v7[0] = L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7);
  v5 = 0LL;
  v3 = RoActivateInstance(v2[1].Reserved.Reserved1, &v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
    &v5,
    a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return a1;
}
