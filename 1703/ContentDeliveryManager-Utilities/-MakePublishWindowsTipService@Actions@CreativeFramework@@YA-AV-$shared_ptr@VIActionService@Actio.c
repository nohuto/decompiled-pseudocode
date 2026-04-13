/*
 * XREFs of ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180064EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057BB8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180064FF0 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::Actions::MakePublishWindowsTipService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  void **v6; // rax
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rbx
  void **v10; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-19h] BYREF
  volatile signed __int32 *v13; // [rsp+50h] [rbp-11h]
  void *v14[3]; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+Fh]
  void *v16[4]; // [rsp+78h] [rbp+17h] BYREF

  v11[1] = -2LL;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v16, a3, (char *)L"ctx.containerPath");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v10 = v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v14, a3, (char *)L"ctx.contentId");
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v11[0] = v6;
  v7 = (_QWORD *)std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
                   v12,
                   v11,
                   &v10);
  *a1 = *v7;
  a1[1] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  v8 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v15 >= 8 )
    operator delete(v14[0]);
  v15 = 7LL;
  v14[2] = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v16[3] >= (void *)8 )
    operator delete(v16[0]);
  return a1;
}
