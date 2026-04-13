/*
 * XREFs of ?MakeAppUninstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180057310
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057BB8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAppUninstallService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VAppUninstallService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x180057F08 (--$make_shared@VAppUninstallService@Actions@CreativeFramework@@PEB_W@std@@YA-AV-$shared_ptr@VApp.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::Actions::MakeAppUninstallService(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  volatile signed __int32 *v4; // rbx
  _QWORD v6[2]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp-38h]
  void *v9[4]; // [rsp+48h] [rbp-30h] BYREF

  v6[1] = -2LL;
  v2 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v9);
  if ( v2[3] >= 8uLL )
    v2 = (_QWORD *)*v2;
  v6[0] = v2;
  v3 = (_QWORD *)std::make_shared<CreativeFramework::Actions::AppUninstallService,wchar_t const *>(v7, v6);
  *a1 = *v3;
  a1[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  v4 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  if ( v9[3] >= (void *)8 )
    operator delete(v9[0]);
  return a1;
}
