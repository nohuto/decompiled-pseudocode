/*
 * XREFs of ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180060640
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057BB8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057CF0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x180060A7C (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x180060B64 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::MakePinToTaskbarService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rdi
  void **v8; // rax
  void **v9; // rax
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rdi
  char v13; // [rsp+28h] [rbp-69h] BYREF
  char v14[3]; // [rsp+29h] [rbp-68h] BYREF
  int v15; // [rsp+2Ch] [rbp-65h]
  void **v16; // [rsp+30h] [rbp-61h] BYREF
  void **v17; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-41h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-39h]
  _BYTE v21[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v22; // [rsp+68h] [rbp-29h]
  void *v23[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-9h]
  void *v25[3]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp+17h]
  void *v27[3]; // [rsp+B0h] [rbp+1Fh] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+37h]

  v18[1] = -2LL;
  v15 = 0;
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v23, a3, (char *)L"applicationId");
  if ( v23[2] )
  {
    v13 = 1;
    v5 = v23;
    if ( v24 >= 8 )
      v5 = (void **)v23[0];
    v16 = v5;
    v6 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(v19, &v16, &v13);
    *a1 = *v6;
    a1[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    v7 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    v14[0] = 1;
    v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v27, a3, (char *)L"packageRelativeAppId");
    if ( (unsigned __int64)v8[3] >= 8 )
      v8 = (void **)*v8;
    v17 = v8;
    v9 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v25, a3, (char *)L"packageFamilyName");
    if ( (unsigned __int64)v9[3] >= 8 )
      v9 = (void **)*v9;
    v18[0] = v9;
    v10 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
                      v21,
                      v18,
                      &v17,
                      v14);
    *a1 = *v10;
    a1[1] = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v11 = v22;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    if ( v26 >= 8 )
      operator delete(v25[0]);
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
    if ( v28 >= 8 )
      operator delete(v27[0]);
    v28 = 7LL;
    v27[2] = 0LL;
    LOWORD(v27[0]) = 0;
  }
  if ( v24 >= 8 )
    operator delete(v23[0]);
  return a1;
}
