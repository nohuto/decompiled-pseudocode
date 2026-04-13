/*
 * XREFs of ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180059370
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057BB8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180057CF0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x180059920 (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::MakePinToStartService(_QWORD *a1, __int64 a2, void ***a3)
{
  const WCHAR *v5; // rax
  _QWORD *v6; // rax
  void **v7; // rax
  void **v8; // rax
  _QWORD *started; // rax
  volatile signed __int32 *v10; // rbx
  bool v12[4]; // [rsp+38h] [rbp-79h] BYREF
  int v13; // [rsp+3Ch] [rbp-75h]
  _QWORD *v14; // [rsp+40h] [rbp-71h] BYREF
  void **v15; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-61h] BYREF
  char v17; // [rsp+60h] [rbp-51h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp-49h]
  void *v19[3]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-29h]
  void *v21[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp-9h]
  void *v23[3]; // [rsp+B0h] [rbp-1h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp+17h]
  void *v25[4]; // [rsp+D0h] [rbp+1Fh] BYREF

  v16[1] = -2LL;
  v13 = 0;
  v5 = (const WCHAR *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(
                        v25,
                        a3,
                        (char *)L"useExistingTile");
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  v12[0] = CompareStringOrdinal(v5, -1, L"true", -1, 1) == 2;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v23, a3, (char *)L"pinnedTileSize");
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v14 = v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v21, a3, (char *)L"packageRelativeAppId");
  if ( (unsigned __int64)v7[3] >= 8 )
    v7 = (void **)*v7;
  v15 = v7;
  v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v19, a3, (char *)L"packageFamilyName");
  if ( (unsigned __int64)v8[3] >= 8 )
    v8 = (void **)*v8;
  v16[0] = v8;
  started = (_QWORD *)std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
                        (unsigned int)&v17,
                        (unsigned int)v16,
                        (unsigned int)&v15,
                        (unsigned int)&v14,
                        (__int64)v12);
  *a1 = *started;
  a1[1] = started[1];
  *started = 0LL;
  started[1] = 0LL;
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
