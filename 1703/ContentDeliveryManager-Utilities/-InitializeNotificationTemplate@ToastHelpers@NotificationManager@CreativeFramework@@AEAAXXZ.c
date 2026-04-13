/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180065564
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180060CD8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18005C670 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18006157C (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180064AB0 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x180066FD0 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(void **this)
{
  unsigned __int64 v2; // rdi
  void *v3; // rbx
  void **v4; // rax
  __int64 v5; // rsi
  void ***v6; // rbx
  const char *v7; // rdx
  int v8; // eax
  void *v9; // rbx
  void **v10; // rax
  char *v11; // rdx
  _QWORD v12[2]; // [rsp+48h] [rbp-49h] BYREF
  void *v13[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v14; // [rsp+68h] [rbp-29h]
  unsigned __int64 v15; // [rsp+70h] [rbp-21h]
  void *v16[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v17; // [rsp+88h] [rbp-9h]
  unsigned __int64 v18; // [rsp+90h] [rbp-1h]
  char *v19[3]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v12[1] = -2LL;
  v15 = 7LL;
  v2 = 0LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::assign(v13, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v3 = this[4];
  if ( (void *)*std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                  (__int64)(this + 4),
                  v12,
                  v13) == v3 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
  }
  if ( v15 >= 8 )
    operator delete(v13[0]);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::assign(v13, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v4 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v13);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  v5 = -1LL;
  std::wstring::assign((void **)v19, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v15 >= 8 )
    operator delete(v13[0]);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  v6 = (void ***)&unk_1800F35F0;
  while ( !std::operator==<wchar_t>(v19, v6[1]) )
  {
    v6 += 3;
    if ( v6 == &std::logic_error `RTTI Type Descriptor' )
    {
      v7 = (const char *)v19;
      if ( v20 >= 8 )
        v7 = v19[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xCB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        this[2] == 0LL,
        (__int64)"%ls",
        v7);
      goto LABEL_26;
    }
  }
  v8 = *(_DWORD *)v6;
  *((_DWORD *)this + 12) = *(_DWORD *)v6;
  if ( v8 == 6 )
  {
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
    std::wstring::assign(v16, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    v9 = this[4];
    if ( (void *)*std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                    (__int64)(this + 4),
                    v12,
                    v16) == v9 )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL);
    }
    if ( v18 >= 8 )
      operator delete(v16[0]);
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
    std::wstring::assign(v16, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    v10 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v16);
    if ( this != v10 )
      std::wstring::assign(this, v10, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v18 >= 8 )
      operator delete(v16[0]);
  }
  else
  {
    v11 = (char *)v6[2];
    if ( *(_WORD *)v11 )
    {
      do
        ++v5;
      while ( *(_WORD *)&v11[2 * v5] );
      v2 = v5;
    }
    std::wstring::assign(this, v11, v2);
  }
LABEL_26:
  if ( v20 >= 8 )
    operator delete(v19[0]);
}
