/*
 * XREFs of ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800570F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057BB8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057CF0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAppInstallService@Actions@CreativeFramework@@PEB_WPEB_W_N_N@std@@YA?AV?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N1@Z @ 0x180057E80 (--$make_shared@VAppInstallService@Actions@CreativeFramework@@PEB_WPEB_W_N_N@std@@YA-AV-$shared_p.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::MakeAppInstallService(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rbx
  bool v12; // [rsp+38h] [rbp-79h] BYREF
  bool v13; // [rsp+39h] [rbp-78h] BYREF
  int v14; // [rsp+3Ch] [rbp-75h]
  _QWORD *v15; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-69h] BYREF
  char v17; // [rsp+58h] [rbp-59h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp-51h]
  void *v19[3]; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp-31h]
  void *v21[3]; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v22; // [rsp+A0h] [rbp-11h]
  void *v23[3]; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v24; // [rsp+C0h] [rbp+Fh]
  void *v25[4]; // [rsp+C8h] [rbp+17h] BYREF

  v16[1] = -2LL;
  v14 = 0;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v25, a3, L"hasOpenLicense");
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v12 = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v23, a3, L"isUserInteractive");
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v6 = *(_QWORD *)v6;
  v13 = CompareStringOrdinal((LPCWCH)v6, -1, L"true", -1, 1) == 2;
  v7 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v21);
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  v15 = v7;
  v8 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v19);
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  v16[0] = v8;
  v9 = (_QWORD *)std::make_shared<CreativeFramework::Actions::AppInstallService,wchar_t const *,wchar_t const *,bool,bool>(
                   (unsigned int)&v17,
                   (unsigned int)v16,
                   (unsigned int)&v15,
                   (unsigned int)&v13,
                   (__int64)&v12);
  *a1 = *v9;
  a1[1] = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  v10 = v18;
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  if ( v22 >= 8 )
    operator delete(v21[0]);
  v22 = 7LL;
  v21[2] = 0LL;
  LOWORD(v21[0]) = 0;
  if ( v24 >= 8 )
    operator delete(v23[0]);
  v24 = 7LL;
  v23[2] = 0LL;
  LOWORD(v23[0]) = 0;
  if ( v25[3] >= (void *)8 )
    operator delete(v25[0]);
  return a1;
}
