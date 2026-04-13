/*
 * XREFs of ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x180064B34
 * Callers:
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180064FF0 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::Actions::PublishWindowsTipService *__fastcall CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
        CreativeFramework::Actions::PublishWindowsTipService *this,
        wchar_t *a2,
        wchar_t *a3)
{
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char v9; // al
  char v10; // cl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::PublishWindowsTipService::`vftable';
  v5 = (_QWORD *)((char *)this + 8);
  v5[3] = 7LL;
  v5[2] = 0LL;
  *(_WORD *)v5 = 0;
  v6 = -1LL;
  if ( *a2 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::assign(v5, (char *)a2, v7);
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *a3 )
  {
    do
      ++v6;
    while ( a3[v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 5, (char *)a3, v6);
  v8 = *((_QWORD *)this + 3);
  v9 = 1;
  if ( v8 > 0x100 || (v10 = 0, !v8) )
    v10 = 1;
  if ( v10 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( v8 <= 0x100 && *((_QWORD *)this + 7) )
    v9 = 0;
  if ( v9 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL);
  }
  return this;
}
