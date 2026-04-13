/*
 * XREFs of ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x180065080
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180057924 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PublishSystemStateService::Invoke(
        CreativeFramework::Actions::PublishSystemStateService *this)
{
  int v2; // eax
  const WCHAR *v3; // rax
  __int64 v4; // rbx
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h] BYREF
  const WCHAR *v9[2]; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v8);
  v7 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 104LL))(v8, &v7);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v3 = *(const WCHAR **)v3;
  v9[0] = v3;
  v4 = v7;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, v9);
  v6 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD, _QWORD))(*(_QWORD *)v4 + 48LL))(
         v4,
         v5[1].Reserved.Reserved1,
         *((unsigned int *)this + 12),
         *((_QWORD *)this + 5));
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
