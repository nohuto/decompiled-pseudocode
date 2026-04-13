/*
 * XREFs of ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x180060498
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x180060590 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetTaskBarSuggestionsPinHelper@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UITaskBarSuggestionsPinHelper@TaskBarSuggestions@UI@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800603C4 (-GetTaskBarSuggestionsPinHelper@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UITaskBarSuggestions.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PinApp(const WCHAR *this, const wchar_t *a2, __int64 a3, const wchar_t *a4)
{
  char v4; // si
  __int64 v5; // rdi
  HSTRING_HEADER *v6; // rbx
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  char v10; // [rsp+20h] [rbp-88h]
  __int64 v11; // [rsp+30h] [rbp-78h] BYREF
  const WCHAR *v12; // [rsp+38h] [rbp-70h] BYREF
  const WCHAR *v13[2]; // [rsp+40h] [rbp-68h] BYREF
  HSTRING_HEADER v14; // [rsp+50h] [rbp-58h] BYREF
  HSTRING_HEADER v15; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v13[1] = (const WCHAR *)-2LL;
  v4 = (char)a4;
  v13[0] = this;
  v12 = &word_180091F08;
  CreativeFramework::Actions::GetTaskBarSuggestionsPinHelper(&v11);
  v5 = v11;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, &v12);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, v13);
  v10 = v4;
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID, char))(*(_QWORD *)v5 + 48LL))(
         v5,
         v7[1].Reserved.Reserved1,
         v8,
         v6[1].Reserved.Reserved1,
         v10);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v9);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
