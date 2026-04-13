/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180061224
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x180061110 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180057924 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18005C670 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18006157C (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180065870 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(const WCHAR **this)
{
  int v2; // eax
  bool v3; // r14
  const WCHAR *v4; // rax
  __int64 ToastContentXML; // rax
  __int64 v6; // rdi
  HSTRING_HEADER *v7; // rbx
  HSTRING_HEADER *v8; // rax
  const WCHAR *v9; // r9
  int v10; // eax
  __int64 v11; // [rsp+38h] [rbp-49h] BYREF
  const WCHAR *v12; // [rsp+40h] [rbp-41h] BYREF
  __int64 v13; // [rsp+48h] [rbp-39h] BYREF
  const WCHAR *v14[2]; // [rsp+50h] [rbp-31h] BYREF
  void *v15[3]; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-9h]
  HSTRING_HEADER v17; // [rsp+80h] [rbp-1h] BYREF
  __int64 v18; // [rsp+98h] [rbp+17h]
  HSTRING_HEADER v19; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v14[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v13);
  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 72LL))(v13, &v11);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    this + 11,
    &v12,
    v15);
  if ( v16 >= 8 )
    operator delete(v15[0]);
  v3 = v12 != this[11] && std::operator==<wchar_t>((_QWORD *)v12 + 8, L"true");
  v4 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v4 = *(const WCHAR **)v4;
  v12 = v4;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[13], v15);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v14[0] = (const WCHAR *)ToastContentXML;
  v6 = v11;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, &v12);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, v14);
  v9 = this[10];
  LOBYTE(v9) = v3;
  v10 = (*(__int64 (__fastcall **)(__int64, PVOID, PVOID, const WCHAR *, const WCHAR *))(*(_QWORD *)v6 + 56LL))(
          v6,
          v8[1].Reserved.Reserved1,
          v7[1].Reserved.Reserved1,
          v9,
          this[10]);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v10);
  v18 = 0LL;
  v20 = 0LL;
  if ( v16 >= 8 )
    operator delete(v15[0]);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
}
