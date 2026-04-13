/*
 * XREFs of ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18005A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057BB8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x18005A9EC (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::MakeSetDefaultApplicationService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  void **v6; // rax
  void **v7; // rax
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  void **v11; // [rsp+30h] [rbp-51h] BYREF
  void **v12; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-31h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-29h]
  void *v16[3]; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-9h]
  void *v18[3]; // [rsp+80h] [rbp-1h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+17h]
  void *v20[4]; // [rsp+A0h] [rbp+1Fh] BYREF

  v13[1] = -2LL;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v20, a3, (char *)L"category");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v11 = v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v18, a3, (char *)L"packageRelativeAppId");
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v12 = v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v16, a3, (char *)L"packageFamilyName");
  if ( (unsigned __int64)v7[3] >= 8 )
    v7 = (void **)*v7;
  v13[0] = v7;
  v8 = (_QWORD *)((__int64 (__fastcall *)(_BYTE *, _QWORD *, void ***, void ***, _DWORD))std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>)(
                   v14,
                   v13,
                   &v12,
                   &v11,
                   0);
  *a1 = *v8;
  a1[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  v9 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( v17 >= 8 )
    operator delete(v16[0]);
  v17 = 7LL;
  v16[2] = 0LL;
  LOWORD(v16[0]) = 0;
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v20[3] >= (void *)8 )
    operator delete(v20[0]);
  return a1;
}
